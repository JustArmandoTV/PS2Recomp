#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005049E0
// Address: 0x5049e0 - 0x504b40
void sub_005049E0_0x5049e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005049E0_0x5049e0");
#endif

    switch (ctx->pc) {
        case 0x5049e0u: goto label_5049e0;
        case 0x5049e4u: goto label_5049e4;
        case 0x5049e8u: goto label_5049e8;
        case 0x5049ecu: goto label_5049ec;
        case 0x5049f0u: goto label_5049f0;
        case 0x5049f4u: goto label_5049f4;
        case 0x5049f8u: goto label_5049f8;
        case 0x5049fcu: goto label_5049fc;
        case 0x504a00u: goto label_504a00;
        case 0x504a04u: goto label_504a04;
        case 0x504a08u: goto label_504a08;
        case 0x504a0cu: goto label_504a0c;
        case 0x504a10u: goto label_504a10;
        case 0x504a14u: goto label_504a14;
        case 0x504a18u: goto label_504a18;
        case 0x504a1cu: goto label_504a1c;
        case 0x504a20u: goto label_504a20;
        case 0x504a24u: goto label_504a24;
        case 0x504a28u: goto label_504a28;
        case 0x504a2cu: goto label_504a2c;
        case 0x504a30u: goto label_504a30;
        case 0x504a34u: goto label_504a34;
        case 0x504a38u: goto label_504a38;
        case 0x504a3cu: goto label_504a3c;
        case 0x504a40u: goto label_504a40;
        case 0x504a44u: goto label_504a44;
        case 0x504a48u: goto label_504a48;
        case 0x504a4cu: goto label_504a4c;
        case 0x504a50u: goto label_504a50;
        case 0x504a54u: goto label_504a54;
        case 0x504a58u: goto label_504a58;
        case 0x504a5cu: goto label_504a5c;
        case 0x504a60u: goto label_504a60;
        case 0x504a64u: goto label_504a64;
        case 0x504a68u: goto label_504a68;
        case 0x504a6cu: goto label_504a6c;
        case 0x504a70u: goto label_504a70;
        case 0x504a74u: goto label_504a74;
        case 0x504a78u: goto label_504a78;
        case 0x504a7cu: goto label_504a7c;
        case 0x504a80u: goto label_504a80;
        case 0x504a84u: goto label_504a84;
        case 0x504a88u: goto label_504a88;
        case 0x504a8cu: goto label_504a8c;
        case 0x504a90u: goto label_504a90;
        case 0x504a94u: goto label_504a94;
        case 0x504a98u: goto label_504a98;
        case 0x504a9cu: goto label_504a9c;
        case 0x504aa0u: goto label_504aa0;
        case 0x504aa4u: goto label_504aa4;
        case 0x504aa8u: goto label_504aa8;
        case 0x504aacu: goto label_504aac;
        case 0x504ab0u: goto label_504ab0;
        case 0x504ab4u: goto label_504ab4;
        case 0x504ab8u: goto label_504ab8;
        case 0x504abcu: goto label_504abc;
        case 0x504ac0u: goto label_504ac0;
        case 0x504ac4u: goto label_504ac4;
        case 0x504ac8u: goto label_504ac8;
        case 0x504accu: goto label_504acc;
        case 0x504ad0u: goto label_504ad0;
        case 0x504ad4u: goto label_504ad4;
        case 0x504ad8u: goto label_504ad8;
        case 0x504adcu: goto label_504adc;
        case 0x504ae0u: goto label_504ae0;
        case 0x504ae4u: goto label_504ae4;
        case 0x504ae8u: goto label_504ae8;
        case 0x504aecu: goto label_504aec;
        case 0x504af0u: goto label_504af0;
        case 0x504af4u: goto label_504af4;
        case 0x504af8u: goto label_504af8;
        case 0x504afcu: goto label_504afc;
        case 0x504b00u: goto label_504b00;
        case 0x504b04u: goto label_504b04;
        case 0x504b08u: goto label_504b08;
        case 0x504b0cu: goto label_504b0c;
        case 0x504b10u: goto label_504b10;
        case 0x504b14u: goto label_504b14;
        case 0x504b18u: goto label_504b18;
        case 0x504b1cu: goto label_504b1c;
        case 0x504b20u: goto label_504b20;
        case 0x504b24u: goto label_504b24;
        case 0x504b28u: goto label_504b28;
        case 0x504b2cu: goto label_504b2c;
        case 0x504b30u: goto label_504b30;
        case 0x504b34u: goto label_504b34;
        case 0x504b38u: goto label_504b38;
        case 0x504b3cu: goto label_504b3c;
        default: break;
    }

    ctx->pc = 0x5049e0u;

label_5049e0:
    // 0x5049e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5049e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5049e4:
    // 0x5049e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5049e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5049e8:
    // 0x5049e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5049e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5049ec:
    // 0x5049ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5049ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5049f0:
    // 0x5049f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5049f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5049f4:
    // 0x5049f4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_5049f8:
    if (ctx->pc == 0x5049F8u) {
        ctx->pc = 0x5049F8u;
            // 0x5049f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5049FCu;
        goto label_5049fc;
    }
    ctx->pc = 0x5049F4u;
    {
        const bool branch_taken_0x5049f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5049F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5049F4u;
            // 0x5049f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5049f4) {
            ctx->pc = 0x504B28u;
            goto label_504b28;
        }
    }
    ctx->pc = 0x5049FCu;
label_5049fc:
    // 0x5049fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5049fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_504a00:
    // 0x504a00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_504a04:
    // 0x504a04: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x504a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
label_504a08:
    // 0x504a08: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x504a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_504a0c:
    // 0x504a0c: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x504a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
label_504a10:
    // 0x504a10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x504a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_504a14:
    // 0x504a14: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x504a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_504a18:
    // 0x504a18: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x504a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_504a1c:
    // 0x504a1c: 0xc0407c0  jal         func_101F00
label_504a20:
    if (ctx->pc == 0x504A20u) {
        ctx->pc = 0x504A20u;
            // 0x504a20: 0x24a54910  addiu       $a1, $a1, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
        ctx->pc = 0x504A24u;
        goto label_504a24;
    }
    ctx->pc = 0x504A1Cu;
    SET_GPR_U32(ctx, 31, 0x504A24u);
    ctx->pc = 0x504A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504A1Cu;
            // 0x504a20: 0x24a54910  addiu       $a1, $a1, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A24u; }
        if (ctx->pc != 0x504A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A24u; }
        if (ctx->pc != 0x504A24u) { return; }
    }
    ctx->pc = 0x504A24u;
label_504a24:
    // 0x504a24: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x504a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_504a28:
    // 0x504a28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_504a2c:
    if (ctx->pc == 0x504A2Cu) {
        ctx->pc = 0x504A2Cu;
            // 0x504a2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x504A30u;
        goto label_504a30;
    }
    ctx->pc = 0x504A28u;
    {
        const bool branch_taken_0x504a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a28) {
            ctx->pc = 0x504A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504A28u;
            // 0x504a2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504A3Cu;
            goto label_504a3c;
        }
    }
    ctx->pc = 0x504A30u;
label_504a30:
    // 0x504a30: 0xc07507c  jal         func_1D41F0
label_504a34:
    if (ctx->pc == 0x504A34u) {
        ctx->pc = 0x504A34u;
            // 0x504a34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x504A38u;
        goto label_504a38;
    }
    ctx->pc = 0x504A30u;
    SET_GPR_U32(ctx, 31, 0x504A38u);
    ctx->pc = 0x504A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504A30u;
            // 0x504a34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A38u; }
        if (ctx->pc != 0x504A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A38u; }
        if (ctx->pc != 0x504A38u) { return; }
    }
    ctx->pc = 0x504A38u;
label_504a38:
    // 0x504a38: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x504a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_504a3c:
    // 0x504a3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_504a40:
    if (ctx->pc == 0x504A40u) {
        ctx->pc = 0x504A40u;
            // 0x504a40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x504A44u;
        goto label_504a44;
    }
    ctx->pc = 0x504A3Cu;
    {
        const bool branch_taken_0x504a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a3c) {
            ctx->pc = 0x504A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504A3Cu;
            // 0x504a40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504A6Cu;
            goto label_504a6c;
        }
    }
    ctx->pc = 0x504A44u;
label_504a44:
    // 0x504a44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_504a48:
    if (ctx->pc == 0x504A48u) {
        ctx->pc = 0x504A4Cu;
        goto label_504a4c;
    }
    ctx->pc = 0x504A44u;
    {
        const bool branch_taken_0x504a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a44) {
            ctx->pc = 0x504A68u;
            goto label_504a68;
        }
    }
    ctx->pc = 0x504A4Cu;
label_504a4c:
    // 0x504a4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_504a50:
    if (ctx->pc == 0x504A50u) {
        ctx->pc = 0x504A54u;
        goto label_504a54;
    }
    ctx->pc = 0x504A4Cu;
    {
        const bool branch_taken_0x504a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a4c) {
            ctx->pc = 0x504A68u;
            goto label_504a68;
        }
    }
    ctx->pc = 0x504A54u;
label_504a54:
    // 0x504a54: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x504a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_504a58:
    // 0x504a58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_504a5c:
    if (ctx->pc == 0x504A5Cu) {
        ctx->pc = 0x504A60u;
        goto label_504a60;
    }
    ctx->pc = 0x504A58u;
    {
        const bool branch_taken_0x504a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a58) {
            ctx->pc = 0x504A68u;
            goto label_504a68;
        }
    }
    ctx->pc = 0x504A60u;
label_504a60:
    // 0x504a60: 0xc0400a8  jal         func_1002A0
label_504a64:
    if (ctx->pc == 0x504A64u) {
        ctx->pc = 0x504A68u;
        goto label_504a68;
    }
    ctx->pc = 0x504A60u;
    SET_GPR_U32(ctx, 31, 0x504A68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A68u; }
        if (ctx->pc != 0x504A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A68u; }
        if (ctx->pc != 0x504A68u) { return; }
    }
    ctx->pc = 0x504A68u;
label_504a68:
    // 0x504a68: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x504a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_504a6c:
    // 0x504a6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_504a70:
    if (ctx->pc == 0x504A70u) {
        ctx->pc = 0x504A70u;
            // 0x504a70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x504A74u;
        goto label_504a74;
    }
    ctx->pc = 0x504A6Cu;
    {
        const bool branch_taken_0x504a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a6c) {
            ctx->pc = 0x504A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504A6Cu;
            // 0x504a70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504A9Cu;
            goto label_504a9c;
        }
    }
    ctx->pc = 0x504A74u;
label_504a74:
    // 0x504a74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_504a78:
    if (ctx->pc == 0x504A78u) {
        ctx->pc = 0x504A7Cu;
        goto label_504a7c;
    }
    ctx->pc = 0x504A74u;
    {
        const bool branch_taken_0x504a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a74) {
            ctx->pc = 0x504A98u;
            goto label_504a98;
        }
    }
    ctx->pc = 0x504A7Cu;
label_504a7c:
    // 0x504a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_504a80:
    if (ctx->pc == 0x504A80u) {
        ctx->pc = 0x504A84u;
        goto label_504a84;
    }
    ctx->pc = 0x504A7Cu;
    {
        const bool branch_taken_0x504a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a7c) {
            ctx->pc = 0x504A98u;
            goto label_504a98;
        }
    }
    ctx->pc = 0x504A84u;
label_504a84:
    // 0x504a84: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x504a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_504a88:
    // 0x504a88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_504a8c:
    if (ctx->pc == 0x504A8Cu) {
        ctx->pc = 0x504A90u;
        goto label_504a90;
    }
    ctx->pc = 0x504A88u;
    {
        const bool branch_taken_0x504a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a88) {
            ctx->pc = 0x504A98u;
            goto label_504a98;
        }
    }
    ctx->pc = 0x504A90u;
label_504a90:
    // 0x504a90: 0xc0400a8  jal         func_1002A0
label_504a94:
    if (ctx->pc == 0x504A94u) {
        ctx->pc = 0x504A98u;
        goto label_504a98;
    }
    ctx->pc = 0x504A90u;
    SET_GPR_U32(ctx, 31, 0x504A98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A98u; }
        if (ctx->pc != 0x504A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504A98u; }
        if (ctx->pc != 0x504A98u) { return; }
    }
    ctx->pc = 0x504A98u;
label_504a98:
    // 0x504a98: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x504a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_504a9c:
    // 0x504a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_504aa0:
    if (ctx->pc == 0x504AA0u) {
        ctx->pc = 0x504AA4u;
        goto label_504aa4;
    }
    ctx->pc = 0x504A9Cu;
    {
        const bool branch_taken_0x504a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x504a9c) {
            ctx->pc = 0x504AB8u;
            goto label_504ab8;
        }
    }
    ctx->pc = 0x504AA4u;
label_504aa4:
    // 0x504aa4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_504aa8:
    // 0x504aa8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x504aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_504aac:
    // 0x504aac: 0x24634cc0  addiu       $v1, $v1, 0x4CC0
    ctx->pc = 0x504aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19648));
label_504ab0:
    // 0x504ab0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x504ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_504ab4:
    // 0x504ab4: 0xac40aaf0  sw          $zero, -0x5510($v0)
    ctx->pc = 0x504ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945520), GPR_U32(ctx, 0));
label_504ab8:
    // 0x504ab8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_504abc:
    if (ctx->pc == 0x504ABCu) {
        ctx->pc = 0x504ABCu;
            // 0x504abc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x504AC0u;
        goto label_504ac0;
    }
    ctx->pc = 0x504AB8u;
    {
        const bool branch_taken_0x504ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x504ab8) {
            ctx->pc = 0x504ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504AB8u;
            // 0x504abc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504B14u;
            goto label_504b14;
        }
    }
    ctx->pc = 0x504AC0u;
label_504ac0:
    // 0x504ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x504ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_504ac4:
    // 0x504ac4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x504ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_504ac8:
    // 0x504ac8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x504ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_504acc:
    // 0x504acc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x504accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_504ad0:
    // 0x504ad0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_504ad4:
    if (ctx->pc == 0x504AD4u) {
        ctx->pc = 0x504AD4u;
            // 0x504ad4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x504AD8u;
        goto label_504ad8;
    }
    ctx->pc = 0x504AD0u;
    {
        const bool branch_taken_0x504ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x504ad0) {
            ctx->pc = 0x504AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504AD0u;
            // 0x504ad4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504AECu;
            goto label_504aec;
        }
    }
    ctx->pc = 0x504AD8u;
label_504ad8:
    // 0x504ad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x504ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504adc:
    // 0x504adc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x504adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_504ae0:
    // 0x504ae0: 0x320f809  jalr        $t9
label_504ae4:
    if (ctx->pc == 0x504AE4u) {
        ctx->pc = 0x504AE4u;
            // 0x504ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x504AE8u;
        goto label_504ae8;
    }
    ctx->pc = 0x504AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504AE8u);
        ctx->pc = 0x504AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504AE0u;
            // 0x504ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x504AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504AE8u; }
            if (ctx->pc != 0x504AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x504AE8u;
label_504ae8:
    // 0x504ae8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x504ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_504aec:
    // 0x504aec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_504af0:
    if (ctx->pc == 0x504AF0u) {
        ctx->pc = 0x504AF0u;
            // 0x504af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504AF4u;
        goto label_504af4;
    }
    ctx->pc = 0x504AECu;
    {
        const bool branch_taken_0x504aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x504aec) {
            ctx->pc = 0x504AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504AECu;
            // 0x504af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504B08u;
            goto label_504b08;
        }
    }
    ctx->pc = 0x504AF4u;
label_504af4:
    // 0x504af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x504af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504af8:
    // 0x504af8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x504af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_504afc:
    // 0x504afc: 0x320f809  jalr        $t9
label_504b00:
    if (ctx->pc == 0x504B00u) {
        ctx->pc = 0x504B00u;
            // 0x504b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x504B04u;
        goto label_504b04;
    }
    ctx->pc = 0x504AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504B04u);
        ctx->pc = 0x504B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504AFCu;
            // 0x504b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x504B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504B04u; }
            if (ctx->pc != 0x504B04u) { return; }
        }
        }
    }
    ctx->pc = 0x504B04u;
label_504b04:
    // 0x504b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x504b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_504b08:
    // 0x504b08: 0xc075bf8  jal         func_1D6FE0
label_504b0c:
    if (ctx->pc == 0x504B0Cu) {
        ctx->pc = 0x504B0Cu;
            // 0x504b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504B10u;
        goto label_504b10;
    }
    ctx->pc = 0x504B08u;
    SET_GPR_U32(ctx, 31, 0x504B10u);
    ctx->pc = 0x504B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504B08u;
            // 0x504b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B10u; }
        if (ctx->pc != 0x504B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B10u; }
        if (ctx->pc != 0x504B10u) { return; }
    }
    ctx->pc = 0x504B10u;
label_504b10:
    // 0x504b10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x504b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_504b14:
    // 0x504b14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x504b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_504b18:
    // 0x504b18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_504b1c:
    if (ctx->pc == 0x504B1Cu) {
        ctx->pc = 0x504B1Cu;
            // 0x504b1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504B20u;
        goto label_504b20;
    }
    ctx->pc = 0x504B18u;
    {
        const bool branch_taken_0x504b18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x504b18) {
            ctx->pc = 0x504B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504B18u;
            // 0x504b1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504B2Cu;
            goto label_504b2c;
        }
    }
    ctx->pc = 0x504B20u;
label_504b20:
    // 0x504b20: 0xc0400a8  jal         func_1002A0
label_504b24:
    if (ctx->pc == 0x504B24u) {
        ctx->pc = 0x504B24u;
            // 0x504b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504B28u;
        goto label_504b28;
    }
    ctx->pc = 0x504B20u;
    SET_GPR_U32(ctx, 31, 0x504B28u);
    ctx->pc = 0x504B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504B20u;
            // 0x504b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B28u; }
        if (ctx->pc != 0x504B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504B28u; }
        if (ctx->pc != 0x504B28u) { return; }
    }
    ctx->pc = 0x504B28u;
label_504b28:
    // 0x504b28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x504b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_504b2c:
    // 0x504b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_504b30:
    // 0x504b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504b34:
    // 0x504b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504b38:
    // 0x504b38: 0x3e00008  jr          $ra
label_504b3c:
    if (ctx->pc == 0x504B3Cu) {
        ctx->pc = 0x504B3Cu;
            // 0x504b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x504B40u;
        goto label_fallthrough_0x504b38;
    }
    ctx->pc = 0x504B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504B38u;
            // 0x504b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x504b38:
    ctx->pc = 0x504B40u;
}
