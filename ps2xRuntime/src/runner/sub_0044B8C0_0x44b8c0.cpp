#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044B8C0
// Address: 0x44b8c0 - 0x44bb60
void sub_0044B8C0_0x44b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B8C0_0x44b8c0");
#endif

    switch (ctx->pc) {
        case 0x44b8c0u: goto label_44b8c0;
        case 0x44b8c4u: goto label_44b8c4;
        case 0x44b8c8u: goto label_44b8c8;
        case 0x44b8ccu: goto label_44b8cc;
        case 0x44b8d0u: goto label_44b8d0;
        case 0x44b8d4u: goto label_44b8d4;
        case 0x44b8d8u: goto label_44b8d8;
        case 0x44b8dcu: goto label_44b8dc;
        case 0x44b8e0u: goto label_44b8e0;
        case 0x44b8e4u: goto label_44b8e4;
        case 0x44b8e8u: goto label_44b8e8;
        case 0x44b8ecu: goto label_44b8ec;
        case 0x44b8f0u: goto label_44b8f0;
        case 0x44b8f4u: goto label_44b8f4;
        case 0x44b8f8u: goto label_44b8f8;
        case 0x44b8fcu: goto label_44b8fc;
        case 0x44b900u: goto label_44b900;
        case 0x44b904u: goto label_44b904;
        case 0x44b908u: goto label_44b908;
        case 0x44b90cu: goto label_44b90c;
        case 0x44b910u: goto label_44b910;
        case 0x44b914u: goto label_44b914;
        case 0x44b918u: goto label_44b918;
        case 0x44b91cu: goto label_44b91c;
        case 0x44b920u: goto label_44b920;
        case 0x44b924u: goto label_44b924;
        case 0x44b928u: goto label_44b928;
        case 0x44b92cu: goto label_44b92c;
        case 0x44b930u: goto label_44b930;
        case 0x44b934u: goto label_44b934;
        case 0x44b938u: goto label_44b938;
        case 0x44b93cu: goto label_44b93c;
        case 0x44b940u: goto label_44b940;
        case 0x44b944u: goto label_44b944;
        case 0x44b948u: goto label_44b948;
        case 0x44b94cu: goto label_44b94c;
        case 0x44b950u: goto label_44b950;
        case 0x44b954u: goto label_44b954;
        case 0x44b958u: goto label_44b958;
        case 0x44b95cu: goto label_44b95c;
        case 0x44b960u: goto label_44b960;
        case 0x44b964u: goto label_44b964;
        case 0x44b968u: goto label_44b968;
        case 0x44b96cu: goto label_44b96c;
        case 0x44b970u: goto label_44b970;
        case 0x44b974u: goto label_44b974;
        case 0x44b978u: goto label_44b978;
        case 0x44b97cu: goto label_44b97c;
        case 0x44b980u: goto label_44b980;
        case 0x44b984u: goto label_44b984;
        case 0x44b988u: goto label_44b988;
        case 0x44b98cu: goto label_44b98c;
        case 0x44b990u: goto label_44b990;
        case 0x44b994u: goto label_44b994;
        case 0x44b998u: goto label_44b998;
        case 0x44b99cu: goto label_44b99c;
        case 0x44b9a0u: goto label_44b9a0;
        case 0x44b9a4u: goto label_44b9a4;
        case 0x44b9a8u: goto label_44b9a8;
        case 0x44b9acu: goto label_44b9ac;
        case 0x44b9b0u: goto label_44b9b0;
        case 0x44b9b4u: goto label_44b9b4;
        case 0x44b9b8u: goto label_44b9b8;
        case 0x44b9bcu: goto label_44b9bc;
        case 0x44b9c0u: goto label_44b9c0;
        case 0x44b9c4u: goto label_44b9c4;
        case 0x44b9c8u: goto label_44b9c8;
        case 0x44b9ccu: goto label_44b9cc;
        case 0x44b9d0u: goto label_44b9d0;
        case 0x44b9d4u: goto label_44b9d4;
        case 0x44b9d8u: goto label_44b9d8;
        case 0x44b9dcu: goto label_44b9dc;
        case 0x44b9e0u: goto label_44b9e0;
        case 0x44b9e4u: goto label_44b9e4;
        case 0x44b9e8u: goto label_44b9e8;
        case 0x44b9ecu: goto label_44b9ec;
        case 0x44b9f0u: goto label_44b9f0;
        case 0x44b9f4u: goto label_44b9f4;
        case 0x44b9f8u: goto label_44b9f8;
        case 0x44b9fcu: goto label_44b9fc;
        case 0x44ba00u: goto label_44ba00;
        case 0x44ba04u: goto label_44ba04;
        case 0x44ba08u: goto label_44ba08;
        case 0x44ba0cu: goto label_44ba0c;
        case 0x44ba10u: goto label_44ba10;
        case 0x44ba14u: goto label_44ba14;
        case 0x44ba18u: goto label_44ba18;
        case 0x44ba1cu: goto label_44ba1c;
        case 0x44ba20u: goto label_44ba20;
        case 0x44ba24u: goto label_44ba24;
        case 0x44ba28u: goto label_44ba28;
        case 0x44ba2cu: goto label_44ba2c;
        case 0x44ba30u: goto label_44ba30;
        case 0x44ba34u: goto label_44ba34;
        case 0x44ba38u: goto label_44ba38;
        case 0x44ba3cu: goto label_44ba3c;
        case 0x44ba40u: goto label_44ba40;
        case 0x44ba44u: goto label_44ba44;
        case 0x44ba48u: goto label_44ba48;
        case 0x44ba4cu: goto label_44ba4c;
        case 0x44ba50u: goto label_44ba50;
        case 0x44ba54u: goto label_44ba54;
        case 0x44ba58u: goto label_44ba58;
        case 0x44ba5cu: goto label_44ba5c;
        case 0x44ba60u: goto label_44ba60;
        case 0x44ba64u: goto label_44ba64;
        case 0x44ba68u: goto label_44ba68;
        case 0x44ba6cu: goto label_44ba6c;
        case 0x44ba70u: goto label_44ba70;
        case 0x44ba74u: goto label_44ba74;
        case 0x44ba78u: goto label_44ba78;
        case 0x44ba7cu: goto label_44ba7c;
        case 0x44ba80u: goto label_44ba80;
        case 0x44ba84u: goto label_44ba84;
        case 0x44ba88u: goto label_44ba88;
        case 0x44ba8cu: goto label_44ba8c;
        case 0x44ba90u: goto label_44ba90;
        case 0x44ba94u: goto label_44ba94;
        case 0x44ba98u: goto label_44ba98;
        case 0x44ba9cu: goto label_44ba9c;
        case 0x44baa0u: goto label_44baa0;
        case 0x44baa4u: goto label_44baa4;
        case 0x44baa8u: goto label_44baa8;
        case 0x44baacu: goto label_44baac;
        case 0x44bab0u: goto label_44bab0;
        case 0x44bab4u: goto label_44bab4;
        case 0x44bab8u: goto label_44bab8;
        case 0x44babcu: goto label_44babc;
        case 0x44bac0u: goto label_44bac0;
        case 0x44bac4u: goto label_44bac4;
        case 0x44bac8u: goto label_44bac8;
        case 0x44baccu: goto label_44bacc;
        case 0x44bad0u: goto label_44bad0;
        case 0x44bad4u: goto label_44bad4;
        case 0x44bad8u: goto label_44bad8;
        case 0x44badcu: goto label_44badc;
        case 0x44bae0u: goto label_44bae0;
        case 0x44bae4u: goto label_44bae4;
        case 0x44bae8u: goto label_44bae8;
        case 0x44baecu: goto label_44baec;
        case 0x44baf0u: goto label_44baf0;
        case 0x44baf4u: goto label_44baf4;
        case 0x44baf8u: goto label_44baf8;
        case 0x44bafcu: goto label_44bafc;
        case 0x44bb00u: goto label_44bb00;
        case 0x44bb04u: goto label_44bb04;
        case 0x44bb08u: goto label_44bb08;
        case 0x44bb0cu: goto label_44bb0c;
        case 0x44bb10u: goto label_44bb10;
        case 0x44bb14u: goto label_44bb14;
        case 0x44bb18u: goto label_44bb18;
        case 0x44bb1cu: goto label_44bb1c;
        case 0x44bb20u: goto label_44bb20;
        case 0x44bb24u: goto label_44bb24;
        case 0x44bb28u: goto label_44bb28;
        case 0x44bb2cu: goto label_44bb2c;
        case 0x44bb30u: goto label_44bb30;
        case 0x44bb34u: goto label_44bb34;
        case 0x44bb38u: goto label_44bb38;
        case 0x44bb3cu: goto label_44bb3c;
        case 0x44bb40u: goto label_44bb40;
        case 0x44bb44u: goto label_44bb44;
        case 0x44bb48u: goto label_44bb48;
        case 0x44bb4cu: goto label_44bb4c;
        case 0x44bb50u: goto label_44bb50;
        case 0x44bb54u: goto label_44bb54;
        case 0x44bb58u: goto label_44bb58;
        case 0x44bb5cu: goto label_44bb5c;
        default: break;
    }

    ctx->pc = 0x44b8c0u;

label_44b8c0:
    // 0x44b8c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b8c4:
    // 0x44b8c4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x44b8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_44b8c8:
    // 0x44b8c8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x44b8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_44b8cc:
    // 0x44b8cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b8d0:
    // 0x44b8d0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x44b8d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_44b8d4:
    // 0x44b8d4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x44b8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_44b8d8:
    // 0x44b8d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b8dc:
    // 0x44b8dc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x44b8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_44b8e0:
    // 0x44b8e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b8e4:
    // 0x44b8e4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x44b8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_44b8e8:
    // 0x44b8e8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x44b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_44b8ec:
    // 0x44b8ec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x44b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_44b8f0:
    // 0x44b8f0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x44b8f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_44b8f4:
    // 0x44b8f4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x44b8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_44b8f8:
    // 0x44b8f8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x44b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_44b8fc:
    // 0x44b8fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b900:
    // 0x44b900: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x44b900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_44b904:
    // 0x44b904: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x44b904u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_44b908:
    // 0x44b908: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x44b908u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_44b90c:
    // 0x44b90c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x44b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_44b910:
    // 0x44b910: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x44b910u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_44b914:
    // 0x44b914: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x44b914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_44b918:
    // 0x44b918: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x44b918u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_44b91c:
    // 0x44b91c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x44b91cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_44b920:
    // 0x44b920: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x44b920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_44b924:
    // 0x44b924: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x44b924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_44b928:
    // 0x44b928: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44b928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44b92c:
    // 0x44b92c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x44b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_44b930:
    // 0x44b930: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x44b930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_44b934:
    // 0x44b934: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x44b934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44b938:
    // 0x44b938: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x44b938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_44b93c:
    // 0x44b93c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x44b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_44b940:
    // 0x44b940: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x44b940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_44b944:
    // 0x44b944: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_44b948:
    // 0x44b948: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x44b948u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_44b94c:
    // 0x44b94c: 0x3e00008  jr          $ra
label_44b950:
    if (ctx->pc == 0x44B950u) {
        ctx->pc = 0x44B950u;
            // 0x44b950: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x44B954u;
        goto label_44b954;
    }
    ctx->pc = 0x44B94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B94Cu;
            // 0x44b950: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44B954u;
label_44b954:
    // 0x44b954: 0x0  nop
    ctx->pc = 0x44b954u;
    // NOP
label_44b958:
    // 0x44b958: 0x0  nop
    ctx->pc = 0x44b958u;
    // NOP
label_44b95c:
    // 0x44b95c: 0x0  nop
    ctx->pc = 0x44b95cu;
    // NOP
label_44b960:
    // 0x44b960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44b964:
    // 0x44b964: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44b968:
    // 0x44b968: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44b96c:
    // 0x44b96c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44b970:
    // 0x44b970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44b974:
    // 0x44b974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44b978:
    // 0x44b978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44b97c:
    // 0x44b97c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44b97cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44b980:
    // 0x44b980: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
label_44b984:
    if (ctx->pc == 0x44B984u) {
        ctx->pc = 0x44B984u;
            // 0x44b984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44B988u;
        goto label_44b988;
    }
    ctx->pc = 0x44B980u;
    {
        const bool branch_taken_0x44b980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44B980u;
            // 0x44b984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b980) {
            ctx->pc = 0x44BA14u;
            goto label_44ba14;
        }
    }
    ctx->pc = 0x44B988u;
label_44b988:
    // 0x44b988: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44b988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44b98c:
    // 0x44b98c: 0x50a3001e  beql        $a1, $v1, . + 4 + (0x1E << 2)
label_44b990:
    if (ctx->pc == 0x44B990u) {
        ctx->pc = 0x44B990u;
            // 0x44b990: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44B994u;
        goto label_44b994;
    }
    ctx->pc = 0x44B98Cu;
    {
        const bool branch_taken_0x44b98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b98c) {
            ctx->pc = 0x44B990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44B98Cu;
            // 0x44b990: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44BA08u;
            goto label_44ba08;
        }
    }
    ctx->pc = 0x44B994u;
label_44b994:
    // 0x44b994: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44b994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44b998:
    // 0x44b998: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44b99c:
    if (ctx->pc == 0x44B99Cu) {
        ctx->pc = 0x44B9A0u;
        goto label_44b9a0;
    }
    ctx->pc = 0x44B998u;
    {
        const bool branch_taken_0x44b998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b998) {
            ctx->pc = 0x44B9A8u;
            goto label_44b9a8;
        }
    }
    ctx->pc = 0x44B9A0u;
label_44b9a0:
    // 0x44b9a0: 0x10000029  b           . + 4 + (0x29 << 2)
label_44b9a4:
    if (ctx->pc == 0x44B9A4u) {
        ctx->pc = 0x44B9A8u;
        goto label_44b9a8;
    }
    ctx->pc = 0x44B9A0u;
    {
        const bool branch_taken_0x44b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b9a0) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44B9A8u;
label_44b9a8:
    // 0x44b9a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44b9ac:
    // 0x44b9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b9b0:
    // 0x44b9b0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44b9b4:
    // 0x44b9b4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x44b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44b9b8:
    // 0x44b9b8: 0x10640023  beq         $v1, $a0, . + 4 + (0x23 << 2)
label_44b9bc:
    if (ctx->pc == 0x44B9BCu) {
        ctx->pc = 0x44B9C0u;
        goto label_44b9c0;
    }
    ctx->pc = 0x44B9B8u;
    {
        const bool branch_taken_0x44b9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44b9b8) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44B9C0u;
label_44b9c0:
    // 0x44b9c0: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x44b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44b9c4:
    // 0x44b9c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x44b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_44b9c8:
    // 0x44b9c8: 0x8c6603d8  lw          $a2, 0x3D8($v1)
    ctx->pc = 0x44b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 984)));
label_44b9cc:
    // 0x44b9cc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x44b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_44b9d0:
    // 0x44b9d0: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x44b9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_44b9d4:
    // 0x44b9d4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x44b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_44b9d8:
    // 0x44b9d8: 0x8ce50090  lw          $a1, 0x90($a3)
    ctx->pc = 0x44b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
label_44b9dc:
    // 0x44b9dc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x44b9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_44b9e0:
    // 0x44b9e0: 0xace50090  sw          $a1, 0x90($a3)
    ctx->pc = 0x44b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 5));
label_44b9e4:
    // 0x44b9e4: 0x8c8503e0  lw          $a1, 0x3E0($a0)
    ctx->pc = 0x44b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 992)));
label_44b9e8:
    // 0x44b9e8: 0x8ce40120  lw          $a0, 0x120($a3)
    ctx->pc = 0x44b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_44b9ec:
    // 0x44b9ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x44b9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_44b9f0:
    // 0x44b9f0: 0xace40120  sw          $a0, 0x120($a3)
    ctx->pc = 0x44b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 4));
label_44b9f4:
    // 0x44b9f4: 0x8c6403e8  lw          $a0, 0x3E8($v1)
    ctx->pc = 0x44b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
label_44b9f8:
    // 0x44b9f8: 0x8ce301b0  lw          $v1, 0x1B0($a3)
    ctx->pc = 0x44b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
label_44b9fc:
    // 0x44b9fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x44b9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_44ba00:
    // 0x44ba00: 0x10000011  b           . + 4 + (0x11 << 2)
label_44ba04:
    if (ctx->pc == 0x44BA04u) {
        ctx->pc = 0x44BA04u;
            // 0x44ba04: 0xace301b0  sw          $v1, 0x1B0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 3));
        ctx->pc = 0x44BA08u;
        goto label_44ba08;
    }
    ctx->pc = 0x44BA00u;
    {
        const bool branch_taken_0x44ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BA00u;
            // 0x44ba04: 0xace301b0  sw          $v1, 0x1B0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba00) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44BA08u;
label_44ba08:
    // 0x44ba08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44ba08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44ba0c:
    // 0x44ba0c: 0x320f809  jalr        $t9
label_44ba10:
    if (ctx->pc == 0x44BA10u) {
        ctx->pc = 0x44BA14u;
        goto label_44ba14;
    }
    ctx->pc = 0x44BA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44BA14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44BA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44BA14u; }
            if (ctx->pc != 0x44BA14u) { return; }
        }
        }
    }
    ctx->pc = 0x44BA14u;
label_44ba14:
    // 0x44ba14: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x44ba14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_44ba18:
    // 0x44ba18: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_44ba1c:
    if (ctx->pc == 0x44BA1Cu) {
        ctx->pc = 0x44BA20u;
        goto label_44ba20;
    }
    ctx->pc = 0x44BA18u;
    {
        const bool branch_taken_0x44ba18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ba18) {
            ctx->pc = 0x44BA48u;
            goto label_44ba48;
        }
    }
    ctx->pc = 0x44BA20u;
label_44ba20:
    // 0x44ba20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44ba20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ba24:
    // 0x44ba24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44ba24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ba28:
    // 0x44ba28: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x44ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_44ba2c:
    // 0x44ba2c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44ba30:
    // 0x44ba30: 0xc0e3658  jal         func_38D960
label_44ba34:
    if (ctx->pc == 0x44BA34u) {
        ctx->pc = 0x44BA34u;
            // 0x44ba34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x44BA38u;
        goto label_44ba38;
    }
    ctx->pc = 0x44BA30u;
    SET_GPR_U32(ctx, 31, 0x44BA38u);
    ctx->pc = 0x44BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BA30u;
            // 0x44ba34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BA38u; }
        if (ctx->pc != 0x44BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BA38u; }
        if (ctx->pc != 0x44BA38u) { return; }
    }
    ctx->pc = 0x44BA38u;
label_44ba38:
    // 0x44ba38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44ba38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44ba3c:
    // 0x44ba3c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44ba3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44ba40:
    // 0x44ba40: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_44ba44:
    if (ctx->pc == 0x44BA44u) {
        ctx->pc = 0x44BA44u;
            // 0x44ba44: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44BA48u;
        goto label_44ba48;
    }
    ctx->pc = 0x44BA40u;
    {
        const bool branch_taken_0x44ba40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BA40u;
            // 0x44ba44: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba40) {
            ctx->pc = 0x44BA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44ba28;
        }
    }
    ctx->pc = 0x44BA48u;
label_44ba48:
    // 0x44ba48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44ba4c:
    // 0x44ba4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44ba4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ba50:
    // 0x44ba50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44ba50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ba54:
    // 0x44ba54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ba54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ba58:
    // 0x44ba58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ba58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ba5c:
    // 0x44ba5c: 0x3e00008  jr          $ra
label_44ba60:
    if (ctx->pc == 0x44BA60u) {
        ctx->pc = 0x44BA60u;
            // 0x44ba60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44BA64u;
        goto label_44ba64;
    }
    ctx->pc = 0x44BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BA5Cu;
            // 0x44ba60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BA64u;
label_44ba64:
    // 0x44ba64: 0x0  nop
    ctx->pc = 0x44ba64u;
    // NOP
label_44ba68:
    // 0x44ba68: 0x0  nop
    ctx->pc = 0x44ba68u;
    // NOP
label_44ba6c:
    // 0x44ba6c: 0x0  nop
    ctx->pc = 0x44ba6cu;
    // NOP
label_44ba70:
    // 0x44ba70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44ba74:
    // 0x44ba74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44ba78:
    // 0x44ba78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44ba7c:
    // 0x44ba7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44ba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44ba80:
    // 0x44ba80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ba84:
    // 0x44ba84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ba88:
    // 0x44ba88: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x44ba88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44ba8c:
    // 0x44ba8c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_44ba90:
    if (ctx->pc == 0x44BA90u) {
        ctx->pc = 0x44BA90u;
            // 0x44ba90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BA94u;
        goto label_44ba94;
    }
    ctx->pc = 0x44BA8Cu;
    {
        const bool branch_taken_0x44ba8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BA8Cu;
            // 0x44ba90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ba8c) {
            ctx->pc = 0x44BAC8u;
            goto label_44bac8;
        }
    }
    ctx->pc = 0x44BA94u;
label_44ba94:
    // 0x44ba94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44ba94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ba98:
    // 0x44ba98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44ba98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ba9c:
    // 0x44ba9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x44ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_44baa0:
    // 0x44baa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44baa4:
    // 0x44baa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44baa8:
    // 0x44baa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44baa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44baac:
    // 0x44baac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x44baacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_44bab0:
    // 0x44bab0: 0x320f809  jalr        $t9
label_44bab4:
    if (ctx->pc == 0x44BAB4u) {
        ctx->pc = 0x44BAB8u;
        goto label_44bab8;
    }
    ctx->pc = 0x44BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44BAB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44BAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44BAB8u; }
            if (ctx->pc != 0x44BAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x44BAB8u;
label_44bab8:
    // 0x44bab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44bab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44babc:
    // 0x44babc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44babcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44bac0:
    // 0x44bac0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_44bac4:
    if (ctx->pc == 0x44BAC4u) {
        ctx->pc = 0x44BAC4u;
            // 0x44bac4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44BAC8u;
        goto label_44bac8;
    }
    ctx->pc = 0x44BAC0u;
    {
        const bool branch_taken_0x44bac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BAC0u;
            // 0x44bac4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bac0) {
            ctx->pc = 0x44BA9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44ba9c;
        }
    }
    ctx->pc = 0x44BAC8u;
label_44bac8:
    // 0x44bac8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44bacc:
    // 0x44bacc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44baccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44bad0:
    // 0x44bad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44bad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44bad4:
    // 0x44bad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44bad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44bad8:
    // 0x44bad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44badc:
    // 0x44badc: 0x3e00008  jr          $ra
label_44bae0:
    if (ctx->pc == 0x44BAE0u) {
        ctx->pc = 0x44BAE0u;
            // 0x44bae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44BAE4u;
        goto label_44bae4;
    }
    ctx->pc = 0x44BADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BADCu;
            // 0x44bae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BAE4u;
label_44bae4:
    // 0x44bae4: 0x0  nop
    ctx->pc = 0x44bae4u;
    // NOP
label_44bae8:
    // 0x44bae8: 0x0  nop
    ctx->pc = 0x44bae8u;
    // NOP
label_44baec:
    // 0x44baec: 0x0  nop
    ctx->pc = 0x44baecu;
    // NOP
label_44baf0:
    // 0x44baf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44baf4:
    // 0x44baf4: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x44baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_44baf8:
    // 0x44baf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44bafc:
    // 0x44bafc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x44bafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_44bb00:
    // 0x44bb00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44bb04:
    // 0x44bb04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44bb08:
    // 0x44bb08: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x44bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_44bb0c:
    // 0x44bb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44bb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44bb10:
    // 0x44bb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44bb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44bb14:
    // 0x44bb14: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x44bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_44bb18:
    // 0x44bb18: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44bb1c:
    // 0x44bb1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44bb20:
    // 0x44bb20: 0xc08bff0  jal         func_22FFC0
label_44bb24:
    if (ctx->pc == 0x44BB24u) {
        ctx->pc = 0x44BB24u;
            // 0x44bb24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BB28u;
        goto label_44bb28;
    }
    ctx->pc = 0x44BB20u;
    SET_GPR_U32(ctx, 31, 0x44BB28u);
    ctx->pc = 0x44BB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB20u;
            // 0x44bb24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB28u; }
        if (ctx->pc != 0x44BB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB28u; }
        if (ctx->pc != 0x44BB28u) { return; }
    }
    ctx->pc = 0x44BB28u;
label_44bb28:
    // 0x44bb28: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x44bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_44bb2c:
    // 0x44bb2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x44bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44bb30:
    // 0x44bb30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44bb34:
    // 0x44bb34: 0xc08914c  jal         func_224530
label_44bb38:
    if (ctx->pc == 0x44BB38u) {
        ctx->pc = 0x44BB38u;
            // 0x44bb38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BB3Cu;
        goto label_44bb3c;
    }
    ctx->pc = 0x44BB34u;
    SET_GPR_U32(ctx, 31, 0x44BB3Cu);
    ctx->pc = 0x44BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB34u;
            // 0x44bb38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB3Cu; }
        if (ctx->pc != 0x44BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB3Cu; }
        if (ctx->pc != 0x44BB3Cu) { return; }
    }
    ctx->pc = 0x44BB3Cu;
label_44bb3c:
    // 0x44bb3c: 0xc0e393c  jal         func_38E4F0
label_44bb40:
    if (ctx->pc == 0x44BB40u) {
        ctx->pc = 0x44BB40u;
            // 0x44bb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BB44u;
        goto label_44bb44;
    }
    ctx->pc = 0x44BB3Cu;
    SET_GPR_U32(ctx, 31, 0x44BB44u);
    ctx->pc = 0x44BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB3Cu;
            // 0x44bb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB44u; }
        if (ctx->pc != 0x44BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB44u; }
        if (ctx->pc != 0x44BB44u) { return; }
    }
    ctx->pc = 0x44BB44u;
label_44bb44:
    // 0x44bb44: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x44bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_44bb48:
    // 0x44bb48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44bb4c:
    // 0x44bb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44bb50:
    // 0x44bb50: 0x3e00008  jr          $ra
label_44bb54:
    if (ctx->pc == 0x44BB54u) {
        ctx->pc = 0x44BB54u;
            // 0x44bb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44BB58u;
        goto label_44bb58;
    }
    ctx->pc = 0x44BB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB50u;
            // 0x44bb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BB58u;
label_44bb58:
    // 0x44bb58: 0x0  nop
    ctx->pc = 0x44bb58u;
    // NOP
label_44bb5c:
    // 0x44bb5c: 0x0  nop
    ctx->pc = 0x44bb5cu;
    // NOP
}
