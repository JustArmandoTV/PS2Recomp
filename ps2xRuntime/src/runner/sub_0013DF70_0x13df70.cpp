#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DF70
// Address: 0x13df70 - 0x13e150
void sub_0013DF70_0x13df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DF70_0x13df70");
#endif

    switch (ctx->pc) {
        case 0x13dffcu: goto label_13dffc;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e110u: goto label_13e110;
        case 0x13e120u: goto label_13e120;
        case 0x13e130u: goto label_13e130;
        case 0x13e140u: goto label_13e140;
        default: break;
    }

    ctx->pc = 0x13df70u;

    // 0x13df70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13df74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13df74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13df7c: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
    // 0x13df80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13df84: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x13df84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13df88: 0x693824  and         $a3, $v1, $t1
    ctx->pc = 0x13df88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13df8c: 0x10e90009  beq         $a3, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DF8Cu;
    {
        const bool branch_taken_0x13df8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x13DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF8Cu;
            // 0x13df90: 0x8c880024  lw          $t0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df8c) {
            ctx->pc = 0x13DFB4u;
            goto label_13dfb4;
        }
    }
    ctx->pc = 0x13DF94u;
    // 0x13df94: 0x3c0901c0  lui         $t1, 0x1C0
    ctx->pc = 0x13df94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)448 << 16));
    // 0x13df98: 0x693824  and         $a3, $v1, $t1
    ctx->pc = 0x13df98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13df9c: 0x50e90006  beql        $a3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DF9Cu;
    {
        const bool branch_taken_0x13df9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x13df9c) {
            ctx->pc = 0x13DFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF9Cu;
            // 0x13dfa0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DFB8u;
            goto label_13dfb8;
        }
    }
    ctx->pc = 0x13DFA4u;
    // 0x13dfa4: 0x3c090e00  lui         $t1, 0xE00
    ctx->pc = 0x13dfa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3584 << 16));
    // 0x13dfa8: 0x693824  and         $a3, $v1, $t1
    ctx->pc = 0x13dfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13dfac: 0x54e90019  bnel        $a3, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13DFACu;
    {
        const bool branch_taken_0x13dfac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x13dfac) {
            ctx->pc = 0x13DFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFACu;
            // 0x13dfb0: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E014u;
            goto label_13e014;
        }
    }
    ctx->pc = 0x13DFB4u;
label_13dfb4:
    // 0x13dfb4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13dfb8:
    // 0x13dfb8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13dfbc: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x13dfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x13dfc0: 0x50830060  beql        $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x13DFC0u;
    {
        const bool branch_taken_0x13dfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dfc0) {
            ctx->pc = 0x13DFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFC0u;
            // 0x13dfc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E144u;
            goto label_13e144;
        }
    }
    ctx->pc = 0x13DFC8u;
    // 0x13dfc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13dfcc: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13DFCCu;
    {
        const bool branch_taken_0x13dfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dfcc) {
            ctx->pc = 0x13DFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFCCu;
            // 0x13dfd0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E004u;
            goto label_13e004;
        }
    }
    ctx->pc = 0x13DFD4u;
    // 0x13dfd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13dfd8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DFD8u;
    {
        const bool branch_taken_0x13dfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dfd8) {
            ctx->pc = 0x13DFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFD8u;
            // 0x13dfdc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DFF4u;
            goto label_13dff4;
        }
    }
    ctx->pc = 0x13DFE0u;
    // 0x13dfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dfe4: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x13DFE4u;
    {
        const bool branch_taken_0x13dfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dfe4) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13DFECu;
    // 0x13dfec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x13DFECu;
    {
        const bool branch_taken_0x13dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dfec) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13DFF4u;
label_13dff4:
    // 0x13dff4: 0xc04d894  jal         func_136250
    ctx->pc = 0x13DFF4u;
    SET_GPR_U32(ctx, 31, 0x13DFFCu);
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFFCu; }
        if (ctx->pc != 0x13DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFFCu; }
        if (ctx->pc != 0x13DFFCu) { return; }
    }
    ctx->pc = 0x13DFFCu;
label_13dffc:
    // 0x13dffc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x13DFFCu;
    {
        const bool branch_taken_0x13dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dffc) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E004u;
label_13e004:
    // 0x13e004: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x13E004u;
    SET_GPR_U32(ctx, 31, 0x13E00Cu);
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E00Cu; }
        if (ctx->pc != 0x13E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E00Cu; }
        if (ctx->pc != 0x13E00Cu) { return; }
    }
    ctx->pc = 0x13E00Cu;
label_13e00c:
    // 0x13e00c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x13E00Cu;
    {
        const bool branch_taken_0x13e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e00c) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E014u;
label_13e014:
    // 0x13e014: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e018: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E018u;
    {
        const bool branch_taken_0x13e018 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E018u;
            // 0x13e01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e018) {
            ctx->pc = 0x13E040u;
            goto label_13e040;
        }
    }
    ctx->pc = 0x13E020u;
    // 0x13e020: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x13e020u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x13e024: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e024u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e028: 0x55200022  bnel        $t1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x13E028u;
    {
        const bool branch_taken_0x13e028 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e028) {
            ctx->pc = 0x13E02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E028u;
            // 0x13e02c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E030u;
    // 0x13e030: 0x3c090200  lui         $t1, 0x200
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)512 << 16));
    // 0x13e034: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e034u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e038: 0x51200004  beql        $t1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E038u;
    {
        const bool branch_taken_0x13e038 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e038) {
            ctx->pc = 0x13E03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E038u;
            // 0x13e03c: 0x3c090008  lui         $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E04Cu;
            goto label_13e04c;
        }
    }
    ctx->pc = 0x13E040u;
label_13e040:
    // 0x13e040: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13e040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e044: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13E044u;
    {
        const bool branch_taken_0x13e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e044) {
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E04Cu;
label_13e04c:
    // 0x13e04c: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e04cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e050: 0x55200018  bnel        $t1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x13E050u;
    {
        const bool branch_taken_0x13e050 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e050) {
            ctx->pc = 0x13E054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E050u;
            // 0x13e054: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E058u;
    // 0x13e058: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x13e058u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x13e05c: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e05cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e060: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E060u;
    {
        const bool branch_taken_0x13e060 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e060) {
            ctx->pc = 0x13E078u;
            goto label_13e078;
        }
    }
    ctx->pc = 0x13E068u;
    // 0x13e068: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x13e068u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x13e06c: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e06cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e070: 0x51200004  beql        $t1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E070u;
    {
        const bool branch_taken_0x13e070 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e070) {
            ctx->pc = 0x13E074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E070u;
            // 0x13e074: 0x3c090010  lui         $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E084u;
            goto label_13e084;
        }
    }
    ctx->pc = 0x13E078u;
label_13e078:
    // 0x13e078: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13e07c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13E07Cu;
    {
        const bool branch_taken_0x13e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e07c) {
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E084u;
label_13e084:
    // 0x13e084: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e088: 0x5520000a  bnel        $t1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13E088u;
    {
        const bool branch_taken_0x13e088 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e088) {
            ctx->pc = 0x13E08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E088u;
            // 0x13e08c: 0x24c70008  addiu       $a3, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E090u;
    // 0x13e090: 0x3c090100  lui         $t1, 0x100
    ctx->pc = 0x13e090u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)256 << 16));
    // 0x13e094: 0x694824  and         $t1, $v1, $t1
    ctx->pc = 0x13e094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e098: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E098u;
    {
        const bool branch_taken_0x13e098 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e098) {
            ctx->pc = 0x13E0B0u;
            goto label_13e0b0;
        }
    }
    ctx->pc = 0x13E0A0u;
    // 0x13e0a0: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x13e0a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
    // 0x13e0a4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13e0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13e0a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E0A8u;
    {
        const bool branch_taken_0x13e0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0a8) {
            ctx->pc = 0x13E0B4u;
            goto label_13e0b4;
        }
    }
    ctx->pc = 0x13E0B0u;
label_13e0b0:
    // 0x13e0b0: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_13e0b4:
    // 0x13e0b4: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x13E0B4u;
    {
        const bool branch_taken_0x13e0b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0b4) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E0BCu;
    // 0x13e0bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13e0c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13e0c4: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x13e0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x13e0c8: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13E0C8u;
    {
        const bool branch_taken_0x13e0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e0c8) {
            ctx->pc = 0x13E0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0C8u;
            // 0x13e0cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E138u;
            goto label_13e138;
        }
    }
    ctx->pc = 0x13E0D0u;
    // 0x13e0d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e0d4: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13E0D4u;
    {
        const bool branch_taken_0x13e0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e0d4) {
            ctx->pc = 0x13E0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0D4u;
            // 0x13e0d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E128u;
            goto label_13e128;
        }
    }
    ctx->pc = 0x13E0DCu;
    // 0x13e0dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e0e0: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13E0E0u;
    {
        const bool branch_taken_0x13e0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e0e0) {
            ctx->pc = 0x13E0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0E0u;
            // 0x13e0e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E118u;
            goto label_13e118;
        }
    }
    ctx->pc = 0x13E0E8u;
    // 0x13e0e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e0ec: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E0ECu;
    {
        const bool branch_taken_0x13e0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e0ec) {
            ctx->pc = 0x13E0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0ECu;
            // 0x13e0f0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E108u;
            goto label_13e108;
        }
    }
    ctx->pc = 0x13E0F4u;
    // 0x13e0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e0f8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E0F8u;
    {
        const bool branch_taken_0x13e0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e0f8) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E100u;
    // 0x13e100: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E100u;
    {
        const bool branch_taken_0x13e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e100) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E108u;
label_13e108:
    // 0x13e108: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x13E108u;
    SET_GPR_U32(ctx, 31, 0x13E110u);
    ctx->pc = 0x13E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E108u;
            // 0x13e10c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E110u; }
        if (ctx->pc != 0x13E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E110u; }
        if (ctx->pc != 0x13E110u) { return; }
    }
    ctx->pc = 0x13E110u;
label_13e110:
    // 0x13e110: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13E110u;
    {
        const bool branch_taken_0x13e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e110) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E118u;
label_13e118:
    // 0x13e118: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x13E118u;
    SET_GPR_U32(ctx, 31, 0x13E120u);
    ctx->pc = 0x13E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E118u;
            // 0x13e11c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E120u; }
        if (ctx->pc != 0x13E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E120u; }
        if (ctx->pc != 0x13E120u) { return; }
    }
    ctx->pc = 0x13E120u;
label_13e120:
    // 0x13e120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13E120u;
    {
        const bool branch_taken_0x13e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e120) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E128u;
label_13e128:
    // 0x13e128: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13E128u;
    SET_GPR_U32(ctx, 31, 0x13E130u);
    ctx->pc = 0x13E12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E128u;
            // 0x13e12c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E130u; }
        if (ctx->pc != 0x13E130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E130u; }
        if (ctx->pc != 0x13E130u) { return; }
    }
    ctx->pc = 0x13E130u;
label_13e130:
    // 0x13e130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E130u;
    {
        const bool branch_taken_0x13e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e130) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E138u;
label_13e138:
    // 0x13e138: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x13E138u;
    SET_GPR_U32(ctx, 31, 0x13E140u);
    ctx->pc = 0x13E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E138u;
            // 0x13e13c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E140u; }
        if (ctx->pc != 0x13E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E140u; }
        if (ctx->pc != 0x13E140u) { return; }
    }
    ctx->pc = 0x13E140u;
label_13e140:
    // 0x13e140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e144:
    // 0x13e144: 0x3e00008  jr          $ra
    ctx->pc = 0x13E144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E144u;
            // 0x13e148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E14Cu;
    // 0x13e14c: 0x0  nop
    ctx->pc = 0x13e14cu;
    // NOP
}
