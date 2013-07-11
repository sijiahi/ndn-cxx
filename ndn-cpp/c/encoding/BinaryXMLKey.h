/**
 * @author: Jeff Thompson
 * See COPYING for copyright and distribution information.
 */

#ifndef NDN_BINARYXMLKEY_H
#define	NDN_BINARYXMLKEY_H

#include "../errors.h"
#include "../Key.h"
#include "BinaryXMLEncoder.h"
#include "BinaryXMLDecoder.h"

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * Encode the ndn_KeyLocator struct using Binary XML.  If keyLocator->type is -1, then do nothing. 
 * @param keyLocator pointer to the ndn_KeyLocator struct
 * @param encoder pointer to the ndn_BinaryXMLEncoder struct
 * @return 0 for success, else an error code
 */
ndn_Error ndn_encodeBinaryXMLKeyLocator(struct ndn_KeyLocator *keyLocator, struct ndn_BinaryXMLEncoder *encoder);

/**
 * Expect the next element to be a Binary XML KeyLocator and decode into the ndn_KeyLocator struct.
 * @param keyLocator pointer to the ndn_KeyLocator struct
 * @param decoder pointer to the ndn_BinaryXMLDecoder struct
 * @return 0 for success, else an error code, including if the next element is not KeyLocator.
 */
ndn_Error ndn_decodeBinaryXMLKeyLocator(struct ndn_KeyLocator *keyLocator, struct ndn_BinaryXMLDecoder *decoder);

/**
 * Peek the next element and if it is a Binary XML KeyLocator and decode into the ndn_KeyLocator struct.
 * Otherwise, set the ndn_KeyLocator struct to none.
 * @param keyLocator pointer to the ndn_KeyLocator struct
 * @param decoder pointer to the ndn_BinaryXMLDecoder struct
 * @return 0 for success, else an error code, including if the next element is not KeyLocator.
 */
ndn_Error ndn_decodeOptionalBinaryXMLKeyLocator(struct ndn_KeyLocator *keyLocator, struct ndn_BinaryXMLDecoder *decoder);

#ifdef	__cplusplus
}
#endif

#endif