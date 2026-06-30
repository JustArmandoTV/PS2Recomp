#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9040
// Address: 0x1b9040 - 0x1b94a8
void sub_001B9040_0x1b9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9040_0x1b9040");
#endif

    switch (ctx->pc) {
        case 0x1b9124u: goto label_1b9124;
        case 0x1b913cu: goto label_1b913c;
        case 0x1b9148u: goto label_1b9148;
        case 0x1b9168u: goto label_1b9168;
        case 0x1b91c0u: goto label_1b91c0;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b9384u: goto label_1b9384;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93b4u: goto label_1b93b4;
        default: break;
    }

    ctx->pc = 0x1b9040u;

    // 0x1b9040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b904c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b904cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9050: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b9054: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b9054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9058: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b905c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b905cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9060: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b9060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b9064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9068: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b906c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b9070: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b9074: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x1b9074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b9078: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9078u;
    {
        const bool branch_taken_0x1b9078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9078u;
            // 0x1b907c: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9078) {
            ctx->pc = 0x1B908Cu;
            goto label_1b908c;
        }
    }
    ctx->pc = 0x1B9080u;
    // 0x1b9080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9084: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B9084u;
    {
        const bool branch_taken_0x1b9084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9084) {
            ctx->pc = 0x1B9088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9084u;
            // 0x1b9088: 0xde650000  ld          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B90C8u;
            goto label_1b90c8;
        }
    }
    ctx->pc = 0x1B908Cu;
label_1b908c:
    // 0x1b908c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b908cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9094: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x1b9094u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x1b9098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b909c: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1b909cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b90a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b90a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b90a4: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x1b90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x1b90a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b90a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b90ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b90acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b90b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b90b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b90b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b90b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b90b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b90b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b90bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B90BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90BCu;
            // 0x1b90c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B90C4u;
    // 0x1b90c4: 0x0  nop
    ctx->pc = 0x1b90c4u;
    // NOP
label_1b90c8:
    // 0x1b90c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b90c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b90cc: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1b90d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b90d4: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1b90d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b90d8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1b90d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1b90dc: 0x14870004  bne         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B90DCu;
    {
        const bool branch_taken_0x1b90dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x1B90E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90DCu;
            // 0x1b90e0: 0xfe650000  sd          $a1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90dc) {
            ctx->pc = 0x1B90F0u;
            goto label_1b90f0;
        }
    }
    ctx->pc = 0x1B90E4u;
    // 0x1b90e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b90e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B90E8u;
    {
        const bool branch_taken_0x1b90e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90E8u;
            // 0x1b90ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90e8) {
            ctx->pc = 0x1B9190u;
            goto label_1b9190;
        }
    }
    ctx->pc = 0x1B90F0u;
label_1b90f0:
    // 0x1b90f0: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1b90f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b90f4: 0x16400027  bnez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B90F4u;
    {
        const bool branch_taken_0x1b90f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B90F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90F4u;
            // 0x1b90f8: 0xde060188  ld          $a2, 0x188($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90f4) {
            ctx->pc = 0x1B9194u;
            goto label_1b9194;
        }
    }
    ctx->pc = 0x1B90FCu;
    // 0x1b90fc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1b90fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b9100: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B9100u;
    {
        const bool branch_taken_0x1b9100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9100) {
            ctx->pc = 0x1B9104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9100u;
            // 0x1b9104: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9178u;
            goto label_1b9178;
        }
    }
    ctx->pc = 0x1B9108u;
    // 0x1b9108: 0xde030178  ld          $v1, 0x178($s0)
    ctx->pc = 0x1b9108u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1b910c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9110: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9110u;
    {
        const bool branch_taken_0x1b9110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9110u;
            // 0x1b9114: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9110) {
            ctx->pc = 0x1B9130u;
            goto label_1b9130;
        }
    }
    ctx->pc = 0x1B9118u;
    // 0x1b9118: 0xde050158  ld          $a1, 0x158($s0)
    ctx->pc = 0x1b9118u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1b911c: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B911Cu;
    SET_GPR_U32(ctx, 31, 0x1B9124u);
    ctx->pc = 0x1B9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B911Cu;
            // 0x1b9120: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9124u; }
        if (ctx->pc != 0x1B9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9124u; }
        if (ctx->pc != 0x1B9124u) { return; }
    }
    ctx->pc = 0x1B9124u;
label_1b9124:
    // 0x1b9124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9124u;
    {
        const bool branch_taken_0x1b9124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9124u;
            // 0x1b9128: 0xde050160  ld          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9124) {
            ctx->pc = 0x1B9140u;
            goto label_1b9140;
        }
    }
    ctx->pc = 0x1B912Cu;
    // 0x1b912c: 0x0  nop
    ctx->pc = 0x1b912cu;
    // NOP
label_1b9130:
    // 0x1b9130: 0xde050168  ld          $a1, 0x168($s0)
    ctx->pc = 0x1b9130u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1b9134: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B9134u;
    SET_GPR_U32(ctx, 31, 0x1B913Cu);
    ctx->pc = 0x1B9138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9134u;
            // 0x1b9138: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B913Cu; }
        if (ctx->pc != 0x1B913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B913Cu; }
        if (ctx->pc != 0x1B913Cu) { return; }
    }
    ctx->pc = 0x1B913Cu;
label_1b913c:
    // 0x1b913c: 0xde050170  ld          $a1, 0x170($s0)
    ctx->pc = 0x1b913cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 368)));
label_1b9140:
    // 0x1b9140: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B9140u;
    SET_GPR_U32(ctx, 31, 0x1B9148u);
    ctx->pc = 0x1B9144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9140u;
            // 0x1b9144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9148u; }
        if (ctx->pc != 0x1B9148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9148u; }
        if (ctx->pc != 0x1B9148u) { return; }
    }
    ctx->pc = 0x1B9148u;
label_1b9148:
    // 0x1b9148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b914c: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1b914cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b9150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9154: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x1b9154u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x1b9158: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b9158u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b915c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1b915cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1b9160: 0xc06e3c8  jal         func_1B8F20
    ctx->pc = 0x1B9160u;
    SET_GPR_U32(ctx, 31, 0x1B9168u);
    ctx->pc = 0x1B9164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9160u;
            // 0x1b9164: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F20u;
    if (runtime->hasFunction(0x1B8F20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9168u; }
        if (ctx->pc != 0x1B9168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F20_0x1b8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9168u; }
        if (ctx->pc != 0x1B9168u) { return; }
    }
    ctx->pc = 0x1B9168u;
label_1b9168:
    // 0x1b9168: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x1b9168u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1b916c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B916Cu;
    {
        const bool branch_taken_0x1b916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B916Cu;
            // 0x1b9170: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b916c) {
            ctx->pc = 0x1B9194u;
            goto label_1b9194;
        }
    }
    ctx->pc = 0x1B9174u;
    // 0x1b9174: 0x0  nop
    ctx->pc = 0x1b9174u;
    // NOP
label_1b9178:
    // 0x1b9178: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9178u;
    {
        const bool branch_taken_0x1b9178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9178) {
            ctx->pc = 0x1B917Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9178u;
            // 0x1b917c: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B9180u;
    // 0x1b9180: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1b9180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1b9184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9184u;
    {
        const bool branch_taken_0x1b9184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9184u;
            // 0x1b9188: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9184) {
            ctx->pc = 0x1B9194u;
            goto label_1b9194;
        }
    }
    ctx->pc = 0x1B918Cu;
    // 0x1b918c: 0x0  nop
    ctx->pc = 0x1b918cu;
    // NOP
label_1b9190:
    // 0x1b9190: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x1b9190u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
label_1b9194:
    // 0x1b9194: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b9194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9198:
    // 0x1b9198: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b9198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b919c: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1b919cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1b91a0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1b91a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b91a4: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1b91a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1b91a8: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B91A8u;
    {
        const bool branch_taken_0x1b91a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91A8u;
            // 0x1b91ac: 0xfe020188  sd          $v0, 0x188($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91a8) {
            ctx->pc = 0x1B91D8u;
            goto label_1b91d8;
        }
    }
    ctx->pc = 0x1B91B0u;
    // 0x1b91b0: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x1b91b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b91b4: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1b91b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b91b8: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B91B8u;
    SET_GPR_U32(ctx, 31, 0x1B91C0u);
    ctx->pc = 0x1B91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91B8u;
            // 0x1b91bc: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C0u; }
        if (ctx->pc != 0x1B91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C0u; }
        if (ctx->pc != 0x1B91C0u) { return; }
    }
    ctx->pc = 0x1B91C0u;
label_1b91c0:
    // 0x1b91c0: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x1b91c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b91c4: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B91C4u;
    SET_GPR_U32(ctx, 31, 0x1B91CCu);
    ctx->pc = 0x1B91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91C4u;
            // 0x1b91c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91CCu; }
        if (ctx->pc != 0x1B91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91CCu; }
        if (ctx->pc != 0x1B91CCu) { return; }
    }
    ctx->pc = 0x1B91CCu;
label_1b91cc:
    // 0x1b91cc: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x1b91ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1b91d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B91D0u;
    {
        const bool branch_taken_0x1b91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91D0u;
            // 0x1b91d4: 0x62a02d  daddu       $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91d0) {
            ctx->pc = 0x1B91DCu;
            goto label_1b91dc;
        }
    }
    ctx->pc = 0x1B91D8u;
label_1b91d8:
    // 0x1b91d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b91d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b91dc:
    // 0x1b91dc: 0x56400014  bnel        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B91DCu;
    {
        const bool branch_taken_0x1b91dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b91dc) {
            ctx->pc = 0x1B91E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91DCu;
            // 0x1b91e0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9230u;
            goto label_1b9230;
        }
    }
    ctx->pc = 0x1B91E4u;
    // 0x1b91e4: 0xde030188  ld          $v1, 0x188($s0)
    ctx->pc = 0x1b91e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1b91e8: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1b91e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b91ec: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1B91ECu;
    {
        const bool branch_taken_0x1b91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91ECu;
            // 0x1b91f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91ec) {
            ctx->pc = 0x1B9390u;
            goto label_1b9390;
        }
    }
    ctx->pc = 0x1B91F4u;
    // 0x1b91f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b91f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B91F8u;
    {
        const bool branch_taken_0x1b91f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91F8u;
            // 0x1b91fc: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91f8) {
            ctx->pc = 0x1B9210u;
            goto label_1b9210;
        }
    }
    ctx->pc = 0x1B9200u;
    // 0x1b9200: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x1b9200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    // 0x1b9204: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9204u;
    {
        const bool branch_taken_0x1b9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9204u;
            // 0x1b9208: 0xfe020178  sd          $v0, 0x178($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9204) {
            ctx->pc = 0x1B921Cu;
            goto label_1b921c;
        }
    }
    ctx->pc = 0x1B920Cu;
    // 0x1b920c: 0x0  nop
    ctx->pc = 0x1b920cu;
    // NOP
label_1b9210:
    // 0x1b9210: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x1b9210u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1b9214: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x1b9214u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x1b9218: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x1b9218u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
label_1b921c:
    // 0x1b921c: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1b921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1b9220: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1b9220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1b9224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9228: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1B9228u;
    {
        const bool branch_taken_0x1b9228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9228u;
            // 0x1b922c: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9228) {
            ctx->pc = 0x1B938Cu;
            goto label_1b938c;
        }
    }
    ctx->pc = 0x1B9230u;
label_1b9230:
    // 0x1b9230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9234: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1B9234u;
    {
        const bool branch_taken_0x1b9234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9234u;
            // 0x1b9238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9234) {
            ctx->pc = 0x1B9390u;
            goto label_1b9390;
        }
    }
    ctx->pc = 0x1B923Cu;
    // 0x1b923c: 0xde050148  ld          $a1, 0x148($s0)
    ctx->pc = 0x1b923cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1b9240: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B9240u;
    SET_GPR_U32(ctx, 31, 0x1B9248u);
    ctx->pc = 0x1B9244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9240u;
            // 0x1b9244: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9248u; }
        if (ctx->pc != 0x1B9248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9248u; }
        if (ctx->pc != 0x1B9248u) { return; }
    }
    ctx->pc = 0x1B9248u;
label_1b9248:
    // 0x1b9248: 0xde050150  ld          $a1, 0x150($s0)
    ctx->pc = 0x1b9248u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b924c: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B924Cu;
    SET_GPR_U32(ctx, 31, 0x1B9254u);
    ctx->pc = 0x1B9250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B924Cu;
            // 0x1b9250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9254u; }
        if (ctx->pc != 0x1B9254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9254u; }
        if (ctx->pc != 0x1B9254u) { return; }
    }
    ctx->pc = 0x1B9254u;
label_1b9254:
    // 0x1b9254: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x1b9254u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9258: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b9258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b925c: 0xb4102f  dsubu       $v0, $a1, $s4
    ctx->pc = 0x1b925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
    // 0x1b9260: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9260u;
    {
        const bool branch_taken_0x1b9260 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B9264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9260u;
            // 0x1b9264: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9260) {
            ctx->pc = 0x1B9278u;
            goto label_1b9278;
        }
    }
    ctx->pc = 0x1B9268u;
    // 0x1b9268: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9268u;
    {
        const bool branch_taken_0x1b9268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9268) {
            ctx->pc = 0x1B926Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9268u;
            // 0x1b926c: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B928Cu;
            goto label_1b928c;
        }
    }
    ctx->pc = 0x1B9270u;
    // 0x1b9270: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9270u;
    {
        const bool branch_taken_0x1b9270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9270u;
            // 0x1b9274: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9270) {
            ctx->pc = 0x1B92B8u;
            goto label_1b92b8;
        }
    }
    ctx->pc = 0x1B9278u;
label_1b9278:
    // 0x1b9278: 0x285102f  dsubu       $v0, $s4, $a1
    ctx->pc = 0x1b9278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 5));
    // 0x1b927c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b927cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9280: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9280u;
    {
        const bool branch_taken_0x1b9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9280u;
            // 0x1b9284: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9280) {
            ctx->pc = 0x1B92B8u;
            goto label_1b92b8;
        }
    }
    ctx->pc = 0x1B9288u;
    // 0x1b9288: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1b9288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_1b928c:
    // 0x1b928c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9290: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x1b9290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x1b9294: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b9294u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9298: 0xc06e3c8  jal         func_1B8F20
    ctx->pc = 0x1B9298u;
    SET_GPR_U32(ctx, 31, 0x1B92A0u);
    ctx->pc = 0x1B929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9298u;
            // 0x1b929c: 0xfe030180  sd          $v1, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F20u;
    if (runtime->hasFunction(0x1B8F20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92A0u; }
        if (ctx->pc != 0x1B92A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F20_0x1b8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92A0u; }
        if (ctx->pc != 0x1B92A0u) { return; }
    }
    ctx->pc = 0x1B92A0u;
label_1b92a0:
    // 0x1b92a0: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1b92a4: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1b92a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b92a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b92ac: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1b92acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1b92b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1B92B0u;
    {
        const bool branch_taken_0x1b92b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92B0u;
            // 0x1b92b4: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92b0) {
            ctx->pc = 0x1B938Cu;
            goto label_1b938c;
        }
    }
    ctx->pc = 0x1B92B8u;
label_1b92b8:
    // 0x1b92b8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b92b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b92bc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b92bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b92c0: 0xc06e52a  jal         func_1B94A8
    ctx->pc = 0x1B92C0u;
    SET_GPR_U32(ctx, 31, 0x1B92C8u);
    ctx->pc = 0x1B92C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92C0u;
            // 0x1b92c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B94A8u;
    if (runtime->hasFunction(0x1B94A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B94A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92C8u; }
        if (ctx->pc != 0x1B92C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94A8_0x1b94a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92C8u; }
        if (ctx->pc != 0x1B92C8u) { return; }
    }
    ctx->pc = 0x1B92C8u;
label_1b92c8:
    // 0x1b92c8: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1b92c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b92cc: 0xde050138  ld          $a1, 0x138($s0)
    ctx->pc = 0x1b92ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x1b92d0: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B92D0u;
    SET_GPR_U32(ctx, 31, 0x1B92D8u);
    ctx->pc = 0x1B92D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92D0u;
            // 0x1b92d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92D8u; }
        if (ctx->pc != 0x1B92D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92D8u; }
        if (ctx->pc != 0x1B92D8u) { return; }
    }
    ctx->pc = 0x1B92D8u;
label_1b92d8:
    // 0x1b92d8: 0xde050140  ld          $a1, 0x140($s0)
    ctx->pc = 0x1b92d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1b92dc: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B92DCu;
    SET_GPR_U32(ctx, 31, 0x1B92E4u);
    ctx->pc = 0x1B92E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92DCu;
            // 0x1b92e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92E4u; }
        if (ctx->pc != 0x1B92E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92E4u; }
        if (ctx->pc != 0x1B92E4u) { return; }
    }
    ctx->pc = 0x1B92E4u;
label_1b92e4:
    // 0x1b92e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b92e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92e8: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B92E8u;
    {
        const bool branch_taken_0x1b92e8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B92ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92E8u;
            // 0x1b92ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92e8) {
            ctx->pc = 0x1B92F4u;
            goto label_1b92f4;
        }
    }
    ctx->pc = 0x1B92F0u;
    // 0x1b92f0: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x1b92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_1b92f4:
    // 0x1b92f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b92f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b92f8: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B92F8u;
    {
        const bool branch_taken_0x1b92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f8) {
            ctx->pc = 0x1B92FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92F8u;
            // 0x1b92fc: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9388u;
            goto label_1b9388;
        }
    }
    ctx->pc = 0x1B9300u;
    // 0x1b9300: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1b9300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b9304: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9304u;
    {
        const bool branch_taken_0x1b9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9304u;
            // 0x1b9308: 0x112078  dsll        $a0, $s1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9304) {
            ctx->pc = 0x1B9330u;
            goto label_1b9330;
        }
    }
    ctx->pc = 0x1B930Cu;
    // 0x1b930c: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B930Cu;
    SET_GPR_U32(ctx, 31, 0x1B9314u);
    ctx->pc = 0x1B9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B930Cu;
            // 0x1b9310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9314u; }
        if (ctx->pc != 0x1B9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9314u; }
        if (ctx->pc != 0x1B9314u) { return; }
    }
    ctx->pc = 0x1B9314u;
label_1b9314:
    // 0x1b9314: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x1b9314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1b9318: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x1b9318u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1b931c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1b931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b9320: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b9320u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b9324: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9328u;
    {
        const bool branch_taken_0x1b9328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9328u;
            // 0x1b932c: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9328) {
            ctx->pc = 0x1B9350u;
            goto label_1b9350;
        }
    }
    ctx->pc = 0x1B9330u;
label_1b9330:
    // 0x1b9330: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B9330u;
    SET_GPR_U32(ctx, 31, 0x1B9338u);
    ctx->pc = 0x1B9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9330u;
            // 0x1b9334: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9338u; }
        if (ctx->pc != 0x1B9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9338u; }
        if (ctx->pc != 0x1B9338u) { return; }
    }
    ctx->pc = 0x1B9338u;
label_1b9338:
    // 0x1b9338: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x1b9338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1b933c: 0x64440001  daddiu      $a0, $v0, 0x1
    ctx->pc = 0x1b933cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b9340: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1b9340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b9344: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b9344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b9348: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b934c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x1b934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_1b9350:
    // 0x1b9350: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B9350u;
    SET_GPR_U32(ctx, 31, 0x1B9358u);
    ctx->pc = 0x1B9354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9350u;
            // 0x1b9354: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9358u; }
        if (ctx->pc != 0x1B9358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9358u; }
        if (ctx->pc != 0x1B9358u) { return; }
    }
    ctx->pc = 0x1B9358u;
label_1b9358:
    // 0x1b9358: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1b9358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b935c: 0x22ffe  dsrl32      $a1, $v0, 31
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1b9360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9364: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x1b9364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1b9368: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x1b9368u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x1b936c: 0x5287b  dsra        $a1, $a1, 1
    ctx->pc = 0x1b936cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 1);
    // 0x1b9370: 0x285102d  daddu       $v0, $s4, $a1
    ctx->pc = 0x1b9370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1b9374: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b9374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b9378: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b9378u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b937c: 0xc06e542  jal         func_1B9508
    ctx->pc = 0x1B937Cu;
    SET_GPR_U32(ctx, 31, 0x1B9384u);
    ctx->pc = 0x1B9380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B937Cu;
            // 0x1b9380: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9508u;
    if (runtime->hasFunction(0x1B9508u)) {
        auto targetFn = runtime->lookupFunction(0x1B9508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9384u; }
        if (ctx->pc != 0x1B9384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9508_0x1b9508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9384u; }
        if (ctx->pc != 0x1B9384u) { return; }
    }
    ctx->pc = 0x1B9384u;
label_1b9384:
    // 0x1b9384: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1b9384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b9388:
    // 0x1b9388: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1b9388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_1b938c:
    // 0x1b938c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b9390:
    // 0x1b9390: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9390u;
    {
        const bool branch_taken_0x1b9390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9390) {
            ctx->pc = 0x1B9394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9390u;
            // 0x1b9394: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B93BCu;
            goto label_1b93bc;
        }
    }
    ctx->pc = 0x1B9398u;
    // 0x1b9398: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x1b9398u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b939c: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1b939cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b93a0: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B93A0u;
    SET_GPR_U32(ctx, 31, 0x1B93A8u);
    ctx->pc = 0x1B93A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93A0u;
            // 0x1b93a4: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93A8u; }
        if (ctx->pc != 0x1B93A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93A8u; }
        if (ctx->pc != 0x1B93A8u) { return; }
    }
    ctx->pc = 0x1B93A8u;
label_1b93a8:
    // 0x1b93a8: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x1b93a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b93ac: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B93ACu;
    SET_GPR_U32(ctx, 31, 0x1B93B4u);
    ctx->pc = 0x1B93B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93ACu;
            // 0x1b93b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93B4u; }
        if (ctx->pc != 0x1B93B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93B4u; }
        if (ctx->pc != 0x1B93B4u) { return; }
    }
    ctx->pc = 0x1B93B4u;
label_1b93b4:
    // 0x1b93b4: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x1b93b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1b93b8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1b93b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_1b93bc:
    // 0x1b93bc: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x1b93bcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x1b93c0: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1b93c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b93c4: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1b93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1b93c8: 0xde040128  ld          $a0, 0x128($s0)
    ctx->pc = 0x1b93c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1b93cc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1b93ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b93d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B93D0u;
    {
        const bool branch_taken_0x1b93d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93d0) {
            ctx->pc = 0x1B93D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93D0u;
            // 0x1b93d4: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B93E8u;
            goto label_1b93e8;
        }
    }
    ctx->pc = 0x1B93D8u;
    // 0x1b93d8: 0xfec40000  sd          $a0, 0x0($s6)
    ctx->pc = 0x1b93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 4));
    // 0x1b93dc: 0xde020130  ld          $v0, 0x130($s0)
    ctx->pc = 0x1b93dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b93e0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1b93e0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1b93e4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_1b93e8:
    // 0x1b93e8: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x1b93e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x1b93ec: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1b93ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b93f0: 0xfe030110  sd          $v1, 0x110($s0)
    ctx->pc = 0x1b93f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 3));
    // 0x1b93f4: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1b93f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b93f8: 0xfe020118  sd          $v0, 0x118($s0)
    ctx->pc = 0x1b93f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 2));
    // 0x1b93fc: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1b93fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b9400: 0xfe030120  sd          $v1, 0x120($s0)
    ctx->pc = 0x1b9400u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 3));
    // 0x1b9404: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x1b9404u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b9408: 0xfe020128  sd          $v0, 0x128($s0)
    ctx->pc = 0x1b9408u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 2));
    // 0x1b940c: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x1b940cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1b9410: 0xfe030130  sd          $v1, 0x130($s0)
    ctx->pc = 0x1b9410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 3));
    // 0x1b9414: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b9414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9418: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x1b9418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b941c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1b941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1b9420: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1b9420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9424: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1b9424u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1b9428: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9428u;
    {
        const bool branch_taken_0x1b9428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9428) {
            ctx->pc = 0x1B942Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9428u;
            // 0x1b942c: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9458u;
            goto label_1b9458;
        }
    }
    ctx->pc = 0x1B9430u;
    // 0x1b9430: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x1b9430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1b9434: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1b9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1b9438: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x1b9438u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b943c: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x1b943cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b9440: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1b9440u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1b9444: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x1b9444u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1b9448: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x1b9448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x1b944c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B944Cu;
    {
        const bool branch_taken_0x1b944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B944Cu;
            // 0x1b9450: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b944c) {
            ctx->pc = 0x1B9474u;
            goto label_1b9474;
        }
    }
    ctx->pc = 0x1B9454u;
    // 0x1b9454: 0x0  nop
    ctx->pc = 0x1b9454u;
    // NOP
label_1b9458:
    // 0x1b9458: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1b945c: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9460: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x1b9460u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b9464: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1b9464u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1b9468: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x1b9468u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1b946c: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1b946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1b9470: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x1b9470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
label_1b9474:
    // 0x1b9474: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b9478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b947c: 0xac509bf8  sw          $s0, -0x6408($v0)
    ctx->pc = 0x1b947cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941688), GPR_U32(ctx, 16));
    // 0x1b9480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b948c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b948cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9490: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b9490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9494: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9498: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b9498u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b949c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b94a0: 0x806e5cc  j           func_1B9730
    ctx->pc = 0x1B94A0u;
    ctx->pc = 0x1B94A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94A0u;
            // 0x1b94a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9730u;
    {
        auto targetFn = runtime->lookupFunction(0x1B9730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B94A8u;
}
