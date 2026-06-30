#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C09B0
// Address: 0x2c09b0 - 0x2c0b30
void sub_002C09B0_0x2c09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C09B0_0x2c09b0");
#endif

    switch (ctx->pc) {
        case 0x2c09b0u: goto label_2c09b0;
        case 0x2c09b4u: goto label_2c09b4;
        case 0x2c09b8u: goto label_2c09b8;
        case 0x2c09bcu: goto label_2c09bc;
        case 0x2c09c0u: goto label_2c09c0;
        case 0x2c09c4u: goto label_2c09c4;
        case 0x2c09c8u: goto label_2c09c8;
        case 0x2c09ccu: goto label_2c09cc;
        case 0x2c09d0u: goto label_2c09d0;
        case 0x2c09d4u: goto label_2c09d4;
        case 0x2c09d8u: goto label_2c09d8;
        case 0x2c09dcu: goto label_2c09dc;
        case 0x2c09e0u: goto label_2c09e0;
        case 0x2c09e4u: goto label_2c09e4;
        case 0x2c09e8u: goto label_2c09e8;
        case 0x2c09ecu: goto label_2c09ec;
        case 0x2c09f0u: goto label_2c09f0;
        case 0x2c09f4u: goto label_2c09f4;
        case 0x2c09f8u: goto label_2c09f8;
        case 0x2c09fcu: goto label_2c09fc;
        case 0x2c0a00u: goto label_2c0a00;
        case 0x2c0a04u: goto label_2c0a04;
        case 0x2c0a08u: goto label_2c0a08;
        case 0x2c0a0cu: goto label_2c0a0c;
        case 0x2c0a10u: goto label_2c0a10;
        case 0x2c0a14u: goto label_2c0a14;
        case 0x2c0a18u: goto label_2c0a18;
        case 0x2c0a1cu: goto label_2c0a1c;
        case 0x2c0a20u: goto label_2c0a20;
        case 0x2c0a24u: goto label_2c0a24;
        case 0x2c0a28u: goto label_2c0a28;
        case 0x2c0a2cu: goto label_2c0a2c;
        case 0x2c0a30u: goto label_2c0a30;
        case 0x2c0a34u: goto label_2c0a34;
        case 0x2c0a38u: goto label_2c0a38;
        case 0x2c0a3cu: goto label_2c0a3c;
        case 0x2c0a40u: goto label_2c0a40;
        case 0x2c0a44u: goto label_2c0a44;
        case 0x2c0a48u: goto label_2c0a48;
        case 0x2c0a4cu: goto label_2c0a4c;
        case 0x2c0a50u: goto label_2c0a50;
        case 0x2c0a54u: goto label_2c0a54;
        case 0x2c0a58u: goto label_2c0a58;
        case 0x2c0a5cu: goto label_2c0a5c;
        case 0x2c0a60u: goto label_2c0a60;
        case 0x2c0a64u: goto label_2c0a64;
        case 0x2c0a68u: goto label_2c0a68;
        case 0x2c0a6cu: goto label_2c0a6c;
        case 0x2c0a70u: goto label_2c0a70;
        case 0x2c0a74u: goto label_2c0a74;
        case 0x2c0a78u: goto label_2c0a78;
        case 0x2c0a7cu: goto label_2c0a7c;
        case 0x2c0a80u: goto label_2c0a80;
        case 0x2c0a84u: goto label_2c0a84;
        case 0x2c0a88u: goto label_2c0a88;
        case 0x2c0a8cu: goto label_2c0a8c;
        case 0x2c0a90u: goto label_2c0a90;
        case 0x2c0a94u: goto label_2c0a94;
        case 0x2c0a98u: goto label_2c0a98;
        case 0x2c0a9cu: goto label_2c0a9c;
        case 0x2c0aa0u: goto label_2c0aa0;
        case 0x2c0aa4u: goto label_2c0aa4;
        case 0x2c0aa8u: goto label_2c0aa8;
        case 0x2c0aacu: goto label_2c0aac;
        case 0x2c0ab0u: goto label_2c0ab0;
        case 0x2c0ab4u: goto label_2c0ab4;
        case 0x2c0ab8u: goto label_2c0ab8;
        case 0x2c0abcu: goto label_2c0abc;
        case 0x2c0ac0u: goto label_2c0ac0;
        case 0x2c0ac4u: goto label_2c0ac4;
        case 0x2c0ac8u: goto label_2c0ac8;
        case 0x2c0accu: goto label_2c0acc;
        case 0x2c0ad0u: goto label_2c0ad0;
        case 0x2c0ad4u: goto label_2c0ad4;
        case 0x2c0ad8u: goto label_2c0ad8;
        case 0x2c0adcu: goto label_2c0adc;
        case 0x2c0ae0u: goto label_2c0ae0;
        case 0x2c0ae4u: goto label_2c0ae4;
        case 0x2c0ae8u: goto label_2c0ae8;
        case 0x2c0aecu: goto label_2c0aec;
        case 0x2c0af0u: goto label_2c0af0;
        case 0x2c0af4u: goto label_2c0af4;
        case 0x2c0af8u: goto label_2c0af8;
        case 0x2c0afcu: goto label_2c0afc;
        case 0x2c0b00u: goto label_2c0b00;
        case 0x2c0b04u: goto label_2c0b04;
        case 0x2c0b08u: goto label_2c0b08;
        case 0x2c0b0cu: goto label_2c0b0c;
        case 0x2c0b10u: goto label_2c0b10;
        case 0x2c0b14u: goto label_2c0b14;
        case 0x2c0b18u: goto label_2c0b18;
        case 0x2c0b1cu: goto label_2c0b1c;
        case 0x2c0b20u: goto label_2c0b20;
        case 0x2c0b24u: goto label_2c0b24;
        case 0x2c0b28u: goto label_2c0b28;
        case 0x2c0b2cu: goto label_2c0b2c;
        default: break;
    }

    ctx->pc = 0x2c09b0u;

label_2c09b0:
    // 0x2c09b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c09b4:
    // 0x2c09b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c09b8:
    // 0x2c09b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c09b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c09bc:
    // 0x2c09bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c09bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c09c0:
    // 0x2c09c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c09c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c09c4:
    // 0x2c09c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c09c8:
    if (ctx->pc == 0x2C09C8u) {
        ctx->pc = 0x2C09C8u;
            // 0x2c09c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C09CCu;
        goto label_2c09cc;
    }
    ctx->pc = 0x2C09C4u;
    {
        const bool branch_taken_0x2c09c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C09C4u;
            // 0x2c09c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09c4) {
            ctx->pc = 0x2C0A08u;
            goto label_2c0a08;
        }
    }
    ctx->pc = 0x2C09CCu;
label_2c09cc:
    // 0x2c09cc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c09d0:
    if (ctx->pc == 0x2C09D0u) {
        ctx->pc = 0x2C09D0u;
            // 0x2c09d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C09D4u;
        goto label_2c09d4;
    }
    ctx->pc = 0x2C09CCu;
    {
        const bool branch_taken_0x2c09cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09cc) {
            ctx->pc = 0x2C09D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C09CCu;
            // 0x2c09d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C09F4u;
            goto label_2c09f4;
        }
    }
    ctx->pc = 0x2C09D4u;
label_2c09d4:
    // 0x2c09d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c09d8:
    if (ctx->pc == 0x2C09D8u) {
        ctx->pc = 0x2C09DCu;
        goto label_2c09dc;
    }
    ctx->pc = 0x2C09D4u;
    {
        const bool branch_taken_0x2c09d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09d4) {
            ctx->pc = 0x2C09F0u;
            goto label_2c09f0;
        }
    }
    ctx->pc = 0x2C09DCu;
label_2c09dc:
    // 0x2c09dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c09e0:
    // 0x2c09e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c09e4:
    if (ctx->pc == 0x2C09E4u) {
        ctx->pc = 0x2C09E8u;
        goto label_2c09e8;
    }
    ctx->pc = 0x2C09E0u;
    {
        const bool branch_taken_0x2c09e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09e0) {
            ctx->pc = 0x2C09F0u;
            goto label_2c09f0;
        }
    }
    ctx->pc = 0x2C09E8u;
label_2c09e8:
    // 0x2c09e8: 0xc0400a8  jal         func_1002A0
label_2c09ec:
    if (ctx->pc == 0x2C09ECu) {
        ctx->pc = 0x2C09F0u;
        goto label_2c09f0;
    }
    ctx->pc = 0x2C09E8u;
    SET_GPR_U32(ctx, 31, 0x2C09F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09F0u; }
        if (ctx->pc != 0x2C09F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C09F0u; }
        if (ctx->pc != 0x2C09F0u) { return; }
    }
    ctx->pc = 0x2C09F0u;
label_2c09f0:
    // 0x2c09f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c09f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c09f4:
    // 0x2c09f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c09f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c09f8:
    // 0x2c09f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c09fc:
    if (ctx->pc == 0x2C09FCu) {
        ctx->pc = 0x2C09FCu;
            // 0x2c09fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A00u;
        goto label_2c0a00;
    }
    ctx->pc = 0x2C09F8u;
    {
        const bool branch_taken_0x2c09f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c09f8) {
            ctx->pc = 0x2C09FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C09F8u;
            // 0x2c09fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A0Cu;
            goto label_2c0a0c;
        }
    }
    ctx->pc = 0x2C0A00u;
label_2c0a00:
    // 0x2c0a00: 0xc0400a8  jal         func_1002A0
label_2c0a04:
    if (ctx->pc == 0x2C0A04u) {
        ctx->pc = 0x2C0A04u;
            // 0x2c0a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A08u;
        goto label_2c0a08;
    }
    ctx->pc = 0x2C0A00u;
    SET_GPR_U32(ctx, 31, 0x2C0A08u);
    ctx->pc = 0x2C0A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A00u;
            // 0x2c0a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A08u; }
        if (ctx->pc != 0x2C0A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A08u; }
        if (ctx->pc != 0x2C0A08u) { return; }
    }
    ctx->pc = 0x2C0A08u;
label_2c0a08:
    // 0x2c0a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c0a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a0c:
    // 0x2c0a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0a10:
    // 0x2c0a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0a14:
    // 0x2c0a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0a18:
    // 0x2c0a18: 0x3e00008  jr          $ra
label_2c0a1c:
    if (ctx->pc == 0x2C0A1Cu) {
        ctx->pc = 0x2C0A1Cu;
            // 0x2c0a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C0A20u;
        goto label_2c0a20;
    }
    ctx->pc = 0x2C0A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A18u;
            // 0x2c0a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0A20u;
label_2c0a20:
    // 0x2c0a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c0a24:
    // 0x2c0a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c0a28:
    // 0x2c0a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0a2c:
    // 0x2c0a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0a30:
    // 0x2c0a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0a34:
    // 0x2c0a34: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_2c0a38:
    if (ctx->pc == 0x2C0A38u) {
        ctx->pc = 0x2C0A38u;
            // 0x2c0a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A3Cu;
        goto label_2c0a3c;
    }
    ctx->pc = 0x2C0A34u;
    {
        const bool branch_taken_0x2c0a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A34u;
            // 0x2c0a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a34) {
            ctx->pc = 0x2C0B18u;
            goto label_2c0b18;
        }
    }
    ctx->pc = 0x2C0A3Cu;
label_2c0a3c:
    // 0x2c0a3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0a40:
    // 0x2c0a40: 0x2442a340  addiu       $v0, $v0, -0x5CC0
    ctx->pc = 0x2c0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943552));
label_2c0a44:
    // 0x2c0a44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c0a48:
    // 0x2c0a48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0a4c:
    // 0x2c0a4c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c0a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c0a50:
    // 0x2c0a50: 0x320f809  jalr        $t9
label_2c0a54:
    if (ctx->pc == 0x2C0A54u) {
        ctx->pc = 0x2C0A58u;
        goto label_2c0a58;
    }
    ctx->pc = 0x2C0A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0A58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A58u; }
            if (ctx->pc != 0x2C0A58u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0A58u;
label_2c0a58:
    // 0x2c0a58: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c0a5c:
    // 0x2c0a5c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_2c0a60:
    if (ctx->pc == 0x2C0A60u) {
        ctx->pc = 0x2C0A64u;
        goto label_2c0a64;
    }
    ctx->pc = 0x2C0A5Cu;
    {
        const bool branch_taken_0x2c0a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a5c) {
            ctx->pc = 0x2C0ADCu;
            goto label_2c0adc;
        }
    }
    ctx->pc = 0x2C0A64u;
label_2c0a64:
    // 0x2c0a64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0a68:
    // 0x2c0a68: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2c0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
label_2c0a6c:
    // 0x2c0a6c: 0xc0d37dc  jal         func_34DF70
label_2c0a70:
    if (ctx->pc == 0x2C0A70u) {
        ctx->pc = 0x2C0A70u;
            // 0x2c0a70: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0A74u;
        goto label_2c0a74;
    }
    ctx->pc = 0x2C0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C0A74u);
    ctx->pc = 0x2C0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A6Cu;
            // 0x2c0a70: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A74u; }
        if (ctx->pc != 0x2C0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A74u; }
        if (ctx->pc != 0x2C0A74u) { return; }
    }
    ctx->pc = 0x2C0A74u;
label_2c0a74:
    // 0x2c0a74: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2c0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c0a78:
    // 0x2c0a78: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2c0a7c:
    if (ctx->pc == 0x2C0A7Cu) {
        ctx->pc = 0x2C0A7Cu;
            // 0x2c0a7c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C0A80u;
        goto label_2c0a80;
    }
    ctx->pc = 0x2C0A78u;
    {
        const bool branch_taken_0x2c0a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a78) {
            ctx->pc = 0x2C0A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A78u;
            // 0x2c0a7c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A9Cu;
            goto label_2c0a9c;
        }
    }
    ctx->pc = 0x2C0A80u;
label_2c0a80:
    // 0x2c0a80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2c0a84:
    if (ctx->pc == 0x2C0A84u) {
        ctx->pc = 0x2C0A88u;
        goto label_2c0a88;
    }
    ctx->pc = 0x2C0A80u;
    {
        const bool branch_taken_0x2c0a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a80) {
            ctx->pc = 0x2C0A98u;
            goto label_2c0a98;
        }
    }
    ctx->pc = 0x2C0A88u;
label_2c0a88:
    // 0x2c0a88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0a8c:
    // 0x2c0a8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c0a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c0a90:
    // 0x2c0a90: 0x320f809  jalr        $t9
label_2c0a94:
    if (ctx->pc == 0x2C0A94u) {
        ctx->pc = 0x2C0A94u;
            // 0x2c0a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0A98u;
        goto label_2c0a98;
    }
    ctx->pc = 0x2C0A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0A98u);
        ctx->pc = 0x2C0A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A90u;
            // 0x2c0a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0A98u; }
            if (ctx->pc != 0x2C0A98u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0A98u;
label_2c0a98:
    // 0x2c0a98: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c0a9c:
    // 0x2c0a9c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2c0aa0:
    if (ctx->pc == 0x2C0AA0u) {
        ctx->pc = 0x2C0AA0u;
            // 0x2c0aa0: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AA4u;
        goto label_2c0aa4;
    }
    ctx->pc = 0x2C0A9Cu;
    {
        const bool branch_taken_0x2c0a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0A9Cu;
            // 0x2c0aa0: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a9c) {
            ctx->pc = 0x2C0ADCu;
            goto label_2c0adc;
        }
    }
    ctx->pc = 0x2C0AA4u;
label_2c0aa4:
    // 0x2c0aa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0aa8:
    // 0x2c0aa8: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c0aac:
    // 0x2c0aac: 0xc0d37dc  jal         func_34DF70
label_2c0ab0:
    if (ctx->pc == 0x2C0AB0u) {
        ctx->pc = 0x2C0AB0u;
            // 0x2c0ab0: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AB4u;
        goto label_2c0ab4;
    }
    ctx->pc = 0x2C0AACu;
    SET_GPR_U32(ctx, 31, 0x2C0AB4u);
    ctx->pc = 0x2C0AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AACu;
            // 0x2c0ab0: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AB4u; }
        if (ctx->pc != 0x2C0AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0AB4u; }
        if (ctx->pc != 0x2C0AB4u) { return; }
    }
    ctx->pc = 0x2C0AB4u;
label_2c0ab4:
    // 0x2c0ab4: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2c0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c0ab8:
    // 0x2c0ab8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2c0abc:
    if (ctx->pc == 0x2C0ABCu) {
        ctx->pc = 0x2C0AC0u;
        goto label_2c0ac0;
    }
    ctx->pc = 0x2C0AB8u;
    {
        const bool branch_taken_0x2c0ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ab8) {
            ctx->pc = 0x2C0ADCu;
            goto label_2c0adc;
        }
    }
    ctx->pc = 0x2C0AC0u;
label_2c0ac0:
    // 0x2c0ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0ac4:
    // 0x2c0ac4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c0ac8:
    // 0x2c0ac8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c0acc:
    if (ctx->pc == 0x2C0ACCu) {
        ctx->pc = 0x2C0ACCu;
            // 0x2c0acc: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AD0u;
        goto label_2c0ad0;
    }
    ctx->pc = 0x2C0AC8u;
    {
        const bool branch_taken_0x2c0ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AC8u;
            // 0x2c0acc: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ac8) {
            ctx->pc = 0x2C0ADCu;
            goto label_2c0adc;
        }
    }
    ctx->pc = 0x2C0AD0u;
label_2c0ad0:
    // 0x2c0ad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0ad4:
    // 0x2c0ad4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c0ad8:
    // 0x2c0ad8: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2c0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_2c0adc:
    // 0x2c0adc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c0ae0:
    if (ctx->pc == 0x2C0AE0u) {
        ctx->pc = 0x2C0AE0u;
            // 0x2c0ae0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C0AE4u;
        goto label_2c0ae4;
    }
    ctx->pc = 0x2C0ADCu;
    {
        const bool branch_taken_0x2c0adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0adc) {
            ctx->pc = 0x2C0AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0ADCu;
            // 0x2c0ae0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B04u;
            goto label_2c0b04;
        }
    }
    ctx->pc = 0x2C0AE4u;
label_2c0ae4:
    // 0x2c0ae4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0ae8:
    // 0x2c0ae8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c0aec:
    // 0x2c0aec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c0af0:
    if (ctx->pc == 0x2C0AF0u) {
        ctx->pc = 0x2C0AF0u;
            // 0x2c0af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AF4u;
        goto label_2c0af4;
    }
    ctx->pc = 0x2C0AECu;
    {
        const bool branch_taken_0x2c0aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0AECu;
            // 0x2c0af0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0aec) {
            ctx->pc = 0x2C0B00u;
            goto label_2c0b00;
        }
    }
    ctx->pc = 0x2C0AF4u;
label_2c0af4:
    // 0x2c0af4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0af8:
    // 0x2c0af8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c0afc:
    // 0x2c0afc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c0b00:
    // 0x2c0b00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c0b04:
    // 0x2c0b04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c0b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c0b08:
    // 0x2c0b08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c0b0c:
    if (ctx->pc == 0x2C0B0Cu) {
        ctx->pc = 0x2C0B0Cu;
            // 0x2c0b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B10u;
        goto label_2c0b10;
    }
    ctx->pc = 0x2C0B08u;
    {
        const bool branch_taken_0x2c0b08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c0b08) {
            ctx->pc = 0x2C0B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B08u;
            // 0x2c0b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B1Cu;
            goto label_2c0b1c;
        }
    }
    ctx->pc = 0x2C0B10u;
label_2c0b10:
    // 0x2c0b10: 0xc0400a8  jal         func_1002A0
label_2c0b14:
    if (ctx->pc == 0x2C0B14u) {
        ctx->pc = 0x2C0B14u;
            // 0x2c0b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B18u;
        goto label_2c0b18;
    }
    ctx->pc = 0x2C0B10u;
    SET_GPR_U32(ctx, 31, 0x2C0B18u);
    ctx->pc = 0x2C0B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B10u;
            // 0x2c0b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B18u; }
        if (ctx->pc != 0x2C0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B18u; }
        if (ctx->pc != 0x2C0B18u) { return; }
    }
    ctx->pc = 0x2C0B18u;
label_2c0b18:
    // 0x2c0b18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c0b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b1c:
    // 0x2c0b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0b20:
    // 0x2c0b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0b24:
    // 0x2c0b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0b28:
    // 0x2c0b28: 0x3e00008  jr          $ra
label_2c0b2c:
    if (ctx->pc == 0x2C0B2Cu) {
        ctx->pc = 0x2C0B2Cu;
            // 0x2c0b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C0B30u;
        goto label_fallthrough_0x2c0b28;
    }
    ctx->pc = 0x2C0B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0B28u;
            // 0x2c0b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c0b28:
    ctx->pc = 0x2C0B30u;
}
