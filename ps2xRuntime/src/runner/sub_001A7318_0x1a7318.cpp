#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7318
// Address: 0x1a7318 - 0x1a7398
void sub_001A7318_0x1a7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7318_0x1a7318");
#endif

    switch (ctx->pc) {
        case 0x1a7338u: goto label_1a7338;
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7374u: goto label_1a7374;
        default: break;
    }

    ctx->pc = 0x1a7318u;

    // 0x1a7318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a731c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a7320: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7324: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a7328: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a732c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a7330: 0xc064ae6  jal         func_192B98
    ctx->pc = 0x1A7330u;
    SET_GPR_U32(ctx, 31, 0x1A7338u);
    ctx->pc = 0x1A7334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7330u;
            // 0x1a7334: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B98u;
    if (runtime->hasFunction(0x192B98u)) {
        auto targetFn = runtime->lookupFunction(0x192B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7338u; }
        if (ctx->pc != 0x1A7338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B98_0x192b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7338u; }
        if (ctx->pc != 0x1A7338u) { return; }
    }
    ctx->pc = 0x1A7338u;
label_1a7338:
    // 0x1a7338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a733c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1a733cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a7340: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a7344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a7344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7348: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x1a7348u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x1a734c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a734cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7350: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a7350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7354: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a7358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a735c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A735Cu;
    {
        const bool branch_taken_0x1a735c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A735Cu;
            // 0x1a7360: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a735c) {
            ctx->pc = 0x1A737Cu;
            goto label_1a737c;
        }
    }
    ctx->pc = 0x1A7364u;
    // 0x1a7364: 0xc064224  jal         func_190890
    ctx->pc = 0x1A7364u;
    SET_GPR_U32(ctx, 31, 0x1A736Cu);
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A736Cu; }
        if (ctx->pc != 0x1A736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190890_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A736Cu; }
        if (ctx->pc != 0x1A736Cu) { return; }
    }
    ctx->pc = 0x1A736Cu;
label_1a736c:
    // 0x1a736c: 0xc064b4e  jal         func_192D38
    ctx->pc = 0x1A736Cu;
    SET_GPR_U32(ctx, 31, 0x1A7374u);
    ctx->pc = 0x1A7370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A736Cu;
            // 0x1a7370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D38u;
    if (runtime->hasFunction(0x192D38u)) {
        auto targetFn = runtime->lookupFunction(0x192D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7374u; }
        if (ctx->pc != 0x1A7374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D38_0x192d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7374u; }
        if (ctx->pc != 0x1A7374u) { return; }
    }
    ctx->pc = 0x1A7374u;
label_1a7374:
    // 0x1a7374: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7378: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a737c:
    // 0x1a737c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7380: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a7380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7384: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7388: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a7388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a738c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A738Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A738Cu;
            // 0x1a7390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7394u;
    // 0x1a7394: 0x0  nop
    ctx->pc = 0x1a7394u;
    // NOP
}
