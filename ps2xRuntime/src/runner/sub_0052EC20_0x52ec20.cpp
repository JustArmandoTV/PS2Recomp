#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052EC20
// Address: 0x52ec20 - 0x52ee20
void sub_0052EC20_0x52ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052EC20_0x52ec20");
#endif

    switch (ctx->pc) {
        case 0x52ec20u: goto label_52ec20;
        case 0x52ec24u: goto label_52ec24;
        case 0x52ec28u: goto label_52ec28;
        case 0x52ec2cu: goto label_52ec2c;
        case 0x52ec30u: goto label_52ec30;
        case 0x52ec34u: goto label_52ec34;
        case 0x52ec38u: goto label_52ec38;
        case 0x52ec3cu: goto label_52ec3c;
        case 0x52ec40u: goto label_52ec40;
        case 0x52ec44u: goto label_52ec44;
        case 0x52ec48u: goto label_52ec48;
        case 0x52ec4cu: goto label_52ec4c;
        case 0x52ec50u: goto label_52ec50;
        case 0x52ec54u: goto label_52ec54;
        case 0x52ec58u: goto label_52ec58;
        case 0x52ec5cu: goto label_52ec5c;
        case 0x52ec60u: goto label_52ec60;
        case 0x52ec64u: goto label_52ec64;
        case 0x52ec68u: goto label_52ec68;
        case 0x52ec6cu: goto label_52ec6c;
        case 0x52ec70u: goto label_52ec70;
        case 0x52ec74u: goto label_52ec74;
        case 0x52ec78u: goto label_52ec78;
        case 0x52ec7cu: goto label_52ec7c;
        case 0x52ec80u: goto label_52ec80;
        case 0x52ec84u: goto label_52ec84;
        case 0x52ec88u: goto label_52ec88;
        case 0x52ec8cu: goto label_52ec8c;
        case 0x52ec90u: goto label_52ec90;
        case 0x52ec94u: goto label_52ec94;
        case 0x52ec98u: goto label_52ec98;
        case 0x52ec9cu: goto label_52ec9c;
        case 0x52eca0u: goto label_52eca0;
        case 0x52eca4u: goto label_52eca4;
        case 0x52eca8u: goto label_52eca8;
        case 0x52ecacu: goto label_52ecac;
        case 0x52ecb0u: goto label_52ecb0;
        case 0x52ecb4u: goto label_52ecb4;
        case 0x52ecb8u: goto label_52ecb8;
        case 0x52ecbcu: goto label_52ecbc;
        case 0x52ecc0u: goto label_52ecc0;
        case 0x52ecc4u: goto label_52ecc4;
        case 0x52ecc8u: goto label_52ecc8;
        case 0x52ecccu: goto label_52eccc;
        case 0x52ecd0u: goto label_52ecd0;
        case 0x52ecd4u: goto label_52ecd4;
        case 0x52ecd8u: goto label_52ecd8;
        case 0x52ecdcu: goto label_52ecdc;
        case 0x52ece0u: goto label_52ece0;
        case 0x52ece4u: goto label_52ece4;
        case 0x52ece8u: goto label_52ece8;
        case 0x52ececu: goto label_52ecec;
        case 0x52ecf0u: goto label_52ecf0;
        case 0x52ecf4u: goto label_52ecf4;
        case 0x52ecf8u: goto label_52ecf8;
        case 0x52ecfcu: goto label_52ecfc;
        case 0x52ed00u: goto label_52ed00;
        case 0x52ed04u: goto label_52ed04;
        case 0x52ed08u: goto label_52ed08;
        case 0x52ed0cu: goto label_52ed0c;
        case 0x52ed10u: goto label_52ed10;
        case 0x52ed14u: goto label_52ed14;
        case 0x52ed18u: goto label_52ed18;
        case 0x52ed1cu: goto label_52ed1c;
        case 0x52ed20u: goto label_52ed20;
        case 0x52ed24u: goto label_52ed24;
        case 0x52ed28u: goto label_52ed28;
        case 0x52ed2cu: goto label_52ed2c;
        case 0x52ed30u: goto label_52ed30;
        case 0x52ed34u: goto label_52ed34;
        case 0x52ed38u: goto label_52ed38;
        case 0x52ed3cu: goto label_52ed3c;
        case 0x52ed40u: goto label_52ed40;
        case 0x52ed44u: goto label_52ed44;
        case 0x52ed48u: goto label_52ed48;
        case 0x52ed4cu: goto label_52ed4c;
        case 0x52ed50u: goto label_52ed50;
        case 0x52ed54u: goto label_52ed54;
        case 0x52ed58u: goto label_52ed58;
        case 0x52ed5cu: goto label_52ed5c;
        case 0x52ed60u: goto label_52ed60;
        case 0x52ed64u: goto label_52ed64;
        case 0x52ed68u: goto label_52ed68;
        case 0x52ed6cu: goto label_52ed6c;
        case 0x52ed70u: goto label_52ed70;
        case 0x52ed74u: goto label_52ed74;
        case 0x52ed78u: goto label_52ed78;
        case 0x52ed7cu: goto label_52ed7c;
        case 0x52ed80u: goto label_52ed80;
        case 0x52ed84u: goto label_52ed84;
        case 0x52ed88u: goto label_52ed88;
        case 0x52ed8cu: goto label_52ed8c;
        case 0x52ed90u: goto label_52ed90;
        case 0x52ed94u: goto label_52ed94;
        case 0x52ed98u: goto label_52ed98;
        case 0x52ed9cu: goto label_52ed9c;
        case 0x52eda0u: goto label_52eda0;
        case 0x52eda4u: goto label_52eda4;
        case 0x52eda8u: goto label_52eda8;
        case 0x52edacu: goto label_52edac;
        case 0x52edb0u: goto label_52edb0;
        case 0x52edb4u: goto label_52edb4;
        case 0x52edb8u: goto label_52edb8;
        case 0x52edbcu: goto label_52edbc;
        case 0x52edc0u: goto label_52edc0;
        case 0x52edc4u: goto label_52edc4;
        case 0x52edc8u: goto label_52edc8;
        case 0x52edccu: goto label_52edcc;
        case 0x52edd0u: goto label_52edd0;
        case 0x52edd4u: goto label_52edd4;
        case 0x52edd8u: goto label_52edd8;
        case 0x52eddcu: goto label_52eddc;
        case 0x52ede0u: goto label_52ede0;
        case 0x52ede4u: goto label_52ede4;
        case 0x52ede8u: goto label_52ede8;
        case 0x52edecu: goto label_52edec;
        case 0x52edf0u: goto label_52edf0;
        case 0x52edf4u: goto label_52edf4;
        case 0x52edf8u: goto label_52edf8;
        case 0x52edfcu: goto label_52edfc;
        case 0x52ee00u: goto label_52ee00;
        case 0x52ee04u: goto label_52ee04;
        case 0x52ee08u: goto label_52ee08;
        case 0x52ee0cu: goto label_52ee0c;
        case 0x52ee10u: goto label_52ee10;
        case 0x52ee14u: goto label_52ee14;
        case 0x52ee18u: goto label_52ee18;
        case 0x52ee1cu: goto label_52ee1c;
        default: break;
    }

    ctx->pc = 0x52ec20u;

label_52ec20:
    // 0x52ec20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52ec24:
    // 0x52ec24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52ec28:
    // 0x52ec28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52ec2c:
    // 0x52ec2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52ec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52ec30:
    // 0x52ec30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52ec30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52ec34:
    // 0x52ec34: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_52ec38:
    if (ctx->pc == 0x52EC38u) {
        ctx->pc = 0x52EC38u;
            // 0x52ec38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EC3Cu;
        goto label_52ec3c;
    }
    ctx->pc = 0x52EC34u;
    {
        const bool branch_taken_0x52ec34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC34u;
            // 0x52ec38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ec34) {
            ctx->pc = 0x52ED68u;
            goto label_52ed68;
        }
    }
    ctx->pc = 0x52EC3Cu;
label_52ec3c:
    // 0x52ec3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52ec40:
    // 0x52ec40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52ec44:
    // 0x52ec44: 0x24636c80  addiu       $v1, $v1, 0x6C80
    ctx->pc = 0x52ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27776));
label_52ec48:
    // 0x52ec48: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52ec4c:
    // 0x52ec4c: 0x24426cb8  addiu       $v0, $v0, 0x6CB8
    ctx->pc = 0x52ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27832));
label_52ec50:
    // 0x52ec50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x52ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_52ec54:
    // 0x52ec54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x52ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_52ec58:
    // 0x52ec58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x52ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52ec5c:
    // 0x52ec5c: 0xc0407c0  jal         func_101F00
label_52ec60:
    if (ctx->pc == 0x52EC60u) {
        ctx->pc = 0x52EC60u;
            // 0x52ec60: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
        ctx->pc = 0x52EC64u;
        goto label_52ec64;
    }
    ctx->pc = 0x52EC5Cu;
    SET_GPR_U32(ctx, 31, 0x52EC64u);
    ctx->pc = 0x52EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC5Cu;
            // 0x52ec60: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC64u; }
        if (ctx->pc != 0x52EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC64u; }
        if (ctx->pc != 0x52EC64u) { return; }
    }
    ctx->pc = 0x52EC64u;
label_52ec64:
    // 0x52ec64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x52ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_52ec68:
    // 0x52ec68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52ec6c:
    if (ctx->pc == 0x52EC6Cu) {
        ctx->pc = 0x52EC6Cu;
            // 0x52ec6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x52EC70u;
        goto label_52ec70;
    }
    ctx->pc = 0x52EC68u;
    {
        const bool branch_taken_0x52ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ec68) {
            ctx->pc = 0x52EC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC68u;
            // 0x52ec6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EC7Cu;
            goto label_52ec7c;
        }
    }
    ctx->pc = 0x52EC70u;
label_52ec70:
    // 0x52ec70: 0xc07507c  jal         func_1D41F0
label_52ec74:
    if (ctx->pc == 0x52EC74u) {
        ctx->pc = 0x52EC74u;
            // 0x52ec74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x52EC78u;
        goto label_52ec78;
    }
    ctx->pc = 0x52EC70u;
    SET_GPR_U32(ctx, 31, 0x52EC78u);
    ctx->pc = 0x52EC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC70u;
            // 0x52ec74: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC78u; }
        if (ctx->pc != 0x52EC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC78u; }
        if (ctx->pc != 0x52EC78u) { return; }
    }
    ctx->pc = 0x52EC78u;
label_52ec78:
    // 0x52ec78: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x52ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_52ec7c:
    // 0x52ec7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52ec80:
    if (ctx->pc == 0x52EC80u) {
        ctx->pc = 0x52EC80u;
            // 0x52ec80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x52EC84u;
        goto label_52ec84;
    }
    ctx->pc = 0x52EC7Cu;
    {
        const bool branch_taken_0x52ec7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ec7c) {
            ctx->pc = 0x52EC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC7Cu;
            // 0x52ec80: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ECACu;
            goto label_52ecac;
        }
    }
    ctx->pc = 0x52EC84u;
label_52ec84:
    // 0x52ec84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52ec88:
    if (ctx->pc == 0x52EC88u) {
        ctx->pc = 0x52EC8Cu;
        goto label_52ec8c;
    }
    ctx->pc = 0x52EC84u;
    {
        const bool branch_taken_0x52ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ec84) {
            ctx->pc = 0x52ECA8u;
            goto label_52eca8;
        }
    }
    ctx->pc = 0x52EC8Cu;
label_52ec8c:
    // 0x52ec8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52ec90:
    if (ctx->pc == 0x52EC90u) {
        ctx->pc = 0x52EC94u;
        goto label_52ec94;
    }
    ctx->pc = 0x52EC8Cu;
    {
        const bool branch_taken_0x52ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ec8c) {
            ctx->pc = 0x52ECA8u;
            goto label_52eca8;
        }
    }
    ctx->pc = 0x52EC94u;
label_52ec94:
    // 0x52ec94: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x52ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_52ec98:
    // 0x52ec98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52ec9c:
    if (ctx->pc == 0x52EC9Cu) {
        ctx->pc = 0x52ECA0u;
        goto label_52eca0;
    }
    ctx->pc = 0x52EC98u;
    {
        const bool branch_taken_0x52ec98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ec98) {
            ctx->pc = 0x52ECA8u;
            goto label_52eca8;
        }
    }
    ctx->pc = 0x52ECA0u;
label_52eca0:
    // 0x52eca0: 0xc0400a8  jal         func_1002A0
label_52eca4:
    if (ctx->pc == 0x52ECA4u) {
        ctx->pc = 0x52ECA8u;
        goto label_52eca8;
    }
    ctx->pc = 0x52ECA0u;
    SET_GPR_U32(ctx, 31, 0x52ECA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ECA8u; }
        if (ctx->pc != 0x52ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ECA8u; }
        if (ctx->pc != 0x52ECA8u) { return; }
    }
    ctx->pc = 0x52ECA8u;
label_52eca8:
    // 0x52eca8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x52eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_52ecac:
    // 0x52ecac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52ecb0:
    if (ctx->pc == 0x52ECB0u) {
        ctx->pc = 0x52ECB0u;
            // 0x52ecb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x52ECB4u;
        goto label_52ecb4;
    }
    ctx->pc = 0x52ECACu;
    {
        const bool branch_taken_0x52ecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecac) {
            ctx->pc = 0x52ECB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ECACu;
            // 0x52ecb0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ECDCu;
            goto label_52ecdc;
        }
    }
    ctx->pc = 0x52ECB4u;
label_52ecb4:
    // 0x52ecb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52ecb8:
    if (ctx->pc == 0x52ECB8u) {
        ctx->pc = 0x52ECBCu;
        goto label_52ecbc;
    }
    ctx->pc = 0x52ECB4u;
    {
        const bool branch_taken_0x52ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecb4) {
            ctx->pc = 0x52ECD8u;
            goto label_52ecd8;
        }
    }
    ctx->pc = 0x52ECBCu;
label_52ecbc:
    // 0x52ecbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52ecc0:
    if (ctx->pc == 0x52ECC0u) {
        ctx->pc = 0x52ECC4u;
        goto label_52ecc4;
    }
    ctx->pc = 0x52ECBCu;
    {
        const bool branch_taken_0x52ecbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecbc) {
            ctx->pc = 0x52ECD8u;
            goto label_52ecd8;
        }
    }
    ctx->pc = 0x52ECC4u;
label_52ecc4:
    // 0x52ecc4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x52ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_52ecc8:
    // 0x52ecc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52eccc:
    if (ctx->pc == 0x52ECCCu) {
        ctx->pc = 0x52ECD0u;
        goto label_52ecd0;
    }
    ctx->pc = 0x52ECC8u;
    {
        const bool branch_taken_0x52ecc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecc8) {
            ctx->pc = 0x52ECD8u;
            goto label_52ecd8;
        }
    }
    ctx->pc = 0x52ECD0u;
label_52ecd0:
    // 0x52ecd0: 0xc0400a8  jal         func_1002A0
label_52ecd4:
    if (ctx->pc == 0x52ECD4u) {
        ctx->pc = 0x52ECD8u;
        goto label_52ecd8;
    }
    ctx->pc = 0x52ECD0u;
    SET_GPR_U32(ctx, 31, 0x52ECD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ECD8u; }
        if (ctx->pc != 0x52ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ECD8u; }
        if (ctx->pc != 0x52ECD8u) { return; }
    }
    ctx->pc = 0x52ECD8u;
label_52ecd8:
    // 0x52ecd8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x52ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_52ecdc:
    // 0x52ecdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52ece0:
    if (ctx->pc == 0x52ECE0u) {
        ctx->pc = 0x52ECE4u;
        goto label_52ece4;
    }
    ctx->pc = 0x52ECDCu;
    {
        const bool branch_taken_0x52ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecdc) {
            ctx->pc = 0x52ECF8u;
            goto label_52ecf8;
        }
    }
    ctx->pc = 0x52ECE4u;
label_52ece4:
    // 0x52ece4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52ece8:
    // 0x52ece8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52ecec:
    // 0x52ecec: 0x24636c70  addiu       $v1, $v1, 0x6C70
    ctx->pc = 0x52ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27760));
label_52ecf0:
    // 0x52ecf0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x52ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_52ecf4:
    // 0x52ecf4: 0xac40ab08  sw          $zero, -0x54F8($v0)
    ctx->pc = 0x52ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945544), GPR_U32(ctx, 0));
label_52ecf8:
    // 0x52ecf8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_52ecfc:
    if (ctx->pc == 0x52ECFCu) {
        ctx->pc = 0x52ECFCu;
            // 0x52ecfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x52ED00u;
        goto label_52ed00;
    }
    ctx->pc = 0x52ECF8u;
    {
        const bool branch_taken_0x52ecf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ecf8) {
            ctx->pc = 0x52ECFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ECF8u;
            // 0x52ecfc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ED54u;
            goto label_52ed54;
        }
    }
    ctx->pc = 0x52ED00u;
label_52ed00:
    // 0x52ed00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52ed04:
    // 0x52ed04: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_52ed08:
    // 0x52ed08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52ed0c:
    // 0x52ed0c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x52ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_52ed10:
    // 0x52ed10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52ed14:
    if (ctx->pc == 0x52ED14u) {
        ctx->pc = 0x52ED14u;
            // 0x52ed14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x52ED18u;
        goto label_52ed18;
    }
    ctx->pc = 0x52ED10u;
    {
        const bool branch_taken_0x52ed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ed10) {
            ctx->pc = 0x52ED14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED10u;
            // 0x52ed14: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ED2Cu;
            goto label_52ed2c;
        }
    }
    ctx->pc = 0x52ED18u;
label_52ed18:
    // 0x52ed18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52ed18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52ed1c:
    // 0x52ed1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52ed1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52ed20:
    // 0x52ed20: 0x320f809  jalr        $t9
label_52ed24:
    if (ctx->pc == 0x52ED24u) {
        ctx->pc = 0x52ED24u;
            // 0x52ed24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52ED28u;
        goto label_52ed28;
    }
    ctx->pc = 0x52ED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52ED28u);
        ctx->pc = 0x52ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED20u;
            // 0x52ed24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52ED28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52ED28u; }
            if (ctx->pc != 0x52ED28u) { return; }
        }
        }
    }
    ctx->pc = 0x52ED28u;
label_52ed28:
    // 0x52ed28: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x52ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_52ed2c:
    // 0x52ed2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52ed30:
    if (ctx->pc == 0x52ED30u) {
        ctx->pc = 0x52ED30u;
            // 0x52ed30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ED34u;
        goto label_52ed34;
    }
    ctx->pc = 0x52ED2Cu;
    {
        const bool branch_taken_0x52ed2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ed2c) {
            ctx->pc = 0x52ED30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED2Cu;
            // 0x52ed30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ED48u;
            goto label_52ed48;
        }
    }
    ctx->pc = 0x52ED34u;
label_52ed34:
    // 0x52ed34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52ed34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52ed38:
    // 0x52ed38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52ed38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52ed3c:
    // 0x52ed3c: 0x320f809  jalr        $t9
label_52ed40:
    if (ctx->pc == 0x52ED40u) {
        ctx->pc = 0x52ED40u;
            // 0x52ed40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52ED44u;
        goto label_52ed44;
    }
    ctx->pc = 0x52ED3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52ED44u);
        ctx->pc = 0x52ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED3Cu;
            // 0x52ed40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52ED44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52ED44u; }
            if (ctx->pc != 0x52ED44u) { return; }
        }
        }
    }
    ctx->pc = 0x52ED44u;
label_52ed44:
    // 0x52ed44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52ed48:
    // 0x52ed48: 0xc075bf8  jal         func_1D6FE0
label_52ed4c:
    if (ctx->pc == 0x52ED4Cu) {
        ctx->pc = 0x52ED4Cu;
            // 0x52ed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ED50u;
        goto label_52ed50;
    }
    ctx->pc = 0x52ED48u;
    SET_GPR_U32(ctx, 31, 0x52ED50u);
    ctx->pc = 0x52ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED48u;
            // 0x52ed4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ED50u; }
        if (ctx->pc != 0x52ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ED50u; }
        if (ctx->pc != 0x52ED50u) { return; }
    }
    ctx->pc = 0x52ED50u;
label_52ed50:
    // 0x52ed50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52ed54:
    // 0x52ed54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52ed54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52ed58:
    // 0x52ed58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52ed5c:
    if (ctx->pc == 0x52ED5Cu) {
        ctx->pc = 0x52ED5Cu;
            // 0x52ed5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ED60u;
        goto label_52ed60;
    }
    ctx->pc = 0x52ED58u;
    {
        const bool branch_taken_0x52ed58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52ed58) {
            ctx->pc = 0x52ED5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED58u;
            // 0x52ed5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52ED6Cu;
            goto label_52ed6c;
        }
    }
    ctx->pc = 0x52ED60u;
label_52ed60:
    // 0x52ed60: 0xc0400a8  jal         func_1002A0
label_52ed64:
    if (ctx->pc == 0x52ED64u) {
        ctx->pc = 0x52ED64u;
            // 0x52ed64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ED68u;
        goto label_52ed68;
    }
    ctx->pc = 0x52ED60u;
    SET_GPR_U32(ctx, 31, 0x52ED68u);
    ctx->pc = 0x52ED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED60u;
            // 0x52ed64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ED68u; }
        if (ctx->pc != 0x52ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ED68u; }
        if (ctx->pc != 0x52ED68u) { return; }
    }
    ctx->pc = 0x52ED68u;
label_52ed68:
    // 0x52ed68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52ed68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52ed6c:
    // 0x52ed6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52ed70:
    // 0x52ed70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ed70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52ed74:
    // 0x52ed74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ed74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ed78:
    // 0x52ed78: 0x3e00008  jr          $ra
label_52ed7c:
    if (ctx->pc == 0x52ED7Cu) {
        ctx->pc = 0x52ED7Cu;
            // 0x52ed7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52ED80u;
        goto label_52ed80;
    }
    ctx->pc = 0x52ED78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52ED7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED78u;
            // 0x52ed7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52ED80u;
label_52ed80:
    // 0x52ed80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52ed84:
    // 0x52ed84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52ed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52ed88:
    // 0x52ed88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52ed8c:
    // 0x52ed8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52ed90:
    // 0x52ed90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52ed90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52ed94:
    // 0x52ed94: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_52ed98:
    if (ctx->pc == 0x52ED98u) {
        ctx->pc = 0x52ED98u;
            // 0x52ed98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ED9Cu;
        goto label_52ed9c;
    }
    ctx->pc = 0x52ED94u;
    {
        const bool branch_taken_0x52ed94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52ED94u;
            // 0x52ed98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ed94) {
            ctx->pc = 0x52EE04u;
            goto label_52ee04;
        }
    }
    ctx->pc = 0x52ED9Cu;
label_52ed9c:
    // 0x52ed9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52eda0:
    // 0x52eda0: 0x24426c30  addiu       $v0, $v0, 0x6C30
    ctx->pc = 0x52eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27696));
label_52eda4:
    // 0x52eda4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52eda8:
    // 0x52eda8: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x52eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_52edac:
    // 0x52edac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_52edb0:
    if (ctx->pc == 0x52EDB0u) {
        ctx->pc = 0x52EDB4u;
        goto label_52edb4;
    }
    ctx->pc = 0x52EDACu;
    {
        const bool branch_taken_0x52edac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52edac) {
            ctx->pc = 0x52EDC8u;
            goto label_52edc8;
        }
    }
    ctx->pc = 0x52EDB4u;
label_52edb4:
    // 0x52edb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52edb8:
    // 0x52edb8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52edbc:
    // 0x52edbc: 0xc08c8fc  jal         func_2323F0
label_52edc0:
    if (ctx->pc == 0x52EDC0u) {
        ctx->pc = 0x52EDC0u;
            // 0x52edc0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x52EDC4u;
        goto label_52edc4;
    }
    ctx->pc = 0x52EDBCu;
    SET_GPR_U32(ctx, 31, 0x52EDC4u);
    ctx->pc = 0x52EDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EDBCu;
            // 0x52edc0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EDC4u; }
        if (ctx->pc != 0x52EDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EDC4u; }
        if (ctx->pc != 0x52EDC4u) { return; }
    }
    ctx->pc = 0x52EDC4u;
label_52edc4:
    // 0x52edc4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x52edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_52edc8:
    // 0x52edc8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_52edcc:
    if (ctx->pc == 0x52EDCCu) {
        ctx->pc = 0x52EDCCu;
            // 0x52edcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x52EDD0u;
        goto label_52edd0;
    }
    ctx->pc = 0x52EDC8u;
    {
        const bool branch_taken_0x52edc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52edc8) {
            ctx->pc = 0x52EDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EDC8u;
            // 0x52edcc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EDF0u;
            goto label_52edf0;
        }
    }
    ctx->pc = 0x52EDD0u;
label_52edd0:
    // 0x52edd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52edd4:
    // 0x52edd4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x52edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_52edd8:
    // 0x52edd8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_52eddc:
    if (ctx->pc == 0x52EDDCu) {
        ctx->pc = 0x52EDDCu;
            // 0x52eddc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x52EDE0u;
        goto label_52ede0;
    }
    ctx->pc = 0x52EDD8u;
    {
        const bool branch_taken_0x52edd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EDD8u;
            // 0x52eddc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52edd8) {
            ctx->pc = 0x52EDECu;
            goto label_52edec;
        }
    }
    ctx->pc = 0x52EDE0u;
label_52ede0:
    // 0x52ede0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52ede4:
    // 0x52ede4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_52ede8:
    // 0x52ede8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52edec:
    // 0x52edec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52edecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52edf0:
    // 0x52edf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52edf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52edf4:
    // 0x52edf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52edf8:
    if (ctx->pc == 0x52EDF8u) {
        ctx->pc = 0x52EDF8u;
            // 0x52edf8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EDFCu;
        goto label_52edfc;
    }
    ctx->pc = 0x52EDF4u;
    {
        const bool branch_taken_0x52edf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52edf4) {
            ctx->pc = 0x52EDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EDF4u;
            // 0x52edf8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EE08u;
            goto label_52ee08;
        }
    }
    ctx->pc = 0x52EDFCu;
label_52edfc:
    // 0x52edfc: 0xc0400a8  jal         func_1002A0
label_52ee00:
    if (ctx->pc == 0x52EE00u) {
        ctx->pc = 0x52EE00u;
            // 0x52ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EE04u;
        goto label_52ee04;
    }
    ctx->pc = 0x52EDFCu;
    SET_GPR_U32(ctx, 31, 0x52EE04u);
    ctx->pc = 0x52EE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EDFCu;
            // 0x52ee00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EE04u; }
        if (ctx->pc != 0x52EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EE04u; }
        if (ctx->pc != 0x52EE04u) { return; }
    }
    ctx->pc = 0x52EE04u;
label_52ee04:
    // 0x52ee04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52ee04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52ee08:
    // 0x52ee08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52ee08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52ee0c:
    // 0x52ee0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ee0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52ee10:
    // 0x52ee10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ee10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ee14:
    // 0x52ee14: 0x3e00008  jr          $ra
label_52ee18:
    if (ctx->pc == 0x52EE18u) {
        ctx->pc = 0x52EE18u;
            // 0x52ee18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52EE1Cu;
        goto label_52ee1c;
    }
    ctx->pc = 0x52EE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EE14u;
            // 0x52ee18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52EE1Cu;
label_52ee1c:
    // 0x52ee1c: 0x0  nop
    ctx->pc = 0x52ee1cu;
    // NOP
}
