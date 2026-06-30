#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100440
// Address: 0x100440 - 0x1004e0
void sub_00100440_0x100440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100440_0x100440");
#endif

    switch (ctx->pc) {
        case 0x100468u: goto label_100468;
        case 0x100484u: goto label_100484;
        case 0x1004b4u: goto label_1004b4;
        default: break;
    }

    ctx->pc = 0x100440u;

    // 0x100440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10044c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100454: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x100454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x100458: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x10045c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x10045cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x100460: 0xc04010c  jal         func_100430
    ctx->pc = 0x100460u;
    SET_GPR_U32(ctx, 31, 0x100468u);
    ctx->pc = 0x100464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100460u;
            // 0x100464: 0x24a5e090  addiu       $a1, $a1, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100430u;
    if (runtime->hasFunction(0x100430u)) {
        auto targetFn = runtime->lookupFunction(0x100430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100468u; }
        if (ctx->pc != 0x100468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100430_0x100430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100468u; }
        if (ctx->pc != 0x100468u) { return; }
    }
    ctx->pc = 0x100468u;
label_100468:
    // 0x100468: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100468u;
    {
        const bool branch_taken_0x100468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100468) {
            ctx->pc = 0x10048Cu;
            goto label_10048c;
        }
    }
    ctx->pc = 0x100470u;
    // 0x100470: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x100474: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x100474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x100478: 0x8c45b6b0  lw          $a1, -0x4950($v0)
    ctx->pc = 0x100478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x10047c: 0xc0400ec  jal         func_1003B0
    ctx->pc = 0x10047Cu;
    SET_GPR_U32(ctx, 31, 0x100484u);
    ctx->pc = 0x100480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10047Cu;
            // 0x100480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003B0u;
    if (runtime->hasFunction(0x1003B0u)) {
        auto targetFn = runtime->lookupFunction(0x1003B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100484u; }
        if (ctx->pc != 0x100484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003B0_0x1003b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100484u; }
        if (ctx->pc != 0x100484u) { return; }
    }
    ctx->pc = 0x100484u;
label_100484:
    // 0x100484: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x100484u;
    {
        const bool branch_taken_0x100484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100484u;
            // 0x100488: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100484) {
            ctx->pc = 0x1004C8u;
            goto label_1004c8;
        }
    }
    ctx->pc = 0x10048Cu;
label_10048c:
    // 0x10048c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x10048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x100490: 0x8c45b6b0  lw          $a1, -0x4950($v0)
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x100494: 0x2ca10015  sltiu       $at, $a1, 0x15
    ctx->pc = 0x100494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x100498: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x100498u;
    {
        const bool branch_taken_0x100498 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x100498) {
            ctx->pc = 0x10049Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100498u;
            // 0x10049c: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1004A4u;
            goto label_1004a4;
        }
    }
    ctx->pc = 0x1004A0u;
    // 0x1004a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1004a4:
    // 0x1004a4: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1004a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1004a8: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x1004a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1004ac: 0xc0400ec  jal         func_1003B0
    ctx->pc = 0x1004ACu;
    SET_GPR_U32(ctx, 31, 0x1004B4u);
    ctx->pc = 0x1004B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1004ACu;
            // 0x1004b0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003B0u;
    if (runtime->hasFunction(0x1003B0u)) {
        auto targetFn = runtime->lookupFunction(0x1003B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B4u; }
        if (ctx->pc != 0x1004B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003B0_0x1003b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B4u; }
        if (ctx->pc != 0x1004B4u) { return; }
    }
    ctx->pc = 0x1004B4u;
label_1004b4:
    // 0x1004b4: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1004b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1004b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1004b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1004bc: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x1004bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
    // 0x1004c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1004c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1004c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1004c8:
    // 0x1004c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1004c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1004ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004D0u;
            // 0x1004d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1004D8u;
    // 0x1004d8: 0x0  nop
    ctx->pc = 0x1004d8u;
    // NOP
    // 0x1004dc: 0x0  nop
    ctx->pc = 0x1004dcu;
    // NOP
}
