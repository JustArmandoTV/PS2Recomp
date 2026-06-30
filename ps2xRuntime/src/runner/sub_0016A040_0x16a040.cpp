#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A040
// Address: 0x16a040 - 0x16a108
void sub_0016A040_0x16a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A040_0x16a040");
#endif

    switch (ctx->pc) {
        case 0x16a06cu: goto label_16a06c;
        case 0x16a07cu: goto label_16a07c;
        case 0x16a094u: goto label_16a094;
        case 0x16a0acu: goto label_16a0ac;
        case 0x16a0b4u: goto label_16a0b4;
        case 0x16a0c4u: goto label_16a0c4;
        default: break;
    }

    ctx->pc = 0x16a040u;

    // 0x16a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a050: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a054: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a064: 0xc05a148  jal         func_168520
    ctx->pc = 0x16A064u;
    SET_GPR_U32(ctx, 31, 0x16A06Cu);
    ctx->pc = 0x16A068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A064u;
            // 0x16a068: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A06Cu; }
        if (ctx->pc != 0x16A06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A06Cu; }
        if (ctx->pc != 0x16A06Cu) { return; }
    }
    ctx->pc = 0x16A06Cu;
label_16a06c:
    // 0x16a06c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16A06Cu;
    {
        const bool branch_taken_0x16a06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A06Cu;
            // 0x16a070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a06c) {
            ctx->pc = 0x16A0F0u;
            goto label_16a0f0;
        }
    }
    ctx->pc = 0x16A074u;
    // 0x16a074: 0xc05ab86  jal         func_16AE18
    ctx->pc = 0x16A074u;
    SET_GPR_U32(ctx, 31, 0x16A07Cu);
    ctx->pc = 0x16AE18u;
    if (runtime->hasFunction(0x16AE18u)) {
        auto targetFn = runtime->lookupFunction(0x16AE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A07Cu; }
        if (ctx->pc != 0x16A07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AE18_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A07Cu; }
        if (ctx->pc != 0x16A07Cu) { return; }
    }
    ctx->pc = 0x16A07Cu;
label_16a07c:
    // 0x16a07c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a080: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x16a084: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A084u;
    {
        const bool branch_taken_0x16a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16A088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A084u;
            // 0x16a088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a084) {
            ctx->pc = 0x16A094u;
            goto label_16a094;
        }
    }
    ctx->pc = 0x16A08Cu;
    // 0x16a08c: 0xc05a9c6  jal         func_16A718
    ctx->pc = 0x16A08Cu;
    SET_GPR_U32(ctx, 31, 0x16A094u);
    ctx->pc = 0x16A718u;
    if (runtime->hasFunction(0x16A718u)) {
        auto targetFn = runtime->lookupFunction(0x16A718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A094u; }
        if (ctx->pc != 0x16A094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A718_0x16a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A094u; }
        if (ctx->pc != 0x16A094u) { return; }
    }
    ctx->pc = 0x16A094u;
label_16a094:
    // 0x16a094: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x16a094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a098: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A098u;
    {
        const bool branch_taken_0x16a098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A098u;
            // 0x16a09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a098) {
            ctx->pc = 0x16A0B4u;
            goto label_16a0b4;
        }
    }
    ctx->pc = 0x16A0A0u;
    // 0x16a0a0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x16a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a0a4: 0xc05c2b2  jal         func_170AC8
    ctx->pc = 0x16A0A4u;
    SET_GPR_U32(ctx, 31, 0x16A0ACu);
    ctx->pc = 0x16A0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0A4u;
            // 0x16a0a8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0ACu; }
        if (ctx->pc != 0x16A0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AC8_0x170ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0ACu; }
        if (ctx->pc != 0x16A0ACu) { return; }
    }
    ctx->pc = 0x16A0ACu;
label_16a0ac:
    // 0x16a0ac: 0xc05c20c  jal         func_170830
    ctx->pc = 0x16A0ACu;
    SET_GPR_U32(ctx, 31, 0x16A0B4u);
    ctx->pc = 0x16A0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0ACu;
            // 0x16a0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0B4u; }
        if (ctx->pc != 0x16A0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170830_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0B4u; }
        if (ctx->pc != 0x16A0B4u) { return; }
    }
    ctx->pc = 0x16A0B4u;
label_16a0b4:
    // 0x16a0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0bc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16A0BCu;
    SET_GPR_U32(ctx, 31, 0x16A0C4u);
    ctx->pc = 0x16A0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0BCu;
            // 0x16a0c0: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0C4u; }
        if (ctx->pc != 0x16A0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0C4u; }
        if (ctx->pc != 0x16A0C4u) { return; }
    }
    ctx->pc = 0x16A0C4u;
label_16a0c4:
    // 0x16a0c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a0c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a0d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a0dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a0e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16a0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a0e4: 0x805a148  j           func_168520
    ctx->pc = 0x16A0E4u;
    ctx->pc = 0x16A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0E4u;
            // 0x16a0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168520_0x168520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A0ECu;
    // 0x16a0ec: 0x0  nop
    ctx->pc = 0x16a0ecu;
    // NOP
label_16a0f0:
    // 0x16a0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a0f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0FCu;
            // 0x16a100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A104u;
    // 0x16a104: 0x0  nop
    ctx->pc = 0x16a104u;
    // NOP
}
