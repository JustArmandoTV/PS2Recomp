#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE900
// Address: 0x2fe900 - 0x2fe990
void sub_002FE900_0x2fe900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE900_0x2fe900");
#endif

    switch (ctx->pc) {
        case 0x2fe924u: goto label_2fe924;
        case 0x2fe940u: goto label_2fe940;
        case 0x2fe95cu: goto label_2fe95c;
        case 0x2fe978u: goto label_2fe978;
        default: break;
    }

    ctx->pc = 0x2fe900u;

    // 0x2fe900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe90c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2fe90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fe910: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE910u;
    {
        const bool branch_taken_0x2fe910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE910u;
            // 0x2fe914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe910) {
            ctx->pc = 0x2FE928u;
            goto label_2fe928;
        }
    }
    ctx->pc = 0x2FE918u;
    // 0x2fe918: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fe918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2fe91c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2FE91Cu;
    SET_GPR_U32(ctx, 31, 0x2FE924u);
    ctx->pc = 0x2FE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE91Cu;
            // 0x2fe920: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE924u; }
        if (ctx->pc != 0x2FE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE924u; }
        if (ctx->pc != 0x2FE924u) { return; }
    }
    ctx->pc = 0x2FE924u;
label_2fe924:
    // 0x2fe924: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2fe924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2fe928:
    // 0x2fe928: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fe928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fe92c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE92Cu;
    {
        const bool branch_taken_0x2fe92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe92c) {
            ctx->pc = 0x2FE930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE92Cu;
            // 0x2fe930: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE948u;
            goto label_2fe948;
        }
    }
    ctx->pc = 0x2FE934u;
    // 0x2fe934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fe934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2fe938: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2FE938u;
    SET_GPR_U32(ctx, 31, 0x2FE940u);
    ctx->pc = 0x2FE93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE938u;
            // 0x2fe93c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE940u; }
        if (ctx->pc != 0x2FE940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE940u; }
        if (ctx->pc != 0x2FE940u) { return; }
    }
    ctx->pc = 0x2FE940u;
label_2fe940:
    // 0x2fe940: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2fe940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2fe944: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2fe944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fe948:
    // 0x2fe948: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE948u;
    {
        const bool branch_taken_0x2fe948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe948) {
            ctx->pc = 0x2FE94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE948u;
            // 0x2fe94c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE964u;
            goto label_2fe964;
        }
    }
    ctx->pc = 0x2FE950u;
    // 0x2fe950: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fe950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2fe954: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2FE954u;
    SET_GPR_U32(ctx, 31, 0x2FE95Cu);
    ctx->pc = 0x2FE958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE954u;
            // 0x2fe958: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE95Cu; }
        if (ctx->pc != 0x2FE95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE95Cu; }
        if (ctx->pc != 0x2FE95Cu) { return; }
    }
    ctx->pc = 0x2FE95Cu;
label_2fe95c:
    // 0x2fe95c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2fe95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2fe960: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2fe960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fe964:
    // 0x2fe964: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE964u;
    {
        const bool branch_taken_0x2fe964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe964) {
            ctx->pc = 0x2FE968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE964u;
            // 0x2fe968: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE980u;
            goto label_2fe980;
        }
    }
    ctx->pc = 0x2FE96Cu;
    // 0x2fe96c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fe96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2fe970: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2FE970u;
    SET_GPR_U32(ctx, 31, 0x2FE978u);
    ctx->pc = 0x2FE974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE970u;
            // 0x2fe974: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE978u; }
        if (ctx->pc != 0x2FE978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE978u; }
        if (ctx->pc != 0x2FE978u) { return; }
    }
    ctx->pc = 0x2FE978u;
label_2fe978:
    // 0x2fe978: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fe978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2fe97c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe980:
    // 0x2fe980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe984: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE984u;
            // 0x2fe988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE98Cu;
    // 0x2fe98c: 0x0  nop
    ctx->pc = 0x2fe98cu;
    // NOP
}
