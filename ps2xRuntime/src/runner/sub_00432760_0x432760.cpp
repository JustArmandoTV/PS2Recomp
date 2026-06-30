#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00432760
// Address: 0x432760 - 0x4327f0
void sub_00432760_0x432760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432760_0x432760");
#endif

    switch (ctx->pc) {
        case 0x432780u: goto label_432780;
        case 0x432790u: goto label_432790;
        case 0x4327ccu: goto label_4327cc;
        default: break;
    }

    ctx->pc = 0x432760u;

    // 0x432760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x432760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x432764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x432764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x432768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43276c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x43276cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x432770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432770u;
    {
        const bool branch_taken_0x432770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432770u;
            // 0x432774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432770) {
            ctx->pc = 0x432788u;
            goto label_432788;
        }
    }
    ctx->pc = 0x432778u;
    // 0x432778: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432778u;
    SET_GPR_U32(ctx, 31, 0x432780u);
    ctx->pc = 0x43277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432778u;
            // 0x43277c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432780u; }
        if (ctx->pc != 0x432780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432780u; }
        if (ctx->pc != 0x432780u) { return; }
    }
    ctx->pc = 0x432780u;
label_432780:
    // 0x432780: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x432780u;
    {
        const bool branch_taken_0x432780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432780u;
            // 0x432784: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432780) {
            ctx->pc = 0x4327BCu;
            goto label_4327bc;
        }
    }
    ctx->pc = 0x432788u;
label_432788:
    // 0x432788: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432788u;
    SET_GPR_U32(ctx, 31, 0x432790u);
    ctx->pc = 0x43278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432788u;
            // 0x43278c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432790u; }
        if (ctx->pc != 0x432790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432790u; }
        if (ctx->pc != 0x432790u) { return; }
    }
    ctx->pc = 0x432790u;
label_432790:
    // 0x432790: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432790u;
    {
        const bool branch_taken_0x432790 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x432790) {
            ctx->pc = 0x432794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432790u;
            // 0x432794: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4327B8u;
            goto label_4327b8;
        }
    }
    ctx->pc = 0x432798u;
    // 0x432798: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x432798u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x43279c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4327a0: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x4327a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x4327a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4327a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4327a8: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x4327a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x4327ac: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4327ACu;
    {
        const bool branch_taken_0x4327ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4327ac) {
            ctx->pc = 0x4327B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4327ACu;
            // 0x4327b0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4327BCu;
            goto label_4327bc;
        }
    }
    ctx->pc = 0x4327B4u;
    // 0x4327b4: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x4327b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_4327b8:
    // 0x4327b8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x4327b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4327bc:
    // 0x4327bc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4327BCu;
    {
        const bool branch_taken_0x4327bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4327bc) {
            ctx->pc = 0x4327C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4327BCu;
            // 0x4327c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4327DCu;
            goto label_4327dc;
        }
    }
    ctx->pc = 0x4327C4u;
    // 0x4327c4: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x4327C4u;
    SET_GPR_U32(ctx, 31, 0x4327CCu);
    ctx->pc = 0x4327C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4327C4u;
            // 0x4327c8: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4327CCu; }
        if (ctx->pc != 0x4327CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4327CCu; }
        if (ctx->pc != 0x4327CCu) { return; }
    }
    ctx->pc = 0x4327CCu;
label_4327cc:
    // 0x4327cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4327ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4327d0: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x4327d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x4327d4: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x4327d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x4327d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4327d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4327dc:
    // 0x4327dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4327dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4327e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4327E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4327E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4327E0u;
            // 0x4327e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4327E8u;
    // 0x4327e8: 0x0  nop
    ctx->pc = 0x4327e8u;
    // NOP
    // 0x4327ec: 0x0  nop
    ctx->pc = 0x4327ecu;
    // NOP
}
