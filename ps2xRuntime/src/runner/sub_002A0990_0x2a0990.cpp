#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0990
// Address: 0x2a0990 - 0x2a0ab0
void sub_002A0990_0x2a0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0990_0x2a0990");
#endif

    switch (ctx->pc) {
        case 0x2a0990u: goto label_2a0990;
        case 0x2a0994u: goto label_2a0994;
        case 0x2a0998u: goto label_2a0998;
        case 0x2a099cu: goto label_2a099c;
        case 0x2a09a0u: goto label_2a09a0;
        case 0x2a09a4u: goto label_2a09a4;
        case 0x2a09a8u: goto label_2a09a8;
        case 0x2a09acu: goto label_2a09ac;
        case 0x2a09b0u: goto label_2a09b0;
        case 0x2a09b4u: goto label_2a09b4;
        case 0x2a09b8u: goto label_2a09b8;
        case 0x2a09bcu: goto label_2a09bc;
        case 0x2a09c0u: goto label_2a09c0;
        case 0x2a09c4u: goto label_2a09c4;
        case 0x2a09c8u: goto label_2a09c8;
        case 0x2a09ccu: goto label_2a09cc;
        case 0x2a09d0u: goto label_2a09d0;
        case 0x2a09d4u: goto label_2a09d4;
        case 0x2a09d8u: goto label_2a09d8;
        case 0x2a09dcu: goto label_2a09dc;
        case 0x2a09e0u: goto label_2a09e0;
        case 0x2a09e4u: goto label_2a09e4;
        case 0x2a09e8u: goto label_2a09e8;
        case 0x2a09ecu: goto label_2a09ec;
        case 0x2a09f0u: goto label_2a09f0;
        case 0x2a09f4u: goto label_2a09f4;
        case 0x2a09f8u: goto label_2a09f8;
        case 0x2a09fcu: goto label_2a09fc;
        case 0x2a0a00u: goto label_2a0a00;
        case 0x2a0a04u: goto label_2a0a04;
        case 0x2a0a08u: goto label_2a0a08;
        case 0x2a0a0cu: goto label_2a0a0c;
        case 0x2a0a10u: goto label_2a0a10;
        case 0x2a0a14u: goto label_2a0a14;
        case 0x2a0a18u: goto label_2a0a18;
        case 0x2a0a1cu: goto label_2a0a1c;
        case 0x2a0a20u: goto label_2a0a20;
        case 0x2a0a24u: goto label_2a0a24;
        case 0x2a0a28u: goto label_2a0a28;
        case 0x2a0a2cu: goto label_2a0a2c;
        case 0x2a0a30u: goto label_2a0a30;
        case 0x2a0a34u: goto label_2a0a34;
        case 0x2a0a38u: goto label_2a0a38;
        case 0x2a0a3cu: goto label_2a0a3c;
        case 0x2a0a40u: goto label_2a0a40;
        case 0x2a0a44u: goto label_2a0a44;
        case 0x2a0a48u: goto label_2a0a48;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0a50u: goto label_2a0a50;
        case 0x2a0a54u: goto label_2a0a54;
        case 0x2a0a58u: goto label_2a0a58;
        case 0x2a0a5cu: goto label_2a0a5c;
        case 0x2a0a60u: goto label_2a0a60;
        case 0x2a0a64u: goto label_2a0a64;
        case 0x2a0a68u: goto label_2a0a68;
        case 0x2a0a6cu: goto label_2a0a6c;
        case 0x2a0a70u: goto label_2a0a70;
        case 0x2a0a74u: goto label_2a0a74;
        case 0x2a0a78u: goto label_2a0a78;
        case 0x2a0a7cu: goto label_2a0a7c;
        case 0x2a0a80u: goto label_2a0a80;
        case 0x2a0a84u: goto label_2a0a84;
        case 0x2a0a88u: goto label_2a0a88;
        case 0x2a0a8cu: goto label_2a0a8c;
        case 0x2a0a90u: goto label_2a0a90;
        case 0x2a0a94u: goto label_2a0a94;
        case 0x2a0a98u: goto label_2a0a98;
        case 0x2a0a9cu: goto label_2a0a9c;
        case 0x2a0aa0u: goto label_2a0aa0;
        case 0x2a0aa4u: goto label_2a0aa4;
        case 0x2a0aa8u: goto label_2a0aa8;
        case 0x2a0aacu: goto label_2a0aac;
        default: break;
    }

    ctx->pc = 0x2a0990u;

label_2a0990:
    // 0x2a0990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0994:
    // 0x2a0994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a0998:
    // 0x2a0998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a099c:
    // 0x2a099c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a09a0:
    // 0x2a09a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a09a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a09a4:
    // 0x2a09a4: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_2a09a8:
    if (ctx->pc == 0x2A09A8u) {
        ctx->pc = 0x2A09A8u;
            // 0x2a09a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A09ACu;
        goto label_2a09ac;
    }
    ctx->pc = 0x2A09A4u;
    {
        const bool branch_taken_0x2a09a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09A4u;
            // 0x2a09a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09a4) {
            ctx->pc = 0x2A0A94u;
            goto label_2a0a94;
        }
    }
    ctx->pc = 0x2A09ACu;
label_2a09ac:
    // 0x2a09ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a09b0:
    // 0x2a09b0: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x2a09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
label_2a09b4:
    // 0x2a09b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a09b8:
    // 0x2a09b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a09b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a09bc:
    // 0x2a09bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a09bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a09c0:
    // 0x2a09c0: 0x320f809  jalr        $t9
label_2a09c4:
    if (ctx->pc == 0x2A09C4u) {
        ctx->pc = 0x2A09C8u;
        goto label_2a09c8;
    }
    ctx->pc = 0x2A09C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A09C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A09C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A09C8u; }
            if (ctx->pc != 0x2A09C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A09C8u;
label_2a09c8:
    // 0x2a09c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2a09c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2a09cc:
    // 0x2a09cc: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_2a09d0:
    if (ctx->pc == 0x2A09D0u) {
        ctx->pc = 0x2A09D0u;
            // 0x2a09d0: 0x82220018  lb          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2A09D4u;
        goto label_2a09d4;
    }
    ctx->pc = 0x2A09CCu;
    {
        const bool branch_taken_0x2a09cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09cc) {
            ctx->pc = 0x2A09D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09CCu;
            // 0x2a09d0: 0x82220018  lb          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A18u;
            goto label_2a0a18;
        }
    }
    ctx->pc = 0x2A09D4u;
label_2a09d4:
    // 0x2a09d4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2a09d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2a09d8:
    // 0x2a09d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2a09dc:
    if (ctx->pc == 0x2A09DCu) {
        ctx->pc = 0x2A09E0u;
        goto label_2a09e0;
    }
    ctx->pc = 0x2A09D8u;
    {
        const bool branch_taken_0x2a09d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09d8) {
            ctx->pc = 0x2A0A14u;
            goto label_2a0a14;
        }
    }
    ctx->pc = 0x2A09E0u;
label_2a09e0:
    // 0x2a09e0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2a09e4:
    // 0x2a09e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a09e8:
    // 0x2a09e8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2a09e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a09ec:
    // 0x2a09ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a09f0:
    // 0x2a09f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a09f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a09f4:
    // 0x2a09f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a09f8:
    if (ctx->pc == 0x2A09F8u) {
        ctx->pc = 0x2A09FCu;
        goto label_2a09fc;
    }
    ctx->pc = 0x2A09F4u;
    {
        const bool branch_taken_0x2a09f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09f4) {
            ctx->pc = 0x2A0A14u;
            goto label_2a0a14;
        }
    }
    ctx->pc = 0x2A09FCu;
label_2a09fc:
    // 0x2a09fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a0a00:
    if (ctx->pc == 0x2A0A00u) {
        ctx->pc = 0x2A0A04u;
        goto label_2a0a04;
    }
    ctx->pc = 0x2A09FCu;
    {
        const bool branch_taken_0x2a09fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09fc) {
            ctx->pc = 0x2A0A14u;
            goto label_2a0a14;
        }
    }
    ctx->pc = 0x2A0A04u;
label_2a0a04:
    // 0x2a0a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0a08:
    // 0x2a0a08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a0a0c:
    // 0x2a0a0c: 0x320f809  jalr        $t9
label_2a0a10:
    if (ctx->pc == 0x2A0A10u) {
        ctx->pc = 0x2A0A10u;
            // 0x2a0a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0A14u;
        goto label_2a0a14;
    }
    ctx->pc = 0x2A0A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0A14u);
        ctx->pc = 0x2A0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A0Cu;
            // 0x2a0a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A14u; }
            if (ctx->pc != 0x2A0A14u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0A14u;
label_2a0a14:
    // 0x2a0a14: 0x82220018  lb          $v0, 0x18($s1)
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2a0a18:
    // 0x2a0a18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a0a1c:
    if (ctx->pc == 0x2A0A1Cu) {
        ctx->pc = 0x2A0A20u;
        goto label_2a0a20;
    }
    ctx->pc = 0x2A0A18u;
    {
        const bool branch_taken_0x2a0a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a18) {
            ctx->pc = 0x2A0A38u;
            goto label_2a0a38;
        }
    }
    ctx->pc = 0x2A0A20u;
label_2a0a20:
    // 0x2a0a20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0a24:
    // 0x2a0a24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a0a28:
    // 0x2a0a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0a2c:
    // 0x2a0a2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a0a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a0a30:
    // 0x2a0a30: 0x320f809  jalr        $t9
label_2a0a34:
    if (ctx->pc == 0x2A0A34u) {
        ctx->pc = 0x2A0A34u;
            // 0x2a0a34: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2A0A38u;
        goto label_2a0a38;
    }
    ctx->pc = 0x2A0A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0A38u);
        ctx->pc = 0x2A0A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A30u;
            // 0x2a0a34: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A38u; }
            if (ctx->pc != 0x2A0A38u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0A38u;
label_2a0a38:
    // 0x2a0a38: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_2a0a3c:
    if (ctx->pc == 0x2A0A3Cu) {
        ctx->pc = 0x2A0A3Cu;
            // 0x2a0a3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2A0A40u;
        goto label_2a0a40;
    }
    ctx->pc = 0x2A0A38u;
    {
        const bool branch_taken_0x2a0a38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a38) {
            ctx->pc = 0x2A0A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A38u;
            // 0x2a0a3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A70u;
            goto label_2a0a70;
        }
    }
    ctx->pc = 0x2A0A40u;
label_2a0a40:
    // 0x2a0a40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0a44:
    // 0x2a0a44: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x2a0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
label_2a0a48:
    // 0x2a0a48: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2a0a4c:
    if (ctx->pc == 0x2A0A4Cu) {
        ctx->pc = 0x2A0A4Cu;
            // 0x2a0a4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A0A50u;
        goto label_2a0a50;
    }
    ctx->pc = 0x2A0A48u;
    {
        const bool branch_taken_0x2a0a48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A48u;
            // 0x2a0a4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a48) {
            ctx->pc = 0x2A0A6Cu;
            goto label_2a0a6c;
        }
    }
    ctx->pc = 0x2A0A50u;
label_2a0a50:
    // 0x2a0a50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0a54:
    // 0x2a0a54: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2a0a58:
    // 0x2a0a58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2a0a5c:
    if (ctx->pc == 0x2A0A5Cu) {
        ctx->pc = 0x2A0A5Cu;
            // 0x2a0a5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A0A60u;
        goto label_2a0a60;
    }
    ctx->pc = 0x2A0A58u;
    {
        const bool branch_taken_0x2a0a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A58u;
            // 0x2a0a5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a58) {
            ctx->pc = 0x2A0A6Cu;
            goto label_2a0a6c;
        }
    }
    ctx->pc = 0x2A0A60u;
label_2a0a60:
    // 0x2a0a60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0a64:
    // 0x2a0a64: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2a0a68:
    // 0x2a0a68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a0a6c:
    // 0x2a0a6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a0a70:
    // 0x2a0a70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a0a74:
    // 0x2a0a74: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2a0a78:
    if (ctx->pc == 0x2A0A78u) {
        ctx->pc = 0x2A0A78u;
            // 0x2a0a78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A7Cu;
        goto label_2a0a7c;
    }
    ctx->pc = 0x2A0A74u;
    {
        const bool branch_taken_0x2a0a74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a0a74) {
            ctx->pc = 0x2A0A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A74u;
            // 0x2a0a78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0A98u;
            goto label_2a0a98;
        }
    }
    ctx->pc = 0x2A0A7Cu;
label_2a0a7c:
    // 0x2a0a7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0a80:
    // 0x2a0a80: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2a0a80u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2a0a84:
    // 0x2a0a84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a0a88:
    // 0x2a0a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a8c:
    // 0x2a0a8c: 0xc0a7ab4  jal         func_29EAD0
label_2a0a90:
    if (ctx->pc == 0x2A0A90u) {
        ctx->pc = 0x2A0A90u;
            // 0x2a0a90: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2A0A94u;
        goto label_2a0a94;
    }
    ctx->pc = 0x2A0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A94u);
    ctx->pc = 0x2A0A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A8Cu;
            // 0x2a0a90: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A94u; }
        if (ctx->pc != 0x2A0A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A94u; }
        if (ctx->pc != 0x2A0A94u) { return; }
    }
    ctx->pc = 0x2A0A94u;
label_2a0a94:
    // 0x2a0a94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a98:
    // 0x2a0a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0a9c:
    // 0x2a0a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0aa0:
    // 0x2a0aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0aa4:
    // 0x2a0aa4: 0x3e00008  jr          $ra
label_2a0aa8:
    if (ctx->pc == 0x2A0AA8u) {
        ctx->pc = 0x2A0AA8u;
            // 0x2a0aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A0AACu;
        goto label_2a0aac;
    }
    ctx->pc = 0x2A0AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AA4u;
            // 0x2a0aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0AACu;
label_2a0aac:
    // 0x2a0aac: 0x0  nop
    ctx->pc = 0x2a0aacu;
    // NOP
}
