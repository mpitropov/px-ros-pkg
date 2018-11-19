
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSImage.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "DDSImagePlugin.h"

/* ----------------------------------------------------------------------------
*  Type px_comm_DDSImage
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

px_comm_DDSImage*
px_comm_DDSImagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    px_comm_DDSImage *sample = NULL;

    sample = new (std::nothrow) px_comm_DDSImage ;
    if (sample == NULL) {
        return NULL;
    }

    if (!px_comm_DDSImage_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample; 
} 

px_comm_DDSImage *
px_comm_DDSImagePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    px_comm_DDSImage *sample = NULL;

    sample = new (std::nothrow) px_comm_DDSImage ;

    if(sample == NULL) {
        return NULL;
    }

    if (!px_comm_DDSImage_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample; 
}

px_comm_DDSImage *
px_comm_DDSImagePluginSupport_create_data(void)
{
    return px_comm_DDSImagePluginSupport_create_data_ex(RTI_TRUE);
}

void 
px_comm_DDSImagePluginSupport_destroy_data_w_params(
    px_comm_DDSImage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    px_comm_DDSImage_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
px_comm_DDSImagePluginSupport_destroy_data_ex(
    px_comm_DDSImage *sample,RTIBool deallocate_pointers) {

    px_comm_DDSImage_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
px_comm_DDSImagePluginSupport_destroy_data(
    px_comm_DDSImage *sample) {

    px_comm_DDSImagePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
px_comm_DDSImagePluginSupport_copy_data(
    px_comm_DDSImage *dst,
    const px_comm_DDSImage *src)
{
    return px_comm_DDSImage_copy(dst,(const px_comm_DDSImage*) src);
}

void 
px_comm_DDSImagePluginSupport_print_data(
    const px_comm_DDSImage *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printUnsignedLong(
        &sample->seq, "seq", indent_level + 1);    

    RTICdrType_printLong(
        &sample->stamp_sec, "stamp_sec", indent_level + 1);    

    RTICdrType_printLong(
        &sample->stamp_nsec, "stamp_nsec", indent_level + 1);    

    if (sample->frame_id==NULL) {
        RTICdrType_printString(
            NULL,"frame_id", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->frame_id,"frame_id", indent_level + 1);    
    }

    RTICdrType_printUnsignedLong(
        &sample->height, "height", indent_level + 1);    

    RTICdrType_printUnsignedLong(
        &sample->width, "width", indent_level + 1);    

    if (sample->encoding==NULL) {
        RTICdrType_printString(
            NULL,"encoding", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->encoding,"encoding", indent_level + 1);    
    }

    RTICdrType_printChar(
        &sample->is_bigendian, "is_bigendian", indent_level + 1);    

    RTICdrType_printUnsignedLong(
        &sample->step, "step", indent_level + 1);    

    if (DDS_CharSeq_get_contiguous_bufferI(&sample->data) != NULL) {
        RTICdrType_printArray(
            DDS_CharSeq_get_contiguous_bufferI(&sample->data),
            DDS_CharSeq_get_length(&sample->data),
            RTI_CDR_CHAR_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printChar,
            "data", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_CharSeq_get_discontiguous_bufferI(&sample->data),
            DDS_CharSeq_get_length(&sample->data ),
            (RTICdrTypePrintFunction)RTICdrType_printChar,
            "data", indent_level + 1);
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
px_comm_DDSImagePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
px_comm_DDSImagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
px_comm_DDSImagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        px_comm_DDSImagePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        px_comm_DDSImagePluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = px_comm_DDSImagePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            px_comm_DDSImagePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            px_comm_DDSImagePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
px_comm_DDSImagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
px_comm_DDSImagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage *sample,
    void *handle)
{

    px_comm_DDSImage_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
px_comm_DDSImagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage *dst,
    const px_comm_DDSImage *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return px_comm_DDSImagePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
px_comm_DDSImagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
px_comm_DDSImagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const px_comm_DDSImage *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeUnsignedLong(
            stream, &sample->seq)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->stamp_sec)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeLong(
            stream, &sample->stamp_nsec)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeString(
            stream, sample->frame_id, (255) + 1)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeUnsignedLong(
            stream, &sample->height)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeUnsignedLong(
            stream, &sample->width)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeString(
            stream, sample->encoding, (255) + 1)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeChar(
            stream, &sample->is_bigendian)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializeUnsignedLong(
            stream, &sample->step)) {
            return RTI_FALSE;
        }

        if (DDS_CharSeq_get_contiguous_bufferI(&sample->data) != NULL) {
            if (!RTICdrStream_serializePrimitiveSequence(
                stream,
                DDS_CharSeq_get_contiguous_bufferI(&sample->data),
                DDS_CharSeq_get_length(&sample->data),
                (1251936),
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializePrimitivePointerSequence(
                stream,
                (const void **) DDS_CharSeq_get_discontiguous_bufferI(&sample->data),
                DDS_CharSeq_get_length(&sample->data),
                (1251936), 
                RTI_CDR_CHAR_TYPE)) {
                return RTI_FALSE;
            } 
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
px_comm_DDSImagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    try {

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */
        if(deserialize_encapsulation) {

            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }
        if(deserialize_sample) {

            px_comm_DDSImage_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

            if (!RTICdrStream_deserializeUnsignedLong(
                stream, &sample->seq)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->stamp_sec)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeLong(
                stream, &sample->stamp_nsec)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeStringEx(
                stream,&sample->frame_id, (255) + 1, RTI_FALSE)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeUnsignedLong(
                stream, &sample->height)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeUnsignedLong(
                stream, &sample->width)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeStringEx(
                stream,&sample->encoding, (255) + 1, RTI_FALSE)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeChar(
                stream, &sample->is_bigendian)) {
                goto fin; 
            }
            if (!RTICdrStream_deserializeUnsignedLong(
                stream, &sample->step)) {
                goto fin; 
            }
            {
                RTICdrUnsignedLong sequence_length;
                if (DDS_CharSeq_get_contiguous_bufferI(&sample->data) != NULL) {
                    if (!RTICdrStream_deserializePrimitiveSequence(
                        stream,
                        DDS_CharSeq_get_contiguous_bufferI(&sample->data),
                        &sequence_length,
                        DDS_CharSeq_get_maximum(&sample->data),
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }
                } else {
                    if (!RTICdrStream_deserializePrimitivePointerSequence(
                        stream,
                        (void **) DDS_CharSeq_get_discontiguous_bufferI(&sample->data),
                        &sequence_length,
                        DDS_CharSeq_get_maximum(&sample->data),
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }
                }
                if (!DDS_CharSeq_set_length(&sample->data, sequence_length)) {
                    return RTI_FALSE;
                }

            }
        }

        done = RTI_TRUE;
      fin:
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

RTIBool
px_comm_DDSImagePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const px_comm_DDSImage *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    px_comm_DDSImagePlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

    if (buffer == NULL) {
        *length = 
        px_comm_DDSImagePlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTICdrEncapsulation_getNativeCdrEncapsulationId(),
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = px_comm_DDSImagePlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
px_comm_DDSImagePlugin_deserialize_from_cdr_buffer(
    px_comm_DDSImage *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    px_comm_DDSImage_finalize_optional_members(sample, RTI_TRUE);
    return px_comm_DDSImagePlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
px_comm_DDSImagePlugin_data_to_string(
    const px_comm_DDSImage *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!px_comm_DDSImagePlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!px_comm_DDSImagePlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        px_comm_DDSImage_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
px_comm_DDSImagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    const char *METHOD_NAME = "px_comm_DDSImagePlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= px_comm_DDSImagePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "px_comm_DDSImage");

    }

    return result;

}

RTIBool px_comm_DDSImagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipUnsignedLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipString (stream, (255)+1)) {
            goto fin; 
        }
        if (!RTICdrStream_skipUnsignedLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipUnsignedLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipString (stream, (255)+1)) {
            goto fin; 
        }
        if (!RTICdrStream_skipChar (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipUnsignedLong (stream)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipPrimitiveSequence(
                stream,
                &sequence_length,
                RTI_CDR_CHAR_TYPE)){
                goto fin; 
            }
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
px_comm_DDSImagePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, (255)+1);

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, (255)+1);

    current_alignment +=RTICdrType_getCharMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,(1251936),RTI_CDR_CHAR_TYPE) ;

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
px_comm_DDSImagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = px_comm_DDSImagePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
px_comm_DDSImagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, 1);
    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getStringMaxSizeSerialized(
        current_alignment, 1);
    current_alignment +=RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
    current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment,0, RTI_CDR_CHAR_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
px_comm_DDSImagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const px_comm_DDSImage * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getStringSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), sample->frame_id);

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getStringSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), sample->encoding);

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment));

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            DDS_CharSeq_get_length(&sample->data),
            RTI_CDR_CHAR_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
px_comm_DDSImagePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
px_comm_DDSImagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const px_comm_DDSImage *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!px_comm_DDSImagePlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool px_comm_DDSImagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try {

        char * position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(deserialize_encapsulation) {

            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            position = RTICdrStream_resetAlignment(stream);
        }
        if (deserialize_key) {

            if (!px_comm_DDSImagePlugin_deserialize_sample(
                endpoint_data, sample, stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }

        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,position);
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

RTIBool px_comm_DDSImagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= px_comm_DDSImagePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
px_comm_DDSImagePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += px_comm_DDSImagePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
px_comm_DDSImagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = px_comm_DDSImagePlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
px_comm_DDSImagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    px_comm_DDSImage *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!px_comm_DDSImagePlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *px_comm_DDSImagePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    px_comm_DDSImagePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    px_comm_DDSImagePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    px_comm_DDSImagePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    px_comm_DDSImagePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    px_comm_DDSImagePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    px_comm_DDSImagePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    px_comm_DDSImagePlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    px_comm_DDSImage_finalize_optional_members;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    px_comm_DDSImagePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    px_comm_DDSImagePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    px_comm_DDSImagePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    px_comm_DDSImagePlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    px_comm_DDSImagePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    px_comm_DDSImagePlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    px_comm_DDSImagePlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)px_comm_DDSImage_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    px_comm_DDSImagePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    px_comm_DDSImagePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    px_comm_DDSImagePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = px_comm_DDSImageTYPENAME;

    return plugin;
}

void
px_comm_DDSImagePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
