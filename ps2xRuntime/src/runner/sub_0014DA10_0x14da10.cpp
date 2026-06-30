#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DA10
// Address: 0x14da10 - 0x14db40
void sub_0014DA10_0x14da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DA10_0x14da10");
#endif

    switch (ctx->pc) {
        case 0x14da50u: goto label_14da50;
        case 0x14da5cu: goto label_14da5c;
        case 0x14da7cu: goto label_14da7c;
        case 0x14dab4u: goto label_14dab4;
        case 0x14daccu: goto label_14dacc;
        case 0x14daf0u: goto label_14daf0;
        case 0x14db28u: goto label_14db28;
        default: break;
    }

    ctx->pc = 0x14da10u;

    // 0x14da10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14da14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14da18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14da1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14da1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14da20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14da24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14da2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14da2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da30: 0x10e20022  beq         $a3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14DA30u;
    {
        const bool branch_taken_0x14da30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x14DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA30u;
            // 0x14da34: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da30) {
            ctx->pc = 0x14DABCu;
            goto label_14dabc;
        }
    }
    ctx->pc = 0x14DA38u;
    // 0x14da38: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x14da3c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14da40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14da40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14da44: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14da48: 0xc04cd60  jal         func_133580
    ctx->pc = 0x14DA48u;
    SET_GPR_U32(ctx, 31, 0x14DA50u);
    ctx->pc = 0x14DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA48u;
            // 0x14da4c: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA50u; }
        if (ctx->pc != 0x14DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA50u; }
        if (ctx->pc != 0x14DA50u) { return; }
    }
    ctx->pc = 0x14DA50u;
label_14da50:
    // 0x14da50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14da54: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DA54u;
    SET_GPR_U32(ctx, 31, 0x14DA5Cu);
    ctx->pc = 0x14DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA54u;
            // 0x14da58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA5Cu; }
        if (ctx->pc != 0x14DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA5Cu; }
        if (ctx->pc != 0x14DA5Cu) { return; }
    }
    ctx->pc = 0x14DA5Cu;
label_14da5c:
    // 0x14da5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14da60: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x14da64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14da64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14da68: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA68u;
    {
        const bool branch_taken_0x14da68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da68) {
            ctx->pc = 0x14DA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA68u;
            // 0x14da6c: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DA84u;
            goto label_14da84;
        }
    }
    ctx->pc = 0x14DA70u;
    // 0x14da70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da74: 0xc054484  jal         func_151210
    ctx->pc = 0x14DA74u;
    SET_GPR_U32(ctx, 31, 0x14DA7Cu);
    ctx->pc = 0x14DA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA74u;
            // 0x14da78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA7Cu; }
        if (ctx->pc != 0x14DA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA7Cu; }
        if (ctx->pc != 0x14DA7Cu) { return; }
    }
    ctx->pc = 0x14DA7Cu;
label_14da7c:
    // 0x14da7c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14DA7Cu;
    {
        const bool branch_taken_0x14da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA7Cu;
            // 0x14da80: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da7c) {
            ctx->pc = 0x14DB2Cu;
            goto label_14db2c;
        }
    }
    ctx->pc = 0x14DA84u;
label_14da84:
    // 0x14da84: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA84u;
            // 0x14da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DAACu;
            goto label_14daac;
        }
    }
    ctx->pc = 0x14DA8Cu;
    // 0x14da8c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x14da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14da90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA90u;
    {
        const bool branch_taken_0x14da90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14da90) {
            ctx->pc = 0x14DAA8u;
            goto label_14daa8;
        }
    }
    ctx->pc = 0x14DA98u;
    // 0x14da98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA98u;
    {
        const bool branch_taken_0x14da98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da98) {
            ctx->pc = 0x14DAA8u;
            goto label_14daa8;
        }
    }
    ctx->pc = 0x14DAA0u;
    // 0x14daa0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14DAA0u;
    {
        const bool branch_taken_0x14daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daa0) {
            ctx->pc = 0x14DB28u;
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DAA8u;
label_14daa8:
    // 0x14daa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14daac:
    // 0x14daac: 0xc053a0c  jal         func_14E830
    ctx->pc = 0x14DAACu;
    SET_GPR_U32(ctx, 31, 0x14DAB4u);
    ctx->pc = 0x14E830u;
    if (runtime->hasFunction(0x14E830u)) {
        auto targetFn = runtime->lookupFunction(0x14E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAB4u; }
        if (ctx->pc != 0x14DAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E830_0x14e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAB4u; }
        if (ctx->pc != 0x14DAB4u) { return; }
    }
    ctx->pc = 0x14DAB4u;
label_14dab4:
    // 0x14dab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14DAB4u;
    {
        const bool branch_taken_0x14dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dab4) {
            ctx->pc = 0x14DB28u;
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DABCu;
label_14dabc:
    // 0x14dabc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14dac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dac4: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DAC4u;
    SET_GPR_U32(ctx, 31, 0x14DACCu);
    ctx->pc = 0x14DAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAC4u;
            // 0x14dac8: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DACCu; }
        if (ctx->pc != 0x14DACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DACCu; }
        if (ctx->pc != 0x14DACCu) { return; }
    }
    ctx->pc = 0x14DACCu;
label_14dacc:
    // 0x14dacc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14daccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14dad0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x14dad4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14dad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14dad8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DAD8u;
    {
        const bool branch_taken_0x14dad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dad8) {
            ctx->pc = 0x14DADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAD8u;
            // 0x14dadc: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DAF8u;
            goto label_14daf8;
        }
    }
    ctx->pc = 0x14DAE0u;
    // 0x14dae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14dae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dae4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14dae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dae8: 0xc054390  jal         func_150E40
    ctx->pc = 0x14DAE8u;
    SET_GPR_U32(ctx, 31, 0x14DAF0u);
    ctx->pc = 0x14DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAE8u;
            // 0x14daec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E40u;
    if (runtime->hasFunction(0x150E40u)) {
        auto targetFn = runtime->lookupFunction(0x150E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAF0u; }
        if (ctx->pc != 0x14DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E40_0x150e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAF0u; }
        if (ctx->pc != 0x14DAF0u) { return; }
    }
    ctx->pc = 0x14DAF0u;
label_14daf0:
    // 0x14daf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14DAF0u;
    {
        const bool branch_taken_0x14daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daf0) {
            ctx->pc = 0x14DB28u;
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DAF8u;
label_14daf8:
    // 0x14daf8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DAF8u;
    {
        const bool branch_taken_0x14daf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14daf8) {
            ctx->pc = 0x14DAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAF8u;
            // 0x14dafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DB20u;
            goto label_14db20;
        }
    }
    ctx->pc = 0x14DB00u;
    // 0x14db00: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14db04: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DB04u;
    {
        const bool branch_taken_0x14db04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db04) {
            ctx->pc = 0x14DB1Cu;
            goto label_14db1c;
        }
    }
    ctx->pc = 0x14DB0Cu;
    // 0x14db0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DB0Cu;
    {
        const bool branch_taken_0x14db0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db0c) {
            ctx->pc = 0x14DB1Cu;
            goto label_14db1c;
        }
    }
    ctx->pc = 0x14DB14u;
    // 0x14db14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14DB14u;
    {
        const bool branch_taken_0x14db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db14) {
            ctx->pc = 0x14DB28u;
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DB1Cu;
label_14db1c:
    // 0x14db1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14db20:
    // 0x14db20: 0xc053978  jal         func_14E5E0
    ctx->pc = 0x14DB20u;
    SET_GPR_U32(ctx, 31, 0x14DB28u);
    ctx->pc = 0x14DB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB20u;
            // 0x14db24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5E0u;
    if (runtime->hasFunction(0x14E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB28u; }
        if (ctx->pc != 0x14DB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E5E0_0x14e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB28u; }
        if (ctx->pc != 0x14DB28u) { return; }
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14db28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14db2c:
    // 0x14db2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14db2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14db30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14db30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14db34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14db34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14db38: 0x3e00008  jr          $ra
    ctx->pc = 0x14DB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB38u;
            // 0x14db3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DB40u;
}
