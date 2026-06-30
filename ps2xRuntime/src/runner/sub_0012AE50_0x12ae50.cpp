#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012AE50
// Address: 0x12ae50 - 0x12b410
void sub_0012AE50_0x12ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AE50_0x12ae50");
#endif

    switch (ctx->pc) {
        case 0x12aec8u: goto label_12aec8;
        case 0x12aef0u: goto label_12aef0;
        case 0x12af2cu: goto label_12af2c;
        case 0x12af78u: goto label_12af78;
        case 0x12af7cu: goto label_12af7c;
        case 0x12afacu: goto label_12afac;
        case 0x12afb0u: goto label_12afb0;
        case 0x12b0a8u: goto label_12b0a8;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0e0u: goto label_12b0e0;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b100u: goto label_12b100;
        case 0x12b134u: goto label_12b134;
        case 0x12b1c8u: goto label_12b1c8;
        case 0x12b208u: goto label_12b208;
        case 0x12b210u: goto label_12b210;
        case 0x12b240u: goto label_12b240;
        case 0x12b254u: goto label_12b254;
        case 0x12b264u: goto label_12b264;
        case 0x12b338u: goto label_12b338;
        case 0x12b340u: goto label_12b340;
        case 0x12b354u: goto label_12b354;
        default: break;
    }

    ctx->pc = 0x12ae50u;

    // 0x12ae50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12ae54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12ae58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12ae5c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12ae60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12ae60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12ae68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x12ae68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12ae70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12ae74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12ae78: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12ae7c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12ae80: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12ae84: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x12AE84u;
    {
        const bool branch_taken_0x12ae84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE84u;
            // 0x12ae88: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae84) {
            ctx->pc = 0x12AEC0u;
            goto label_12aec0;
        }
    }
    ctx->pc = 0x12AE8Cu;
    // 0x12ae8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12ae8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ae90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12ae90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12ae94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ae98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ae9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12ae9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12aea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12aea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12aea8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12aea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12aeac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aeb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12aeb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12aeb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12aeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12aeb8: 0x804a2e4  j           func_128B90
    ctx->pc = 0x12AEB8u;
    ctx->pc = 0x12AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEB8u;
            // 0x12aebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00128B90_0x128b90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12AEC0u;
label_12aec0:
    // 0x12aec0: 0xc04a714  jal         func_129C50
    ctx->pc = 0x12AEC0u;
    SET_GPR_U32(ctx, 31, 0x12AEC8u);
    ctx->pc = 0x12AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEC0u;
            // 0x12aec4: 0x2690fff8  addiu       $s0, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C50u;
    if (runtime->hasFunction(0x129C50u)) {
        auto targetFn = runtime->lookupFunction(0x129C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEC8u; }
        if (ctx->pc != 0x12AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C50_0x129c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEC8u; }
        if (ctx->pc != 0x12AEC8u) { return; }
    }
    ctx->pc = 0x12AEC8u;
label_12aec8:
    // 0x12aec8: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12aecc: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x12aeccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12aed0: 0x26ac0013  addiu       $t4, $s5, 0x13
    ctx->pc = 0x12aed0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
    // 0x12aed4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12aed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aed8: 0x1af9824  and         $s3, $t5, $t7
    ctx->pc = 0x12aed8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12aedc: 0x2d8e001f  sltiu       $t6, $t4, 0x1F
    ctx->pc = 0x12aedcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x12aee0: 0x15c0013d  bnez        $t6, . + 4 + (0x13D << 2)
    ctx->pc = 0x12AEE0u;
    {
        const bool branch_taken_0x12aee0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEE0u;
            // 0x12aee4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aee0) {
            ctx->pc = 0x12B3D8u;
            goto label_12b3d8;
        }
    }
    ctx->pc = 0x12AEE8u;
    // 0x12aee8: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12aeec: 0x18fb024  and         $s6, $t4, $t7
    ctx->pc = 0x12aeecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
label_12aef0:
    // 0x12aef0: 0x236782b  sltu        $t7, $s1, $s6
    ctx->pc = 0x12aef0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12aef4: 0x11e000e9  beqz        $t7, . + 4 + (0xE9 << 2)
    ctx->pc = 0x12AEF4u;
    {
        const bool branch_taken_0x12aef4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEF4u;
            // 0x12aef8: 0x3c0f005d  lui         $t7, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aef4) {
            ctx->pc = 0x12B29Cu;
            goto label_12b29c;
        }
    }
    ctx->pc = 0x12AEFCu;
    // 0x12aefc: 0x2515821  addu        $t3, $s2, $s1
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x12af00: 0x25e91ae8  addiu       $t1, $t7, 0x1AE8
    ctx->pc = 0x12af00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 6888));
    // 0x12af04: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x12af08: 0x116a0131  beq         $t3, $t2, . + 4 + (0x131 << 2)
    ctx->pc = 0x12AF08u;
    {
        const bool branch_taken_0x12af08 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x12AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF08u;
            // 0x12af0c: 0x240ffffe  addiu       $t7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af08) {
            ctx->pc = 0x12B3D0u;
            goto label_12b3d0;
        }
    }
    ctx->pc = 0x12AF10u;
    // 0x12af10: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x12af10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12af14: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x12af14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x12af18: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x12af18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x12af1c: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x12af1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x12af20: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x12af20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12af24: 0x55c00128  bnel        $t6, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x12AF24u;
    {
        const bool branch_taken_0x12af24 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x12af24) {
            ctx->pc = 0x12AF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF24u;
            // 0x12af28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12AF2Cu;
label_12af2c:
    // 0x12af2c: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x12af2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12af30: 0x156a011a  bne         $t3, $t2, . + 4 + (0x11A << 2)
    ctx->pc = 0x12AF30u;
    {
        const bool branch_taken_0x12af30 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        ctx->pc = 0x12AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF30u;
            // 0x12af34: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af30) {
            ctx->pc = 0x12B39Cu;
            goto label_12b39c;
        }
    }
    ctx->pc = 0x12AF38u;
    // 0x12af38: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x12af38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x12af3c: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x12af40: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x12af40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12af44: 0x55e0001a  bnel        $t7, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12AF44u;
    {
        const bool branch_taken_0x12af44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12af44) {
            ctx->pc = 0x12AF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF44u;
            // 0x12af48: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AFB0u;
            goto label_12afb0;
        }
    }
    ctx->pc = 0x12AF4Cu;
    // 0x12af4c: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x12af4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x12af50: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af54: 0x2567021  addu        $t6, $s2, $s6
    ctx->pc = 0x12af54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x12af58: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12af58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x12af5c: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x12af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x12af60: 0xad2e0008  sw          $t6, 0x8($t1)
    ctx->pc = 0x12af60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 14));
    // 0x12af64: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x12af64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12af68: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12af68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12af6c: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x12af6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x12af70: 0xc04a72a  jal         func_129CA8
    ctx->pc = 0x12AF70u;
    SET_GPR_U32(ctx, 31, 0x12AF78u);
    ctx->pc = 0x12AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF70u;
            // 0x12af74: 0xae4f0004  sw          $t7, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129CA8u;
    if (runtime->hasFunction(0x129CA8u)) {
        auto targetFn = runtime->lookupFunction(0x129CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF78u; }
        if (ctx->pc != 0x12AF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129CA8_0x129ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF78u; }
        if (ctx->pc != 0x12AF78u) { return; }
    }
    ctx->pc = 0x12AF78u;
label_12af78:
    // 0x12af78: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x12af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_12af7c:
    // 0x12af7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12af7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12af84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12af84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12af88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12af88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af8c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12af8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12af90: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12af90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12af94: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12af94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12af98: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12af98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12af9c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12af9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12afa0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12afa4: 0x3e00008  jr          $ra
    ctx->pc = 0x12AFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFA4u;
            // 0x12afa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AFACu;
label_12afac:
    // 0x12afac: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x12afacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12afb0:
    // 0x12afb0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12afb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12afb4: 0x15e000a5  bnez        $t7, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12AFB4u;
    {
        const bool branch_taken_0x12afb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFB4u;
            // 0x12afb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afb4) {
            ctx->pc = 0x12B24Cu;
            goto label_12b24c;
        }
    }
    ctx->pc = 0x12AFBCu;
    // 0x12afbc: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12afc0: 0x24fb823  subu        $s7, $s2, $t7
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x12afc4: 0x8eee0004  lw          $t6, 0x4($s7)
    ctx->pc = 0x12afc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x12afc8: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x12afc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12afcc: 0x1160004c  beqz        $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x12AFCCu;
    {
        const bool branch_taken_0x12afcc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFCCu;
            // 0x12afd0: 0x1cf6824  and         $t5, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afcc) {
            ctx->pc = 0x12B100u;
            goto label_12b100;
        }
    }
    ctx->pc = 0x12AFD4u;
    // 0x12afd4: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12afd8: 0x8dee1af0  lw          $t6, 0x1AF0($t7)
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6896)));
    // 0x12afdc: 0x156e00df  bne         $t3, $t6, . + 4 + (0xDF << 2)
    ctx->pc = 0x12AFDCu;
    {
        const bool branch_taken_0x12afdc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 14));
        ctx->pc = 0x12AFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFDCu;
            // 0x12afe0: 0x18d7821  addu        $t7, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afdc) {
            ctx->pc = 0x12B35Cu;
            goto label_12b35c;
        }
    }
    ctx->pc = 0x12AFE4u;
    // 0x12afe4: 0x18d7021  addu        $t6, $t4, $t5
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x12afe8: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x12afec: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x12afecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x12aff0: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x12aff0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12aff4: 0x15e00042  bnez        $t7, . + 4 + (0x42 << 2)
    ctx->pc = 0x12AFF4u;
    {
        const bool branch_taken_0x12aff4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFF4u;
            // 0x12aff8: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aff4) {
            ctx->pc = 0x12B100u;
            goto label_12b100;
        }
    }
    ctx->pc = 0x12AFFCu;
    // 0x12affc: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x12affcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x12b000: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x12b000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12b004: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x12b004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x12b008: 0x26f30008  addiu       $s3, $s7, 0x8
    ctx->pc = 0x12b008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x12b00c: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12b00cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x12b010: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x12b010u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12b014: 0x11e00034  beqz        $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x12B014u;
    {
        const bool branch_taken_0x12b014 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B014u;
            // 0x12b018: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b014) {
            ctx->pc = 0x12B0E8u;
            goto label_12b0e8;
        }
    }
    ctx->pc = 0x12B01Cu;
    // 0x12b01c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x12b01cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b020: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x12b020u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x12b024: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B024u;
    {
        const bool branch_taken_0x12b024 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B024u;
            // 0x12b028: 0x260602d  daddu       $t4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b024) {
            ctx->pc = 0x12B084u;
            goto label_12b084;
        }
    }
    ctx->pc = 0x12B02Cu;
    // 0x12b02c: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b030: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x12b030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b034: 0x26ec0010  addiu       $t4, $s7, 0x10
    ctx->pc = 0x12b034u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x12b038: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x12b038u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x12b03c: 0xaeef0008  sw          $t7, 0x8($s7)
    ctx->pc = 0x12b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 15));
    // 0x12b040: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12b044: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x12B044u;
    {
        const bool branch_taken_0x12b044 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B044u;
            // 0x12b048: 0xaeee000c  sw          $t6, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b044) {
            ctx->pc = 0x12B084u;
            goto label_12b084;
        }
    }
    ctx->pc = 0x12B04Cu;
    // 0x12b04c: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x12b04cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b050: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x12b050u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x12b054: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x12b054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12b058: 0x26ec0018  addiu       $t4, $s7, 0x18
    ctx->pc = 0x12b058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x12b05c: 0xaeef0010  sw          $t7, 0x10($s7)
    ctx->pc = 0x12b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 15));
    // 0x12b060: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12b064: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B064u;
    {
        const bool branch_taken_0x12b064 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B064u;
            // 0x12b068: 0xaeee0014  sw          $t6, 0x14($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b064) {
            ctx->pc = 0x12B084u;
            goto label_12b084;
        }
    }
    ctx->pc = 0x12B06Cu;
    // 0x12b06c: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12b070: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x12b070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x12b074: 0x26ec0020  addiu       $t4, $s7, 0x20
    ctx->pc = 0x12b074u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x12b078: 0xaeee0018  sw          $t6, 0x18($s7)
    ctx->pc = 0x12b078u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 14));
    // 0x12b07c: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b080: 0xaeef001c  sw          $t7, 0x1C($s7)
    ctx->pc = 0x12b080u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 15));
label_12b084:
    // 0x12b084: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12b084u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b088: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x12b088u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x12b08c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12b08cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12b090: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b094: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12b094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12b098: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x12b098u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x12b09c: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x12b09cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12b0a0: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x12b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x12b0a4: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12b0a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12b0a8:
    // 0x12b0a8: 0x2f66821  addu        $t5, $s7, $s6
    ctx->pc = 0x12b0a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x12b0ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12b0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0b0: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x12b0b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x12b0b4: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12b0b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x12b0b8: 0x3c0e005d  lui         $t6, 0x5D
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)93 << 16));
    // 0x12b0bc: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x12b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x12b0c0: 0xadcd1af0  sw          $t5, 0x1AF0($t6)
    ctx->pc = 0x12b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 6896), GPR_U32(ctx, 13));
    // 0x12b0c4: 0x8eef0004  lw          $t7, 0x4($s7)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x12b0c8: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12b0cc: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x12b0d0: 0xaeef0004  sw          $t7, 0x4($s7)
    ctx->pc = 0x12b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 15));
    // 0x12b0d4: 0x0  nop
    ctx->pc = 0x12b0d4u;
    // NOP
label_12b0d8:
    // 0x12b0d8: 0xc04a72a  jal         func_129CA8
    ctx->pc = 0x12B0D8u;
    SET_GPR_U32(ctx, 31, 0x12B0E0u);
    ctx->pc = 0x129CA8u;
    if (runtime->hasFunction(0x129CA8u)) {
        auto targetFn = runtime->lookupFunction(0x129CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0E0u; }
        if (ctx->pc != 0x12B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129CA8_0x129ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0E0u; }
        if (ctx->pc != 0x12B0E0u) { return; }
    }
    ctx->pc = 0x12B0E0u;
label_12b0e0:
    // 0x12b0e0: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x12B0E0u;
    {
        const bool branch_taken_0x12b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0E0u;
            // 0x12b0e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0e0) {
            ctx->pc = 0x12AF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12af7c;
        }
    }
    ctx->pc = 0x12B0E8u;
label_12b0e8:
    // 0x12b0e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12b0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x12B0ECu;
    SET_GPR_U32(ctx, 31, 0x12B0F4u);
    ctx->pc = 0x12B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0ECu;
            // 0x12b0f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0F4u; }
        if (ctx->pc != 0x12B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0F4u; }
        if (ctx->pc != 0x12B0F4u) { return; }
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12B0F4u;
    {
        const bool branch_taken_0x12b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0F4u;
            // 0x12b0f8: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0f4) {
            ctx->pc = 0x12B0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0a8;
        }
    }
    ctx->pc = 0x12B0FCu;
    // 0x12b0fc: 0x0  nop
    ctx->pc = 0x12b0fcu;
    // NOP
label_12b100:
    // 0x12b100: 0x12e00051  beqz        $s7, . + 4 + (0x51 << 2)
    ctx->pc = 0x12B100u;
    {
        const bool branch_taken_0x12b100 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B100u;
            // 0x12b104: 0x1b17021  addu        $t6, $t5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b100) {
            ctx->pc = 0x12B248u;
            goto label_12b248;
        }
    }
    ctx->pc = 0x12B108u;
    // 0x12b108: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x12b108u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12b10c: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
    ctx->pc = 0x12B10Cu;
    {
        const bool branch_taken_0x12b10c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B10Cu;
            // 0x12b110: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b10c) {
            ctx->pc = 0x12B24Cu;
            goto label_12b24c;
        }
    }
    ctx->pc = 0x12B114u;
    // 0x12b114: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x12b114u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x12b118: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x12b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x12b11c: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x12b120: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x12b120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b124: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x12b124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b128: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x12b12c: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x12b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12b130: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12b130u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_12b134:
    // 0x12b134: 0x11e0003f  beqz        $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x12B134u;
    {
        const bool branch_taken_0x12b134 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B134u;
            // 0x12b138: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b134) {
            ctx->pc = 0x12B234u;
            goto label_12b234;
        }
    }
    ctx->pc = 0x12B13Cu;
    // 0x12b13c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x12b13cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b140: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x12b140u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x12b144: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B144u;
    {
        const bool branch_taken_0x12b144 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B144u;
            // 0x12b148: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b144) {
            ctx->pc = 0x12B1A4u;
            goto label_12b1a4;
        }
    }
    ctx->pc = 0x12B14Cu;
    // 0x12b14c: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x12b14cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b150: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b154: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x12b154u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b158: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x12b158u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x12b15c: 0xae0f0008  sw          $t7, 0x8($s0)
    ctx->pc = 0x12b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 15));
    // 0x12b160: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x12b160u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12b164: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x12B164u;
    {
        const bool branch_taken_0x12b164 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B164u;
            // 0x12b168: 0xae0e000c  sw          $t6, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b164) {
            ctx->pc = 0x12B1A4u;
            goto label_12b1a4;
        }
    }
    ctx->pc = 0x12B16Cu;
    // 0x12b16c: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b170: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x12b170u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x12b174: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12b178: 0x260c0018  addiu       $t4, $s0, 0x18
    ctx->pc = 0x12b178u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x12b17c: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x12b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x12b180: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x12b180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12b184: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B184u;
    {
        const bool branch_taken_0x12b184 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B184u;
            // 0x12b188: 0xae0e0014  sw          $t6, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b184) {
            ctx->pc = 0x12B1A4u;
            goto label_12b1a4;
        }
    }
    ctx->pc = 0x12B18Cu;
    // 0x12b18c: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x12b18cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12b190: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x12b194: 0x260c0020  addiu       $t4, $s0, 0x20
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x12b198: 0xae0e0018  sw          $t6, 0x18($s0)
    ctx->pc = 0x12b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 14));
    // 0x12b19c: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b1a0: 0xae0f001c  sw          $t7, 0x1C($s0)
    ctx->pc = 0x12b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 15));
label_12b1a4:
    // 0x12b1a4: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12b1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b1a8: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x12b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x12b1ac: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12b1acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12b1b0: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x12b1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b1b4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12b1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12b1b8: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x12b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x12b1bc: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12b1c0: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x12b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x12b1c4: 0x8eed0004  lw          $t5, 0x4($s7)
    ctx->pc = 0x12b1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_12b1c8:
    // 0x12b1c8: 0x2765823  subu        $t3, $s3, $s6
    ctx->pc = 0x12b1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x12b1cc: 0x2d6f0010  sltiu       $t7, $t3, 0x10
    ctx->pc = 0x12b1ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12b1d0: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x12B1D0u;
    {
        const bool branch_taken_0x12b1d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1D0u;
            // 0x12b1d4: 0x31af0001  andi        $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1d0) {
            ctx->pc = 0x12B218u;
            goto label_12b218;
        }
    }
    ctx->pc = 0x12B1D8u;
    // 0x12b1d8: 0x2167021  addu        $t6, $s0, $s6
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x12b1dc: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x12b1e0: 0x356c0001  ori         $t4, $t3, 0x1
    ctx->pc = 0x12b1e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x12b1e4: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x12b1e8: 0x1cb6821  addu        $t5, $t6, $t3
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x12b1ec: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x12b1f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1f4: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x12b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x12b1f8: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x12b1f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x12b1fc: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x12b1fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x12b200: 0xc049ee4  jal         func_127B90
    ctx->pc = 0x12B200u;
    SET_GPR_U32(ctx, 31, 0x12B208u);
    ctx->pc = 0x12B204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B200u;
            // 0x12b204: 0xadaf0004  sw          $t7, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B208u; }
        if (ctx->pc != 0x12B208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B208u; }
        if (ctx->pc != 0x12B208u) { return; }
    }
    ctx->pc = 0x12B208u;
label_12b208:
    // 0x12b208: 0xc04a72a  jal         func_129CA8
    ctx->pc = 0x12B208u;
    SET_GPR_U32(ctx, 31, 0x12B210u);
    ctx->pc = 0x12B20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B208u;
            // 0x12b20c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129CA8u;
    if (runtime->hasFunction(0x129CA8u)) {
        auto targetFn = runtime->lookupFunction(0x129CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B210u; }
        if (ctx->pc != 0x12B210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129CA8_0x129ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B210u; }
        if (ctx->pc != 0x12B210u) { return; }
    }
    ctx->pc = 0x12B210u;
label_12b210:
    // 0x12b210: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x12B210u;
    {
        const bool branch_taken_0x12b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B210u;
            // 0x12b214: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b210) {
            ctx->pc = 0x12AF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12af7c;
        }
    }
    ctx->pc = 0x12B218u;
label_12b218:
    // 0x12b218: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x12b21c: 0x2136821  addu        $t5, $s0, $s3
    ctx->pc = 0x12b21cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x12b220: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x12b224: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x12b224u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x12b228: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x12b228u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
    // 0x12b22c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12B22Cu;
    {
        const bool branch_taken_0x12b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B22Cu;
            // 0x12b230: 0xadae0004  sw          $t6, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b22c) {
            ctx->pc = 0x12B208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b208;
        }
    }
    ctx->pc = 0x12B234u;
label_12b234:
    // 0x12b234: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12b234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b238: 0xc04a508  jal         func_129420
    ctx->pc = 0x12B238u;
    SET_GPR_U32(ctx, 31, 0x12B240u);
    ctx->pc = 0x12B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B238u;
            // 0x12b23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B240u; }
        if (ctx->pc != 0x12B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B240u; }
        if (ctx->pc != 0x12B240u) { return; }
    }
    ctx->pc = 0x12B240u;
label_12b240:
    // 0x12b240: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x12B240u;
    {
        const bool branch_taken_0x12b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B240u;
            // 0x12b244: 0x8e0d0004  lw          $t5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b240) {
            ctx->pc = 0x12B1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b1c8;
        }
    }
    ctx->pc = 0x12B248u;
label_12b248:
    // 0x12b248: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12b24c:
    // 0x12b24c: 0xc04a2e4  jal         func_128B90
    ctx->pc = 0x12B24Cu;
    SET_GPR_U32(ctx, 31, 0x12B254u);
    ctx->pc = 0x12B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B24Cu;
            // 0x12b250: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B254u; }
        if (ctx->pc != 0x12B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B254u; }
        if (ctx->pc != 0x12B254u) { return; }
    }
    ctx->pc = 0x12B254u;
label_12b254:
    // 0x12b254: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B254u;
    {
        const bool branch_taken_0x12b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B254u;
            // 0x12b258: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b254) {
            ctx->pc = 0x12B26Cu;
            goto label_12b26c;
        }
    }
    ctx->pc = 0x12B25Cu;
    // 0x12b25c: 0xc04a72a  jal         func_129CA8
    ctx->pc = 0x12B25Cu;
    SET_GPR_U32(ctx, 31, 0x12B264u);
    ctx->pc = 0x12B260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B25Cu;
            // 0x12b260: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129CA8u;
    if (runtime->hasFunction(0x129CA8u)) {
        auto targetFn = runtime->lookupFunction(0x129CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B264u; }
        if (ctx->pc != 0x12B264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129CA8_0x129ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B264u; }
        if (ctx->pc != 0x12B264u) { return; }
    }
    ctx->pc = 0x12B264u;
label_12b264:
    // 0x12b264: 0x1000ff45  b           . + 4 + (-0xBB << 2)
    ctx->pc = 0x12B264u;
    {
        const bool branch_taken_0x12b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B264u;
            // 0x12b268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b264) {
            ctx->pc = 0x12AF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12af7c;
        }
    }
    ctx->pc = 0x12B26Cu;
label_12b26c:
    // 0x12b26c: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x12b26cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12b270: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12b270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12b274: 0x2450fff8  addiu       $s0, $v0, -0x8
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x12b278: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x12b278u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12b27c: 0x24f7821  addu        $t7, $s2, $t7
    ctx->pc = 0x12b27cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x12b280: 0x160f0008  bne         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B280u;
    {
        const bool branch_taken_0x12b280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B280u;
            // 0x12b284: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b280) {
            ctx->pc = 0x12B2A4u;
            goto label_12b2a4;
        }
    }
    ctx->pc = 0x12B288u;
    // 0x12b288: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12b28c: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x12b28cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12b290: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x12b290u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12b294: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12b294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b298: 0x22e9821  addu        $s3, $s1, $t6
    ctx->pc = 0x12b298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_12b29c:
    // 0x12b29c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12B29Cu;
    {
        const bool branch_taken_0x12b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B29Cu;
            // 0x12b2a0: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b29c) {
            ctx->pc = 0x12B1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b1c8;
        }
    }
    ctx->pc = 0x12B2A4u;
label_12b2a4:
    // 0x12b2a4: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12b2a4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x12b2a8: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x12B2A8u;
    {
        const bool branch_taken_0x12b2a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2A8u;
            // 0x12b2ac: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2a8) {
            ctx->pc = 0x12B348u;
            goto label_12b348;
        }
    }
    ctx->pc = 0x12B2B0u;
    // 0x12b2b0: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x12b2b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x12b2b4: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B2B4u;
    {
        const bool branch_taken_0x12b2b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2B4u;
            // 0x12b2b8: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2b4) {
            ctx->pc = 0x12B314u;
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B2BCu;
    // 0x12b2bc: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b2c0: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12b2c4: 0x244c0008  addiu       $t4, $v0, 0x8
    ctx->pc = 0x12b2c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12b2c8: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x12b2cc: 0xac4f0000  sw          $t7, 0x0($v0)
    ctx->pc = 0x12b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x12b2d0: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x12b2d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12b2d4: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x12B2D4u;
    {
        const bool branch_taken_0x12b2d4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2D4u;
            // 0x12b2d8: 0xac4e0004  sw          $t6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2d4) {
            ctx->pc = 0x12B314u;
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B2DCu;
    // 0x12b2dc: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x12b2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b2e0: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x12b2e0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x12b2e4: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x12b2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12b2e8: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x12b2e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12b2ec: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x12b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x12b2f0: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x12b2f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12b2f4: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B2F4u;
    {
        const bool branch_taken_0x12b2f4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2F4u;
            // 0x12b2f8: 0xac4e000c  sw          $t6, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2f4) {
            ctx->pc = 0x12B314u;
            goto label_12b314;
        }
    }
    ctx->pc = 0x12B2FCu;
    // 0x12b2fc: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x12b300: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x12b300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x12b304: 0x244c0018  addiu       $t4, $v0, 0x18
    ctx->pc = 0x12b304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x12b308: 0xac4e0010  sw          $t6, 0x10($v0)
    ctx->pc = 0x12b308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 14));
    // 0x12b30c: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x12b30cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b310: 0xac4f0014  sw          $t7, 0x14($v0)
    ctx->pc = 0x12b310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 15));
label_12b314:
    // 0x12b314: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b318: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x12b318u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x12b31c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12b320: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x12b320u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12b324: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x12b328: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x12b328u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x12b32c: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x12b32cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12b330: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x12b330u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x12b334: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12b334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12b338:
    // 0x12b338: 0xc049ee4  jal         func_127B90
    ctx->pc = 0x12B338u;
    SET_GPR_U32(ctx, 31, 0x12B340u);
    ctx->pc = 0x12B33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B338u;
            // 0x12b33c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B340u; }
        if (ctx->pc != 0x12B340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B340u; }
        if (ctx->pc != 0x12B340u) { return; }
    }
    ctx->pc = 0x12B340u;
label_12b340:
    // 0x12b340: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x12B340u;
    {
        const bool branch_taken_0x12b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B340u;
            // 0x12b344: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b340) {
            ctx->pc = 0x12B0D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0d8;
        }
    }
    ctx->pc = 0x12B348u;
label_12b348:
    // 0x12b348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b34c: 0xc04a508  jal         func_129420
    ctx->pc = 0x12B34Cu;
    SET_GPR_U32(ctx, 31, 0x12B354u);
    ctx->pc = 0x12B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B34Cu;
            // 0x12b350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B354u; }
        if (ctx->pc != 0x12B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B354u; }
        if (ctx->pc != 0x12B354u) { return; }
    }
    ctx->pc = 0x12B354u;
label_12b354:
    // 0x12b354: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12B354u;
    {
        const bool branch_taken_0x12b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B354u;
            // 0x12b358: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b354) {
            ctx->pc = 0x12B338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b338;
        }
    }
    ctx->pc = 0x12B35Cu;
label_12b35c:
    // 0x12b35c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x12b360: 0x1f6702b  sltu        $t6, $t7, $s6
    ctx->pc = 0x12b360u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12b364: 0x15c0ff66  bnez        $t6, . + 4 + (-0x9A << 2)
    ctx->pc = 0x12B364u;
    {
        const bool branch_taken_0x12b364 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B364u;
            // 0x12b368: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b364) {
            ctx->pc = 0x12B100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b100;
        }
    }
    ctx->pc = 0x12B36Cu;
    // 0x12b36c: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x12b36cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x12b370: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x12b370u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x12b374: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x12b374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b378: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x12b378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b37c: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x12b37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x12b380: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x12b380u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12b384: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x12b388: 0xad4c000c  sw          $t4, 0xC($t2)
    ctx->pc = 0x12b388u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
    // 0x12b38c: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x12b38cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x12b390: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x12b394: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x12B394u;
    {
        const bool branch_taken_0x12b394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B394u;
            // 0x12b398: 0xad8a0008  sw          $t2, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b394) {
            ctx->pc = 0x12B134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b134;
        }
    }
    ctx->pc = 0x12B39Cu;
label_12b39c:
    // 0x12b39c: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x12b39cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x12b3a0: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x12b3a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12b3a4: 0x55e0ff02  bnel        $t7, $zero, . + 4 + (-0xFE << 2)
    ctx->pc = 0x12B3A4u;
    {
        const bool branch_taken_0x12b3a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b3a4) {
            ctx->pc = 0x12B3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3A4u;
            // 0x12b3a8: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AFB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12afb0;
        }
    }
    ctx->pc = 0x12B3ACu;
    // 0x12b3ac: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x12b3acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x12b3b0: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x12b3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3b4: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x12b3b8: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x12b3bc: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x12b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x12b3c0: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x12B3C0u;
    {
        const bool branch_taken_0x12b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3C0u;
            // 0x12b3c4: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3c0) {
            ctx->pc = 0x12B1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b1c8;
        }
    }
    ctx->pc = 0x12B3C8u;
label_12b3c8:
    // 0x12b3c8: 0x1000fef8  b           . + 4 + (-0x108 << 2)
    ctx->pc = 0x12B3C8u;
    {
        const bool branch_taken_0x12b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3C8u;
            // 0x12b3cc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3c8) {
            ctx->pc = 0x12AFACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12afac;
        }
    }
    ctx->pc = 0x12B3D0u;
label_12b3d0:
    // 0x12b3d0: 0x1000fed6  b           . + 4 + (-0x12A << 2)
    ctx->pc = 0x12B3D0u;
    {
        const bool branch_taken_0x12b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3D0u;
            // 0x12b3d4: 0x8d6c0004  lw          $t4, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3d0) {
            ctx->pc = 0x12AF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12af2c;
        }
    }
    ctx->pc = 0x12B3D8u;
label_12b3d8:
    // 0x12b3d8: 0x1000fec5  b           . + 4 + (-0x13B << 2)
    ctx->pc = 0x12B3D8u;
    {
        const bool branch_taken_0x12b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3D8u;
            // 0x12b3dc: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3d8) {
            ctx->pc = 0x12AEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aef0;
        }
    }
    ctx->pc = 0x12B3E0u;
    // 0x12b3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b3e4: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x12b3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12b3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b3ec: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x12b3ecu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12b3f0: 0x31ce0009  andi        $t6, $t6, 0x9
    ctx->pc = 0x12b3f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)9);
    // 0x12b3f4: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B3F4u;
    {
        const bool branch_taken_0x12b3f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3F4u;
            // 0x12b3f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3f4) {
            ctx->pc = 0x12B404u;
            goto label_12b404;
        }
    }
    ctx->pc = 0x12B3FCu;
    // 0x12b3fc: 0x8049db4  j           func_1276D0
    ctx->pc = 0x12B3FCu;
    ctx->pc = 0x12B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3FCu;
            // 0x12b400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001276D0_0x1276d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b408: 0x3e00008  jr          $ra
    ctx->pc = 0x12B408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B408u;
            // 0x12b40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B410u;
}
