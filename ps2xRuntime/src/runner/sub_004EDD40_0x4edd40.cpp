#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EDD40
// Address: 0x4edd40 - 0x4ee000
void sub_004EDD40_0x4edd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDD40_0x4edd40");
#endif

    switch (ctx->pc) {
        case 0x4edd40u: goto label_4edd40;
        case 0x4edd44u: goto label_4edd44;
        case 0x4edd48u: goto label_4edd48;
        case 0x4edd4cu: goto label_4edd4c;
        case 0x4edd50u: goto label_4edd50;
        case 0x4edd54u: goto label_4edd54;
        case 0x4edd58u: goto label_4edd58;
        case 0x4edd5cu: goto label_4edd5c;
        case 0x4edd60u: goto label_4edd60;
        case 0x4edd64u: goto label_4edd64;
        case 0x4edd68u: goto label_4edd68;
        case 0x4edd6cu: goto label_4edd6c;
        case 0x4edd70u: goto label_4edd70;
        case 0x4edd74u: goto label_4edd74;
        case 0x4edd78u: goto label_4edd78;
        case 0x4edd7cu: goto label_4edd7c;
        case 0x4edd80u: goto label_4edd80;
        case 0x4edd84u: goto label_4edd84;
        case 0x4edd88u: goto label_4edd88;
        case 0x4edd8cu: goto label_4edd8c;
        case 0x4edd90u: goto label_4edd90;
        case 0x4edd94u: goto label_4edd94;
        case 0x4edd98u: goto label_4edd98;
        case 0x4edd9cu: goto label_4edd9c;
        case 0x4edda0u: goto label_4edda0;
        case 0x4edda4u: goto label_4edda4;
        case 0x4edda8u: goto label_4edda8;
        case 0x4eddacu: goto label_4eddac;
        case 0x4eddb0u: goto label_4eddb0;
        case 0x4eddb4u: goto label_4eddb4;
        case 0x4eddb8u: goto label_4eddb8;
        case 0x4eddbcu: goto label_4eddbc;
        case 0x4eddc0u: goto label_4eddc0;
        case 0x4eddc4u: goto label_4eddc4;
        case 0x4eddc8u: goto label_4eddc8;
        case 0x4eddccu: goto label_4eddcc;
        case 0x4eddd0u: goto label_4eddd0;
        case 0x4eddd4u: goto label_4eddd4;
        case 0x4eddd8u: goto label_4eddd8;
        case 0x4edddcu: goto label_4edddc;
        case 0x4edde0u: goto label_4edde0;
        case 0x4edde4u: goto label_4edde4;
        case 0x4edde8u: goto label_4edde8;
        case 0x4eddecu: goto label_4eddec;
        case 0x4eddf0u: goto label_4eddf0;
        case 0x4eddf4u: goto label_4eddf4;
        case 0x4eddf8u: goto label_4eddf8;
        case 0x4eddfcu: goto label_4eddfc;
        case 0x4ede00u: goto label_4ede00;
        case 0x4ede04u: goto label_4ede04;
        case 0x4ede08u: goto label_4ede08;
        case 0x4ede0cu: goto label_4ede0c;
        case 0x4ede10u: goto label_4ede10;
        case 0x4ede14u: goto label_4ede14;
        case 0x4ede18u: goto label_4ede18;
        case 0x4ede1cu: goto label_4ede1c;
        case 0x4ede20u: goto label_4ede20;
        case 0x4ede24u: goto label_4ede24;
        case 0x4ede28u: goto label_4ede28;
        case 0x4ede2cu: goto label_4ede2c;
        case 0x4ede30u: goto label_4ede30;
        case 0x4ede34u: goto label_4ede34;
        case 0x4ede38u: goto label_4ede38;
        case 0x4ede3cu: goto label_4ede3c;
        case 0x4ede40u: goto label_4ede40;
        case 0x4ede44u: goto label_4ede44;
        case 0x4ede48u: goto label_4ede48;
        case 0x4ede4cu: goto label_4ede4c;
        case 0x4ede50u: goto label_4ede50;
        case 0x4ede54u: goto label_4ede54;
        case 0x4ede58u: goto label_4ede58;
        case 0x4ede5cu: goto label_4ede5c;
        case 0x4ede60u: goto label_4ede60;
        case 0x4ede64u: goto label_4ede64;
        case 0x4ede68u: goto label_4ede68;
        case 0x4ede6cu: goto label_4ede6c;
        case 0x4ede70u: goto label_4ede70;
        case 0x4ede74u: goto label_4ede74;
        case 0x4ede78u: goto label_4ede78;
        case 0x4ede7cu: goto label_4ede7c;
        case 0x4ede80u: goto label_4ede80;
        case 0x4ede84u: goto label_4ede84;
        case 0x4ede88u: goto label_4ede88;
        case 0x4ede8cu: goto label_4ede8c;
        case 0x4ede90u: goto label_4ede90;
        case 0x4ede94u: goto label_4ede94;
        case 0x4ede98u: goto label_4ede98;
        case 0x4ede9cu: goto label_4ede9c;
        case 0x4edea0u: goto label_4edea0;
        case 0x4edea4u: goto label_4edea4;
        case 0x4edea8u: goto label_4edea8;
        case 0x4edeacu: goto label_4edeac;
        case 0x4edeb0u: goto label_4edeb0;
        case 0x4edeb4u: goto label_4edeb4;
        case 0x4edeb8u: goto label_4edeb8;
        case 0x4edebcu: goto label_4edebc;
        case 0x4edec0u: goto label_4edec0;
        case 0x4edec4u: goto label_4edec4;
        case 0x4edec8u: goto label_4edec8;
        case 0x4edeccu: goto label_4edecc;
        case 0x4eded0u: goto label_4eded0;
        case 0x4eded4u: goto label_4eded4;
        case 0x4eded8u: goto label_4eded8;
        case 0x4ededcu: goto label_4ededc;
        case 0x4edee0u: goto label_4edee0;
        case 0x4edee4u: goto label_4edee4;
        case 0x4edee8u: goto label_4edee8;
        case 0x4edeecu: goto label_4edeec;
        case 0x4edef0u: goto label_4edef0;
        case 0x4edef4u: goto label_4edef4;
        case 0x4edef8u: goto label_4edef8;
        case 0x4edefcu: goto label_4edefc;
        case 0x4edf00u: goto label_4edf00;
        case 0x4edf04u: goto label_4edf04;
        case 0x4edf08u: goto label_4edf08;
        case 0x4edf0cu: goto label_4edf0c;
        case 0x4edf10u: goto label_4edf10;
        case 0x4edf14u: goto label_4edf14;
        case 0x4edf18u: goto label_4edf18;
        case 0x4edf1cu: goto label_4edf1c;
        case 0x4edf20u: goto label_4edf20;
        case 0x4edf24u: goto label_4edf24;
        case 0x4edf28u: goto label_4edf28;
        case 0x4edf2cu: goto label_4edf2c;
        case 0x4edf30u: goto label_4edf30;
        case 0x4edf34u: goto label_4edf34;
        case 0x4edf38u: goto label_4edf38;
        case 0x4edf3cu: goto label_4edf3c;
        case 0x4edf40u: goto label_4edf40;
        case 0x4edf44u: goto label_4edf44;
        case 0x4edf48u: goto label_4edf48;
        case 0x4edf4cu: goto label_4edf4c;
        case 0x4edf50u: goto label_4edf50;
        case 0x4edf54u: goto label_4edf54;
        case 0x4edf58u: goto label_4edf58;
        case 0x4edf5cu: goto label_4edf5c;
        case 0x4edf60u: goto label_4edf60;
        case 0x4edf64u: goto label_4edf64;
        case 0x4edf68u: goto label_4edf68;
        case 0x4edf6cu: goto label_4edf6c;
        case 0x4edf70u: goto label_4edf70;
        case 0x4edf74u: goto label_4edf74;
        case 0x4edf78u: goto label_4edf78;
        case 0x4edf7cu: goto label_4edf7c;
        case 0x4edf80u: goto label_4edf80;
        case 0x4edf84u: goto label_4edf84;
        case 0x4edf88u: goto label_4edf88;
        case 0x4edf8cu: goto label_4edf8c;
        case 0x4edf90u: goto label_4edf90;
        case 0x4edf94u: goto label_4edf94;
        case 0x4edf98u: goto label_4edf98;
        case 0x4edf9cu: goto label_4edf9c;
        case 0x4edfa0u: goto label_4edfa0;
        case 0x4edfa4u: goto label_4edfa4;
        case 0x4edfa8u: goto label_4edfa8;
        case 0x4edfacu: goto label_4edfac;
        case 0x4edfb0u: goto label_4edfb0;
        case 0x4edfb4u: goto label_4edfb4;
        case 0x4edfb8u: goto label_4edfb8;
        case 0x4edfbcu: goto label_4edfbc;
        case 0x4edfc0u: goto label_4edfc0;
        case 0x4edfc4u: goto label_4edfc4;
        case 0x4edfc8u: goto label_4edfc8;
        case 0x4edfccu: goto label_4edfcc;
        case 0x4edfd0u: goto label_4edfd0;
        case 0x4edfd4u: goto label_4edfd4;
        case 0x4edfd8u: goto label_4edfd8;
        case 0x4edfdcu: goto label_4edfdc;
        case 0x4edfe0u: goto label_4edfe0;
        case 0x4edfe4u: goto label_4edfe4;
        case 0x4edfe8u: goto label_4edfe8;
        case 0x4edfecu: goto label_4edfec;
        case 0x4edff0u: goto label_4edff0;
        case 0x4edff4u: goto label_4edff4;
        case 0x4edff8u: goto label_4edff8;
        case 0x4edffcu: goto label_4edffc;
        default: break;
    }

    ctx->pc = 0x4edd40u;

label_4edd40:
    // 0x4edd40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4edd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4edd44:
    // 0x4edd44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4edd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4edd48:
    // 0x4edd48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4edd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4edd4c:
    // 0x4edd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4edd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4edd50:
    // 0x4edd50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4edd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4edd54:
    // 0x4edd54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4edd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4edd58:
    // 0x4edd58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4edd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4edd5c:
    // 0x4edd5c: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x4edd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4edd60:
    // 0x4edd60: 0x30832200  andi        $v1, $a0, 0x2200
    ctx->pc = 0x4edd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8704);
label_4edd64:
    // 0x4edd64: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
label_4edd68:
    if (ctx->pc == 0x4EDD68u) {
        ctx->pc = 0x4EDD68u;
            // 0x4edd68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD6Cu;
        goto label_4edd6c;
    }
    ctx->pc = 0x4EDD64u;
    {
        const bool branch_taken_0x4edd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD64u;
            // 0x4edd68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edd64) {
            ctx->pc = 0x4EDFDCu;
            goto label_4edfdc;
        }
    }
    ctx->pc = 0x4EDD6Cu;
label_4edd6c:
    // 0x4edd6c: 0x5230009c  beql        $s1, $s0, . + 4 + (0x9C << 2)
label_4edd70:
    if (ctx->pc == 0x4EDD70u) {
        ctx->pc = 0x4EDD70u;
            // 0x4edd70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4EDD74u;
        goto label_4edd74;
    }
    ctx->pc = 0x4EDD6Cu;
    {
        const bool branch_taken_0x4edd6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x4edd6c) {
            ctx->pc = 0x4EDD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD6Cu;
            // 0x4edd70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDFE0u;
            goto label_4edfe0;
        }
    }
    ctx->pc = 0x4EDD74u;
label_4edd74:
    // 0x4edd74: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x4edd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_4edd78:
    // 0x4edd78: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4edd7c:
    if (ctx->pc == 0x4EDD7Cu) {
        ctx->pc = 0x4EDD7Cu;
            // 0x4edd7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD80u;
        goto label_4edd80;
    }
    ctx->pc = 0x4EDD78u;
    {
        const bool branch_taken_0x4edd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edd78) {
            ctx->pc = 0x4EDD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD78u;
            // 0x4edd7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDD98u;
            goto label_4edd98;
        }
    }
    ctx->pc = 0x4EDD80u;
label_4edd80:
    // 0x4edd80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4edd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4edd84:
    // 0x4edd84: 0xc14b7d4  jal         func_52DF50
label_4edd88:
    if (ctx->pc == 0x4EDD88u) {
        ctx->pc = 0x4EDD88u;
            // 0x4edd88: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->pc = 0x4EDD8Cu;
        goto label_4edd8c;
    }
    ctx->pc = 0x4EDD84u;
    SET_GPR_U32(ctx, 31, 0x4EDD8Cu);
    ctx->pc = 0x4EDD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD84u;
            // 0x4edd88: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD8Cu; }
        if (ctx->pc != 0x4EDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD8Cu; }
        if (ctx->pc != 0x4EDD8Cu) { return; }
    }
    ctx->pc = 0x4EDD8Cu;
label_4edd8c:
    // 0x4edd8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4edd90:
    if (ctx->pc == 0x4EDD90u) {
        ctx->pc = 0x4EDD90u;
            // 0x4edd90: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4EDD94u;
        goto label_4edd94;
    }
    ctx->pc = 0x4EDD8Cu;
    {
        const bool branch_taken_0x4edd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD8Cu;
            // 0x4edd90: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edd8c) {
            ctx->pc = 0x4EDD98u;
            goto label_4edd98;
        }
    }
    ctx->pc = 0x4EDD94u;
label_4edd94:
    // 0x4edd94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4edd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edd98:
    // 0x4edd98: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
label_4edd9c:
    if (ctx->pc == 0x4EDD9Cu) {
        ctx->pc = 0x4EDDA0u;
        goto label_4edda0;
    }
    ctx->pc = 0x4EDD98u;
    {
        const bool branch_taken_0x4edd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4edd98) {
            ctx->pc = 0x4EDFDCu;
            goto label_4edfdc;
        }
    }
    ctx->pc = 0x4EDDA0u;
label_4edda0:
    // 0x4edda0: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4edda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_4edda4:
    // 0x4edda4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4edda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4edda8:
    // 0x4edda8: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_4eddac:
    if (ctx->pc == 0x4EDDACu) {
        ctx->pc = 0x4EDDACu;
            // 0x4eddac: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->pc = 0x4EDDB0u;
        goto label_4eddb0;
    }
    ctx->pc = 0x4EDDA8u;
    {
        const bool branch_taken_0x4edda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4edda8) {
            ctx->pc = 0x4EDDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDDA8u;
            // 0x4eddac: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDDBCu;
            goto label_4eddbc;
        }
    }
    ctx->pc = 0x4EDDB0u;
label_4eddb0:
    // 0x4eddb0: 0x1000008a  b           . + 4 + (0x8A << 2)
label_4eddb4:
    if (ctx->pc == 0x4EDDB4u) {
        ctx->pc = 0x4EDDB8u;
        goto label_4eddb8;
    }
    ctx->pc = 0x4EDDB0u;
    {
        const bool branch_taken_0x4eddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eddb0) {
            ctx->pc = 0x4EDFDCu;
            goto label_4edfdc;
        }
    }
    ctx->pc = 0x4EDDB8u;
label_4eddb8:
    // 0x4eddb8: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x4eddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_4eddbc:
    // 0x4eddbc: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4eddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4eddc0:
    // 0x4eddc0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4eddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4eddc4:
    // 0x4eddc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4eddc8:
    // 0x4eddc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4eddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4eddcc:
    // 0x4eddcc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4eddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4eddd0:
    // 0x4eddd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eddd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eddd4:
    // 0x4eddd4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4eddd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4eddd8:
    // 0x4eddd8: 0x320f809  jalr        $t9
label_4edddc:
    if (ctx->pc == 0x4EDDDCu) {
        ctx->pc = 0x4EDDE0u;
        goto label_4edde0;
    }
    ctx->pc = 0x4EDDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDDE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDDE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDDE0u; }
            if (ctx->pc != 0x4EDDE0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EDDE0u;
label_4edde0:
    // 0x4edde0: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x4edde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4edde4:
    // 0x4edde4: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4edde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4edde8:
    // 0x4edde8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4edde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4eddec:
    // 0x4eddec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4eddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4eddf0:
    // 0x4eddf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4eddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4eddf4:
    // 0x4eddf4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4eddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4eddf8:
    // 0x4eddf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eddf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eddfc:
    // 0x4eddfc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x4eddfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_4ede00:
    // 0x4ede00: 0x320f809  jalr        $t9
label_4ede04:
    if (ctx->pc == 0x4EDE04u) {
        ctx->pc = 0x4EDE08u;
        goto label_4ede08;
    }
    ctx->pc = 0x4EDE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDE08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE08u; }
            if (ctx->pc != 0x4EDE08u) { return; }
        }
        }
    }
    ctx->pc = 0x4EDE08u;
label_4ede08:
    // 0x4ede08: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_4ede0c:
    // 0x4ede0c: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x4ede0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4ede10:
    // 0x4ede10: 0xc0eea24  jal         func_3BA890
label_4ede14:
    if (ctx->pc == 0x4EDE14u) {
        ctx->pc = 0x4EDE14u;
            // 0x4ede14: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->pc = 0x4EDE18u;
        goto label_4ede18;
    }
    ctx->pc = 0x4EDE10u;
    SET_GPR_U32(ctx, 31, 0x4EDE18u);
    ctx->pc = 0x4EDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE10u;
            // 0x4ede14: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE18u; }
        if (ctx->pc != 0x4EDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE18u; }
        if (ctx->pc != 0x4EDE18u) { return; }
    }
    ctx->pc = 0x4EDE18u;
label_4ede18:
    // 0x4ede18: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x4ede18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ede1c:
    // 0x4ede1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ede1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ede20:
    // 0x4ede20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ede20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ede24:
    // 0x4ede24: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x4ede24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_4ede28:
    // 0x4ede28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ede28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ede2c:
    // 0x4ede2c: 0xc0eea24  jal         func_3BA890
label_4ede30:
    if (ctx->pc == 0x4EDE30u) {
        ctx->pc = 0x4EDE30u;
            // 0x4ede30: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x4EDE34u;
        goto label_4ede34;
    }
    ctx->pc = 0x4EDE2Cu;
    SET_GPR_U32(ctx, 31, 0x4EDE34u);
    ctx->pc = 0x4EDE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE2Cu;
            // 0x4ede30: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE34u; }
        if (ctx->pc != 0x4EDE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE34u; }
        if (ctx->pc != 0x4EDE34u) { return; }
    }
    ctx->pc = 0x4EDE34u;
label_4ede34:
    // 0x4ede34: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x4ede34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ede38:
    // 0x4ede38: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4ede38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4ede3c:
    // 0x4ede3c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ede3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ede40:
    // 0x4ede40: 0x320f809  jalr        $t9
label_4ede44:
    if (ctx->pc == 0x4EDE44u) {
        ctx->pc = 0x4EDE44u;
            // 0x4ede44: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EDE48u;
        goto label_4ede48;
    }
    ctx->pc = 0x4EDE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDE48u);
        ctx->pc = 0x4EDE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE40u;
            // 0x4ede44: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDE48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE48u; }
            if (ctx->pc != 0x4EDE48u) { return; }
        }
        }
    }
    ctx->pc = 0x4EDE48u;
label_4ede48:
    // 0x4ede48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4ede48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4ede4c:
    // 0x4ede4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ede4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ede50:
    // 0x4ede50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ede50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ede54:
    // 0x4ede54: 0xc078534  jal         func_1E14D0
label_4ede58:
    if (ctx->pc == 0x4EDE58u) {
        ctx->pc = 0x4EDE58u;
            // 0x4ede58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4EDE5Cu;
        goto label_4ede5c;
    }
    ctx->pc = 0x4EDE54u;
    SET_GPR_U32(ctx, 31, 0x4EDE5Cu);
    ctx->pc = 0x4EDE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE54u;
            // 0x4ede58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E14D0u;
    if (runtime->hasFunction(0x1E14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE5Cu; }
        if (ctx->pc != 0x4EDE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E14D0_0x1e14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE5Cu; }
        if (ctx->pc != 0x4EDE5Cu) { return; }
    }
    ctx->pc = 0x4EDE5Cu;
label_4ede5c:
    // 0x4ede5c: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4ede5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4ede60:
    // 0x4ede60: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4ede60u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ede64:
    // 0x4ede64: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ede68:
    if (ctx->pc == 0x4EDE68u) {
        ctx->pc = 0x4EDE68u;
            // 0x4ede68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDE6Cu;
        goto label_4ede6c;
    }
    ctx->pc = 0x4EDE64u;
    {
        const bool branch_taken_0x4ede64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EDE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE64u;
            // 0x4ede68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ede64) {
            ctx->pc = 0x4EDE7Cu;
            goto label_4ede7c;
        }
    }
    ctx->pc = 0x4EDE6Cu;
label_4ede6c:
    // 0x4ede6c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ede6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ede70:
    // 0x4ede70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ede74:
    if (ctx->pc == 0x4EDE74u) {
        ctx->pc = 0x4EDE78u;
        goto label_4ede78;
    }
    ctx->pc = 0x4EDE70u;
    {
        const bool branch_taken_0x4ede70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ede70) {
            ctx->pc = 0x4EDE7Cu;
            goto label_4ede7c;
        }
    }
    ctx->pc = 0x4EDE78u;
label_4ede78:
    // 0x4ede78: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4ede78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ede7c:
    // 0x4ede7c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ede80:
    if (ctx->pc == 0x4EDE80u) {
        ctx->pc = 0x4EDE84u;
        goto label_4ede84;
    }
    ctx->pc = 0x4EDE7Cu;
    {
        const bool branch_taken_0x4ede7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ede7c) {
            ctx->pc = 0x4EDE98u;
            goto label_4ede98;
        }
    }
    ctx->pc = 0x4EDE84u;
label_4ede84:
    // 0x4ede84: 0xc075eb4  jal         func_1D7AD0
label_4ede88:
    if (ctx->pc == 0x4EDE88u) {
        ctx->pc = 0x4EDE88u;
            // 0x4ede88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDE8Cu;
        goto label_4ede8c;
    }
    ctx->pc = 0x4EDE84u;
    SET_GPR_U32(ctx, 31, 0x4EDE8Cu);
    ctx->pc = 0x4EDE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE84u;
            // 0x4ede88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE8Cu; }
        if (ctx->pc != 0x4EDE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDE8Cu; }
        if (ctx->pc != 0x4EDE8Cu) { return; }
    }
    ctx->pc = 0x4EDE8Cu;
label_4ede8c:
    // 0x4ede8c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ede90:
    if (ctx->pc == 0x4EDE90u) {
        ctx->pc = 0x4EDE94u;
        goto label_4ede94;
    }
    ctx->pc = 0x4EDE8Cu;
    {
        const bool branch_taken_0x4ede8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ede8c) {
            ctx->pc = 0x4EDE98u;
            goto label_4ede98;
        }
    }
    ctx->pc = 0x4EDE94u;
label_4ede94:
    // 0x4ede94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ede94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ede98:
    // 0x4ede98: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_4ede9c:
    if (ctx->pc == 0x4EDE9Cu) {
        ctx->pc = 0x4EDE9Cu;
            // 0x4ede9c: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x4EDEA0u;
        goto label_4edea0;
    }
    ctx->pc = 0x4EDE98u;
    {
        const bool branch_taken_0x4ede98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ede98) {
            ctx->pc = 0x4EDE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDE98u;
            // 0x4ede9c: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDEC8u;
            goto label_4edec8;
        }
    }
    ctx->pc = 0x4EDEA0u;
label_4edea0:
    // 0x4edea0: 0xc040180  jal         func_100600
label_4edea4:
    if (ctx->pc == 0x4EDEA4u) {
        ctx->pc = 0x4EDEA4u;
            // 0x4edea4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x4EDEA8u;
        goto label_4edea8;
    }
    ctx->pc = 0x4EDEA0u;
    SET_GPR_U32(ctx, 31, 0x4EDEA8u);
    ctx->pc = 0x4EDEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDEA0u;
            // 0x4edea4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEA8u; }
        if (ctx->pc != 0x4EDEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEA8u; }
        if (ctx->pc != 0x4EDEA8u) { return; }
    }
    ctx->pc = 0x4EDEA8u;
label_4edea8:
    // 0x4edea8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4edeac:
    if (ctx->pc == 0x4EDEACu) {
        ctx->pc = 0x4EDEB0u;
        goto label_4edeb0;
    }
    ctx->pc = 0x4EDEA8u;
    {
        const bool branch_taken_0x4edea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edea8) {
            ctx->pc = 0x4EDEC4u;
            goto label_4edec4;
        }
    }
    ctx->pc = 0x4EDEB0u;
label_4edeb0:
    // 0x4edeb0: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x4edeb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4edeb4:
    // 0x4edeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4edeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4edeb8:
    // 0x4edeb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4edeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edebc:
    // 0x4edebc: 0xc151b50  jal         func_546D40
label_4edec0:
    if (ctx->pc == 0x4EDEC0u) {
        ctx->pc = 0x4EDEC0u;
            // 0x4edec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDEC4u;
        goto label_4edec4;
    }
    ctx->pc = 0x4EDEBCu;
    SET_GPR_U32(ctx, 31, 0x4EDEC4u);
    ctx->pc = 0x4EDEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDEBCu;
            // 0x4edec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x546D40u;
    if (runtime->hasFunction(0x546D40u)) {
        auto targetFn = runtime->lookupFunction(0x546D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEC4u; }
        if (ctx->pc != 0x4EDEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00546D40_0x546d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEC4u; }
        if (ctx->pc != 0x4EDEC4u) { return; }
    }
    ctx->pc = 0x4EDEC4u;
label_4edec4:
    // 0x4edec4: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x4edec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4edec8:
    // 0x4edec8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4edec8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4edecc:
    // 0x4edecc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4eded0:
    if (ctx->pc == 0x4EDED0u) {
        ctx->pc = 0x4EDED0u;
            // 0x4eded0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDED4u;
        goto label_4eded4;
    }
    ctx->pc = 0x4EDECCu;
    {
        const bool branch_taken_0x4edecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EDED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDECCu;
            // 0x4eded0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edecc) {
            ctx->pc = 0x4EDEE4u;
            goto label_4edee4;
        }
    }
    ctx->pc = 0x4EDED4u;
label_4eded4:
    // 0x4eded4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4eded4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4eded8:
    // 0x4eded8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ededc:
    if (ctx->pc == 0x4EDEDCu) {
        ctx->pc = 0x4EDEE0u;
        goto label_4edee0;
    }
    ctx->pc = 0x4EDED8u;
    {
        const bool branch_taken_0x4eded8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eded8) {
            ctx->pc = 0x4EDEE4u;
            goto label_4edee4;
        }
    }
    ctx->pc = 0x4EDEE0u;
label_4edee0:
    // 0x4edee0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4edee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4edee4:
    // 0x4edee4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4edee8:
    if (ctx->pc == 0x4EDEE8u) {
        ctx->pc = 0x4EDEECu;
        goto label_4edeec;
    }
    ctx->pc = 0x4EDEE4u;
    {
        const bool branch_taken_0x4edee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4edee4) {
            ctx->pc = 0x4EDF00u;
            goto label_4edf00;
        }
    }
    ctx->pc = 0x4EDEECu;
label_4edeec:
    // 0x4edeec: 0xc075eb4  jal         func_1D7AD0
label_4edef0:
    if (ctx->pc == 0x4EDEF0u) {
        ctx->pc = 0x4EDEF0u;
            // 0x4edef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDEF4u;
        goto label_4edef4;
    }
    ctx->pc = 0x4EDEECu;
    SET_GPR_U32(ctx, 31, 0x4EDEF4u);
    ctx->pc = 0x4EDEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDEECu;
            // 0x4edef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEF4u; }
        if (ctx->pc != 0x4EDEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDEF4u; }
        if (ctx->pc != 0x4EDEF4u) { return; }
    }
    ctx->pc = 0x4EDEF4u;
label_4edef4:
    // 0x4edef4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4edef8:
    if (ctx->pc == 0x4EDEF8u) {
        ctx->pc = 0x4EDEFCu;
        goto label_4edefc;
    }
    ctx->pc = 0x4EDEF4u;
    {
        const bool branch_taken_0x4edef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4edef4) {
            ctx->pc = 0x4EDF00u;
            goto label_4edf00;
        }
    }
    ctx->pc = 0x4EDEFCu;
label_4edefc:
    // 0x4edefc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4edefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edf00:
    // 0x4edf00: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_4edf04:
    if (ctx->pc == 0x4EDF04u) {
        ctx->pc = 0x4EDF04u;
            // 0x4edf04: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->pc = 0x4EDF08u;
        goto label_4edf08;
    }
    ctx->pc = 0x4EDF00u;
    {
        const bool branch_taken_0x4edf00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edf00) {
            ctx->pc = 0x4EDF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDF00u;
            // 0x4edf04: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDF9Cu;
            goto label_4edf9c;
        }
    }
    ctx->pc = 0x4EDF08u;
label_4edf08:
    // 0x4edf08: 0xc040180  jal         func_100600
label_4edf0c:
    if (ctx->pc == 0x4EDF0Cu) {
        ctx->pc = 0x4EDF0Cu;
            // 0x4edf0c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4EDF10u;
        goto label_4edf10;
    }
    ctx->pc = 0x4EDF08u;
    SET_GPR_U32(ctx, 31, 0x4EDF10u);
    ctx->pc = 0x4EDF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDF08u;
            // 0x4edf0c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDF10u; }
        if (ctx->pc != 0x4EDF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDF10u; }
        if (ctx->pc != 0x4EDF10u) { return; }
    }
    ctx->pc = 0x4EDF10u;
label_4edf10:
    // 0x4edf10: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4edf14:
    if (ctx->pc == 0x4EDF14u) {
        ctx->pc = 0x4EDF14u;
            // 0x4edf14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDF18u;
        goto label_4edf18;
    }
    ctx->pc = 0x4EDF10u;
    {
        const bool branch_taken_0x4edf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDF10u;
            // 0x4edf14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edf10) {
            ctx->pc = 0x4EDF98u;
            goto label_4edf98;
        }
    }
    ctx->pc = 0x4EDF18u;
label_4edf18:
    // 0x4edf18: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4edf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4edf1c:
    // 0x4edf1c: 0x823211aa  lb          $s2, 0x11AA($s1)
    ctx->pc = 0x4edf1cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_4edf20:
    // 0x4edf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4edf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4edf24:
    // 0x4edf24: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4edf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4edf28:
    // 0x4edf28: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4edf28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4edf2c:
    // 0x4edf2c: 0xc10ca68  jal         func_4329A0
label_4edf30:
    if (ctx->pc == 0x4EDF30u) {
        ctx->pc = 0x4EDF30u;
            // 0x4edf30: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EDF34u;
        goto label_4edf34;
    }
    ctx->pc = 0x4EDF2Cu;
    SET_GPR_U32(ctx, 31, 0x4EDF34u);
    ctx->pc = 0x4EDF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDF2Cu;
            // 0x4edf30: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDF34u; }
        if (ctx->pc != 0x4EDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDF34u; }
        if (ctx->pc != 0x4EDF34u) { return; }
    }
    ctx->pc = 0x4EDF34u;
label_4edf34:
    // 0x4edf34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4edf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4edf38:
    // 0x4edf38: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x4edf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
label_4edf3c:
    // 0x4edf3c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4edf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4edf40:
    // 0x4edf40: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4edf40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4edf44:
    // 0x4edf44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4edf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4edf48:
    // 0x4edf48: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4edf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4edf4c:
    // 0x4edf4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4edf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4edf50:
    // 0x4edf50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4edf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4edf54:
    // 0x4edf54: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x4edf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_4edf58:
    // 0x4edf58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4edf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4edf5c:
    // 0x4edf5c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4edf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4edf60:
    // 0x4edf60: 0x3c02e014  lui         $v0, 0xE014
    ctx->pc = 0x4edf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57364 << 16));
label_4edf64:
    // 0x4edf64: 0x344414ff  ori         $a0, $v0, 0x14FF
    ctx->pc = 0x4edf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5375);
label_4edf68:
    // 0x4edf68: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4edf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4edf6c:
    // 0x4edf6c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4edf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_4edf70:
    // 0x4edf70: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4edf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4edf74:
    // 0x4edf74: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x4edf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_4edf78:
    // 0x4edf78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4edf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4edf7c:
    // 0x4edf7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4edf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4edf80:
    // 0x4edf80: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4edf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4edf84:
    // 0x4edf84: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4edf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4edf88:
    // 0x4edf88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4edf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4edf8c:
    // 0x4edf8c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x4edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_4edf90:
    // 0x4edf90: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x4edf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_4edf94:
    // 0x4edf94: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x4edf94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_4edf98:
    // 0x4edf98: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4edf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4edf9c:
    // 0x4edf9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4edfa0:
    if (ctx->pc == 0x4EDFA0u) {
        ctx->pc = 0x4EDFA0u;
            // 0x4edfa0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4EDFA4u;
        goto label_4edfa4;
    }
    ctx->pc = 0x4EDF9Cu;
    {
        const bool branch_taken_0x4edf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4edf9c) {
            ctx->pc = 0x4EDFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDF9Cu;
            // 0x4edfa0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EDFCCu;
            goto label_4edfcc;
        }
    }
    ctx->pc = 0x4EDFA4u;
label_4edfa4:
    // 0x4edfa4: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4edfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4edfa8:
    // 0x4edfa8: 0x26230a50  addiu       $v1, $s1, 0xA50
    ctx->pc = 0x4edfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4edfac:
    // 0x4edfac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4edfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4edfb0:
    // 0x4edfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4edfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4edfb4:
    // 0x4edfb4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4edfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4edfb8:
    // 0x4edfb8: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4edfb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4edfbc:
    // 0x4edfbc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4edfbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4edfc0:
    // 0x4edfc0: 0x320f809  jalr        $t9
label_4edfc4:
    if (ctx->pc == 0x4EDFC4u) {
        ctx->pc = 0x4EDFC8u;
        goto label_4edfc8;
    }
    ctx->pc = 0x4EDFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDFC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDFC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDFC8u; }
            if (ctx->pc != 0x4EDFC8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EDFC8u;
label_4edfc8:
    // 0x4edfc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4edfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4edfcc:
    // 0x4edfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4edfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4edfd0:
    // 0x4edfd0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4edfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4edfd4:
    // 0x4edfd4: 0x320f809  jalr        $t9
label_4edfd8:
    if (ctx->pc == 0x4EDFD8u) {
        ctx->pc = 0x4EDFD8u;
            // 0x4edfd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EDFDCu;
        goto label_4edfdc;
    }
    ctx->pc = 0x4EDFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDFDCu);
        ctx->pc = 0x4EDFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDFD4u;
            // 0x4edfd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDFDCu; }
            if (ctx->pc != 0x4EDFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EDFDCu;
label_4edfdc:
    // 0x4edfdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4edfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4edfe0:
    // 0x4edfe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4edfe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4edfe4:
    // 0x4edfe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4edfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4edfe8:
    // 0x4edfe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4edfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4edfec:
    // 0x4edfec: 0x3e00008  jr          $ra
label_4edff0:
    if (ctx->pc == 0x4EDFF0u) {
        ctx->pc = 0x4EDFF0u;
            // 0x4edff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4EDFF4u;
        goto label_4edff4;
    }
    ctx->pc = 0x4EDFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDFECu;
            // 0x4edff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EDFF4u;
label_4edff4:
    // 0x4edff4: 0x0  nop
    ctx->pc = 0x4edff4u;
    // NOP
label_4edff8:
    // 0x4edff8: 0x0  nop
    ctx->pc = 0x4edff8u;
    // NOP
label_4edffc:
    // 0x4edffc: 0x0  nop
    ctx->pc = 0x4edffcu;
    // NOP
}
