#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D6980
// Address: 0x4d6980 - 0x4d6ab0
void sub_004D6980_0x4d6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6980_0x4d6980");
#endif

    switch (ctx->pc) {
        case 0x4d6980u: goto label_4d6980;
        case 0x4d6984u: goto label_4d6984;
        case 0x4d6988u: goto label_4d6988;
        case 0x4d698cu: goto label_4d698c;
        case 0x4d6990u: goto label_4d6990;
        case 0x4d6994u: goto label_4d6994;
        case 0x4d6998u: goto label_4d6998;
        case 0x4d699cu: goto label_4d699c;
        case 0x4d69a0u: goto label_4d69a0;
        case 0x4d69a4u: goto label_4d69a4;
        case 0x4d69a8u: goto label_4d69a8;
        case 0x4d69acu: goto label_4d69ac;
        case 0x4d69b0u: goto label_4d69b0;
        case 0x4d69b4u: goto label_4d69b4;
        case 0x4d69b8u: goto label_4d69b8;
        case 0x4d69bcu: goto label_4d69bc;
        case 0x4d69c0u: goto label_4d69c0;
        case 0x4d69c4u: goto label_4d69c4;
        case 0x4d69c8u: goto label_4d69c8;
        case 0x4d69ccu: goto label_4d69cc;
        case 0x4d69d0u: goto label_4d69d0;
        case 0x4d69d4u: goto label_4d69d4;
        case 0x4d69d8u: goto label_4d69d8;
        case 0x4d69dcu: goto label_4d69dc;
        case 0x4d69e0u: goto label_4d69e0;
        case 0x4d69e4u: goto label_4d69e4;
        case 0x4d69e8u: goto label_4d69e8;
        case 0x4d69ecu: goto label_4d69ec;
        case 0x4d69f0u: goto label_4d69f0;
        case 0x4d69f4u: goto label_4d69f4;
        case 0x4d69f8u: goto label_4d69f8;
        case 0x4d69fcu: goto label_4d69fc;
        case 0x4d6a00u: goto label_4d6a00;
        case 0x4d6a04u: goto label_4d6a04;
        case 0x4d6a08u: goto label_4d6a08;
        case 0x4d6a0cu: goto label_4d6a0c;
        case 0x4d6a10u: goto label_4d6a10;
        case 0x4d6a14u: goto label_4d6a14;
        case 0x4d6a18u: goto label_4d6a18;
        case 0x4d6a1cu: goto label_4d6a1c;
        case 0x4d6a20u: goto label_4d6a20;
        case 0x4d6a24u: goto label_4d6a24;
        case 0x4d6a28u: goto label_4d6a28;
        case 0x4d6a2cu: goto label_4d6a2c;
        case 0x4d6a30u: goto label_4d6a30;
        case 0x4d6a34u: goto label_4d6a34;
        case 0x4d6a38u: goto label_4d6a38;
        case 0x4d6a3cu: goto label_4d6a3c;
        case 0x4d6a40u: goto label_4d6a40;
        case 0x4d6a44u: goto label_4d6a44;
        case 0x4d6a48u: goto label_4d6a48;
        case 0x4d6a4cu: goto label_4d6a4c;
        case 0x4d6a50u: goto label_4d6a50;
        case 0x4d6a54u: goto label_4d6a54;
        case 0x4d6a58u: goto label_4d6a58;
        case 0x4d6a5cu: goto label_4d6a5c;
        case 0x4d6a60u: goto label_4d6a60;
        case 0x4d6a64u: goto label_4d6a64;
        case 0x4d6a68u: goto label_4d6a68;
        case 0x4d6a6cu: goto label_4d6a6c;
        case 0x4d6a70u: goto label_4d6a70;
        case 0x4d6a74u: goto label_4d6a74;
        case 0x4d6a78u: goto label_4d6a78;
        case 0x4d6a7cu: goto label_4d6a7c;
        case 0x4d6a80u: goto label_4d6a80;
        case 0x4d6a84u: goto label_4d6a84;
        case 0x4d6a88u: goto label_4d6a88;
        case 0x4d6a8cu: goto label_4d6a8c;
        case 0x4d6a90u: goto label_4d6a90;
        case 0x4d6a94u: goto label_4d6a94;
        case 0x4d6a98u: goto label_4d6a98;
        case 0x4d6a9cu: goto label_4d6a9c;
        case 0x4d6aa0u: goto label_4d6aa0;
        case 0x4d6aa4u: goto label_4d6aa4;
        case 0x4d6aa8u: goto label_4d6aa8;
        case 0x4d6aacu: goto label_4d6aac;
        default: break;
    }

    ctx->pc = 0x4d6980u;

label_4d6980:
    // 0x4d6980: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d6980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d6984:
    // 0x4d6984: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4d6984u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4d6988:
    // 0x4d6988: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4d6988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d698c:
    // 0x4d698c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d6990:
    // 0x4d6990: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4d6990u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4d6994:
    // 0x4d6994: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d6994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d6998:
    // 0x4d6998: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d6998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d699c:
    // 0x4d699c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4d699cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d69a0:
    // 0x4d69a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d69a4:
    // 0x4d69a4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4d69a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d69a8:
    // 0x4d69a8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4d69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4d69ac:
    // 0x4d69ac: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d69acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4d69b0:
    // 0x4d69b0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4d69b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4d69b4:
    // 0x4d69b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d69b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d69b8:
    // 0x4d69b8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4d69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4d69bc:
    // 0x4d69bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d69c0:
    // 0x4d69c0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4d69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4d69c4:
    // 0x4d69c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d69c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d69c8:
    // 0x4d69c8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4d69c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4d69cc:
    // 0x4d69cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4d69d0:
    // 0x4d69d0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4d69d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4d69d4:
    // 0x4d69d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d69d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d69d8:
    // 0x4d69d8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4d69d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4d69dc:
    // 0x4d69dc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4d69dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4d69e0:
    // 0x4d69e0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4d69e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4d69e4:
    // 0x4d69e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4d69e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4d69e8:
    // 0x4d69e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d69ec:
    // 0x4d69ec: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4d69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4d69f0:
    // 0x4d69f0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4d69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4d69f4:
    // 0x4d69f4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4d69f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d69f8:
    // 0x4d69f8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4d69f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4d69fc:
    // 0x4d69fc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4d69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4d6a00:
    // 0x4d6a00: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4d6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4d6a04:
    // 0x4d6a04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4d6a08:
    // 0x4d6a08: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4d6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4d6a0c:
    // 0x4d6a0c: 0x3e00008  jr          $ra
label_4d6a10:
    if (ctx->pc == 0x4D6A10u) {
        ctx->pc = 0x4D6A10u;
            // 0x4d6a10: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4D6A14u;
        goto label_4d6a14;
    }
    ctx->pc = 0x4D6A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6A0Cu;
            // 0x4d6a10: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6A14u;
label_4d6a14:
    // 0x4d6a14: 0x0  nop
    ctx->pc = 0x4d6a14u;
    // NOP
label_4d6a18:
    // 0x4d6a18: 0x0  nop
    ctx->pc = 0x4d6a18u;
    // NOP
label_4d6a1c:
    // 0x4d6a1c: 0x0  nop
    ctx->pc = 0x4d6a1cu;
    // NOP
label_4d6a20:
    // 0x4d6a20: 0x3e00008  jr          $ra
label_4d6a24:
    if (ctx->pc == 0x4D6A24u) {
        ctx->pc = 0x4D6A28u;
        goto label_4d6a28;
    }
    ctx->pc = 0x4D6A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6A28u;
label_4d6a28:
    // 0x4d6a28: 0x0  nop
    ctx->pc = 0x4d6a28u;
    // NOP
label_4d6a2c:
    // 0x4d6a2c: 0x0  nop
    ctx->pc = 0x4d6a2cu;
    // NOP
label_4d6a30:
    // 0x4d6a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d6a34:
    // 0x4d6a34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d6a38:
    // 0x4d6a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d6a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d6a3c:
    // 0x4d6a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d6a40:
    // 0x4d6a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d6a44:
    // 0x4d6a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6a48:
    // 0x4d6a48: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d6a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d6a4c:
    // 0x4d6a4c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d6a50:
    if (ctx->pc == 0x4D6A50u) {
        ctx->pc = 0x4D6A50u;
            // 0x4d6a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6A54u;
        goto label_4d6a54;
    }
    ctx->pc = 0x4D6A4Cu;
    {
        const bool branch_taken_0x4d6a4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6A4Cu;
            // 0x4d6a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6a4c) {
            ctx->pc = 0x4D6A88u;
            goto label_4d6a88;
        }
    }
    ctx->pc = 0x4D6A54u;
label_4d6a54:
    // 0x4d6a54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d6a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6a58:
    // 0x4d6a58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d6a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6a5c:
    // 0x4d6a5c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d6a60:
    // 0x4d6a60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d6a64:
    // 0x4d6a64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d6a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d6a68:
    // 0x4d6a68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6a6c:
    // 0x4d6a6c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d6a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d6a70:
    // 0x4d6a70: 0x320f809  jalr        $t9
label_4d6a74:
    if (ctx->pc == 0x4D6A74u) {
        ctx->pc = 0x4D6A78u;
        goto label_4d6a78;
    }
    ctx->pc = 0x4D6A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6A78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6A78u; }
            if (ctx->pc != 0x4D6A78u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6A78u;
label_4d6a78:
    // 0x4d6a78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d6a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d6a7c:
    // 0x4d6a7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d6a7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d6a80:
    // 0x4d6a80: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d6a84:
    if (ctx->pc == 0x4D6A84u) {
        ctx->pc = 0x4D6A84u;
            // 0x4d6a84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D6A88u;
        goto label_4d6a88;
    }
    ctx->pc = 0x4D6A80u;
    {
        const bool branch_taken_0x4d6a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6A80u;
            // 0x4d6a84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6a80) {
            ctx->pc = 0x4D6A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d6a5c;
        }
    }
    ctx->pc = 0x4D6A88u;
label_4d6a88:
    // 0x4d6a88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d6a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6a8c:
    // 0x4d6a8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d6a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6a90:
    // 0x4d6a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d6a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d6a94:
    // 0x4d6a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6a98:
    // 0x4d6a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6a9c:
    // 0x4d6a9c: 0x3e00008  jr          $ra
label_4d6aa0:
    if (ctx->pc == 0x4D6AA0u) {
        ctx->pc = 0x4D6AA0u;
            // 0x4d6aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D6AA4u;
        goto label_4d6aa4;
    }
    ctx->pc = 0x4D6A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6A9Cu;
            // 0x4d6aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6AA4u;
label_4d6aa4:
    // 0x4d6aa4: 0x0  nop
    ctx->pc = 0x4d6aa4u;
    // NOP
label_4d6aa8:
    // 0x4d6aa8: 0x0  nop
    ctx->pc = 0x4d6aa8u;
    // NOP
label_4d6aac:
    // 0x4d6aac: 0x0  nop
    ctx->pc = 0x4d6aacu;
    // NOP
}
