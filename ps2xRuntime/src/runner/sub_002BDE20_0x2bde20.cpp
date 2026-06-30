#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDE20
// Address: 0x2bde20 - 0x2be0c0
void sub_002BDE20_0x2bde20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE20_0x2bde20");
#endif

    switch (ctx->pc) {
        case 0x2bde50u: goto label_2bde50;
        case 0x2bdea4u: goto label_2bdea4;
        case 0x2bdf20u: goto label_2bdf20;
        case 0x2bdf40u: goto label_2bdf40;
        case 0x2bdf54u: goto label_2bdf54;
        case 0x2bdf60u: goto label_2bdf60;
        case 0x2bdf64u: goto label_2bdf64;
        case 0x2bdf88u: goto label_2bdf88;
        case 0x2bdfd4u: goto label_2bdfd4;
        case 0x2bdfdcu: goto label_2bdfdc;
        case 0x2bdffcu: goto label_2bdffc;
        case 0x2be004u: goto label_2be004;
        case 0x2be048u: goto label_2be048;
        case 0x2be050u: goto label_2be050;
        default: break;
    }

    ctx->pc = 0x2bde20u;

    // 0x2bde20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bde20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bde24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bde24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bde28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bde28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bde2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bde2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bde30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bde30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bde34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bde34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bde38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bde3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bde3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bde40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bde40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bde44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde48: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BDE48u;
    SET_GPR_U32(ctx, 31, 0x2BDE50u);
    ctx->pc = 0x2BDE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE48u;
            // 0x2bde4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE50u; }
        if (ctx->pc != 0x2BDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE50u; }
        if (ctx->pc != 0x2BDE50u) { return; }
    }
    ctx->pc = 0x2BDE50u;
label_2bde50:
    // 0x2bde50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bde54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bde54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bde58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bde58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bde5c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bde60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bde60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bde64: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bde64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bde68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bde68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bde6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bde70: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bde70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bde74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bde78: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bde78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bde7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bde7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bde80: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bde80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bde84: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bde84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bde88: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bde88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bde8c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bde90: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bde90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bde94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bde98: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bde98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bde9c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BDE9Cu;
    SET_GPR_U32(ctx, 31, 0x2BDEA4u);
    ctx->pc = 0x2BDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE9Cu;
            // 0x2bdea0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEA4u; }
        if (ctx->pc != 0x2BDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEA4u; }
        if (ctx->pc != 0x2BDEA4u) { return; }
    }
    ctx->pc = 0x2BDEA4u;
label_2bdea4:
    // 0x2bdea4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bdea8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bdeac: 0x24631dd0  addiu       $v1, $v1, 0x1DD0
    ctx->pc = 0x2bdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7632));
    // 0x2bdeb0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bdeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bdeb4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bdeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bdeb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bdebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bdec0: 0xac440d18  sw          $a0, 0xD18($v0)
    ctx->pc = 0x2bdec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3352), GPR_U32(ctx, 4));
    // 0x2bdec4: 0x24631de0  addiu       $v1, $v1, 0x1DE0
    ctx->pc = 0x2bdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7648));
    // 0x2bdec8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bdecc: 0x24421e18  addiu       $v0, $v0, 0x1E18
    ctx->pc = 0x2bdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7704));
    // 0x2bded0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bded0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bded4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bded4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bded8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bded8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bdedc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bdedcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bdee0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bdee4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bdee8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bdeec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bdef0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bdef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bdef4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bdef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bdef8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bdef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bdefc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2bdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2bdf00: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2bdf00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2bdf04: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2bdf04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2bdf08: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bdf08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bdf0c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BDF0Cu;
    {
        const bool branch_taken_0x2bdf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdf0c) {
            ctx->pc = 0x2BDF98u;
            goto label_2bdf98;
        }
    }
    ctx->pc = 0x2BDF14u;
    // 0x2bdf14: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x2bdf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2bdf18: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BDF18u;
    SET_GPR_U32(ctx, 31, 0x2BDF20u);
    ctx->pc = 0x2BDF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF18u;
            // 0x2bdf1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF20u; }
        if (ctx->pc != 0x2BDF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF20u; }
        if (ctx->pc != 0x2BDF20u) { return; }
    }
    ctx->pc = 0x2BDF20u;
label_2bdf20:
    // 0x2bdf20: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bdf20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bdf24: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bdf24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bdf28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bdf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf2c: 0x24a5dfc0  addiu       $a1, $a1, -0x2040
    ctx->pc = 0x2bdf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    // 0x2bdf30: 0x24c6dbb0  addiu       $a2, $a2, -0x2450
    ctx->pc = 0x2bdf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958000));
    // 0x2bdf34: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2bdf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2bdf38: 0xc040840  jal         func_102100
    ctx->pc = 0x2BDF38u;
    SET_GPR_U32(ctx, 31, 0x2BDF40u);
    ctx->pc = 0x2BDF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF38u;
            // 0x2bdf3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF40u; }
        if (ctx->pc != 0x2BDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF40u; }
        if (ctx->pc != 0x2BDF40u) { return; }
    }
    ctx->pc = 0x2BDF40u;
label_2bdf40:
    // 0x2bdf40: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bdf40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bdf44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bdf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf48: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bdf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bdf4c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF54u);
    ctx->pc = 0x2BDF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF4Cu;
            // 0x2bdf50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF54u; }
        if (ctx->pc != 0x2BDF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF54u; }
        if (ctx->pc != 0x2BDF54u) { return; }
    }
    ctx->pc = 0x2BDF54u;
label_2bdf54:
    // 0x2bdf54: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bdf58: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BDF58u;
    SET_GPR_U32(ctx, 31, 0x2BDF60u);
    ctx->pc = 0x2BDF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF58u;
            // 0x2bdf5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF60u; }
        if (ctx->pc != 0x2BDF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF60u; }
        if (ctx->pc != 0x2BDF60u) { return; }
    }
    ctx->pc = 0x2BDF60u;
label_2bdf60:
    // 0x2bdf60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bdf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf64:
    // 0x2bdf64: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bdf68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bdf6c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bdf70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bdf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bdf74: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bdf78: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bdf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bdf7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bdf80: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BDF80u;
    SET_GPR_U32(ctx, 31, 0x2BDF88u);
    ctx->pc = 0x2BDF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF80u;
            // 0x2bdf84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF88u; }
        if (ctx->pc != 0x2BDF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF88u; }
        if (ctx->pc != 0x2BDF88u) { return; }
    }
    ctx->pc = 0x2BDF88u;
label_2bdf88:
    // 0x2bdf88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bdf88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bdf8c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bdf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bdf90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BDF90u;
    {
        const bool branch_taken_0x2bdf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF90u;
            // 0x2bdf94: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf90) {
            ctx->pc = 0x2BDF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bdf64;
        }
    }
    ctx->pc = 0x2BDF98u;
label_2bdf98:
    // 0x2bdf98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bdf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bdf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bdfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdfa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bdfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFB0u;
            // 0x2bdfb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDFB8u;
    // 0x2bdfb8: 0x0  nop
    ctx->pc = 0x2bdfb8u;
    // NOP
    // 0x2bdfbc: 0x0  nop
    ctx->pc = 0x2bdfbcu;
    // NOP
    // 0x2bdfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdfc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bdfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bdfc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bdfcc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2BDFCCu;
    SET_GPR_U32(ctx, 31, 0x2BDFD4u);
    ctx->pc = 0x2BDFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFCCu;
            // 0x2bdfd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFD4u; }
        if (ctx->pc != 0x2BDFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFD4u; }
        if (ctx->pc != 0x2BDFD4u) { return; }
    }
    ctx->pc = 0x2BDFD4u;
label_2bdfd4:
    // 0x2bdfd4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2BDFD4u;
    SET_GPR_U32(ctx, 31, 0x2BDFDCu);
    ctx->pc = 0x2BDFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFD4u;
            // 0x2bdfd8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFDCu; }
        if (ctx->pc != 0x2BDFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFDCu; }
        if (ctx->pc != 0x2BDFDCu) { return; }
    }
    ctx->pc = 0x2BDFDCu;
label_2bdfdc:
    // 0x2bdfdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bdfe0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bdfe4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2bdfe8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2bdfec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bdfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bdff0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2bdff4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2BDFF4u;
    SET_GPR_U32(ctx, 31, 0x2BDFFCu);
    ctx->pc = 0x2BDFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFF4u;
            // 0x2bdff8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFFCu; }
        if (ctx->pc != 0x2BDFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFFCu; }
        if (ctx->pc != 0x2BDFFCu) { return; }
    }
    ctx->pc = 0x2BDFFCu;
label_2bdffc:
    // 0x2bdffc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2BDFFCu;
    SET_GPR_U32(ctx, 31, 0x2BE004u);
    ctx->pc = 0x2BE000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFFCu;
            // 0x2be000: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE004u; }
        if (ctx->pc != 0x2BE004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE004u; }
        if (ctx->pc != 0x2BE004u) { return; }
    }
    ctx->pc = 0x2BE004u;
label_2be004:
    // 0x2be004: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2be004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2be008: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2be008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2be00c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2be00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2be010: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2be010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2be014: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2be014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2be018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be01c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2be01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2be020: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2be020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be024: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2be024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2be028: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2be028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2be02c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2be02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2be030: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2be030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2be034: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2be034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2be038: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2be038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2be03c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2be03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2be040: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2BE040u;
    SET_GPR_U32(ctx, 31, 0x2BE048u);
    ctx->pc = 0x2BE044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE040u;
            // 0x2be044: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE048u; }
        if (ctx->pc != 0x2BE048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE048u; }
        if (ctx->pc != 0x2BE048u) { return; }
    }
    ctx->pc = 0x2BE048u;
label_2be048:
    // 0x2be048: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2BE048u;
    SET_GPR_U32(ctx, 31, 0x2BE050u);
    ctx->pc = 0x2BE04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE048u;
            // 0x2be04c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE050u; }
        if (ctx->pc != 0x2BE050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE050u; }
        if (ctx->pc != 0x2BE050u) { return; }
    }
    ctx->pc = 0x2BE050u;
label_2be050:
    // 0x2be050: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2be050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2be054: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2be054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2be058: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2be058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2be05c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2be05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2be060: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2be060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be064: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x2be064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2be068: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2be068u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be06c: 0x24a51d30  addiu       $a1, $a1, 0x1D30
    ctx->pc = 0x2be06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
    // 0x2be070: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x2be070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
    // 0x2be074: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x2be074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x2be078: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x2be078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2be07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2be07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be080: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2be080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x2be084: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2be084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2be088: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2be088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2be08c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2be08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2be090: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2be090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2be094: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x2be094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x2be098: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2be098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2be09c: 0xa20000ec  sb          $zero, 0xEC($s0)
    ctx->pc = 0x2be09cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0a0: 0xa20000ed  sb          $zero, 0xED($s0)
    ctx->pc = 0x2be0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 237), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0a4: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2be0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2be0a8: 0xa20000f4  sb          $zero, 0xF4($s0)
    ctx->pc = 0x2be0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be0b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0B4u;
            // 0x2be0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE0BCu;
    // 0x2be0bc: 0x0  nop
    ctx->pc = 0x2be0bcu;
    // NOP
}
