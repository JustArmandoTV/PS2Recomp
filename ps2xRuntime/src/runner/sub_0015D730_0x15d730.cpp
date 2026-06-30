#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D730
// Address: 0x15d730 - 0x15d8c0
void sub_0015D730_0x15d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D730_0x15d730");
#endif

    switch (ctx->pc) {
        case 0x15d760u: goto label_15d760;
        case 0x15d778u: goto label_15d778;
        case 0x15d7bcu: goto label_15d7bc;
        default: break;
    }

    ctx->pc = 0x15d730u;

    // 0x15d730: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d734: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x15d738: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15d73c: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x15d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x15d740: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x15d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x15d744: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15d748: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15d74c: 0x80a9604  j           func_2A5810
    ctx->pc = 0x15D74Cu;
    ctx->pc = 0x15D750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D74Cu;
            // 0x15d750: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5810u;
    {
        auto targetFn = runtime->lookupFunction(0x2A5810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15D754u;
    // 0x15d754: 0x0  nop
    ctx->pc = 0x15d754u;
    // NOP
    // 0x15d758: 0x0  nop
    ctx->pc = 0x15d758u;
    // NOP
    // 0x15d75c: 0x0  nop
    ctx->pc = 0x15d75cu;
    // NOP
label_15d760:
    // 0x15d760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d768: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x15d76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d770: 0xc047ee8  jal         func_11FBA0
    ctx->pc = 0x15D770u;
    SET_GPR_U32(ctx, 31, 0x15D778u);
    ctx->pc = 0x15D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D770u;
            // 0x15d774: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FBA0u;
    if (runtime->hasFunction(0x11FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x11FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D778u; }
        if (ctx->pc != 0x15D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011FBA0_0x11fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D778u; }
        if (ctx->pc != 0x15D778u) { return; }
    }
    ctx->pc = 0x15D778u;
label_15d778:
    // 0x15d778: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15D778u;
    {
        const bool branch_taken_0x15d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d778) {
            ctx->pc = 0x15D77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D778u;
            // 0x15d77c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D7B4u;
            goto label_15d7b4;
        }
    }
    ctx->pc = 0x15D780u;
    // 0x15d780: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15d784: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15d788: 0xa3a20029  sb          $v0, 0x29($sp)
    ctx->pc = 0x15d788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d78c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d790: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15d794: 0xa3a0002f  sb          $zero, 0x2F($sp)
    ctx->pc = 0x15d794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d798: 0xa3a2002a  sb          $v0, 0x2A($sp)
    ctx->pc = 0x15d798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d79c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d7a0: 0xa3a40028  sb          $a0, 0x28($sp)
    ctx->pc = 0x15d7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d7a4: 0xa3a4002b  sb          $a0, 0x2B($sp)
    ctx->pc = 0x15d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x15d7a8: 0xa3a3002d  sb          $v1, 0x2D($sp)
    ctx->pc = 0x15d7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d7ac: 0xa3a2002e  sb          $v0, 0x2E($sp)
    ctx->pc = 0x15d7acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d7b0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x15d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_15d7b4:
    // 0x15d7b4: 0xc0578ba  jal         func_15E2E8
    ctx->pc = 0x15D7B4u;
    SET_GPR_U32(ctx, 31, 0x15D7BCu);
    ctx->pc = 0x15E2E8u;
    if (runtime->hasFunction(0x15E2E8u)) {
        auto targetFn = runtime->lookupFunction(0x15E2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7BCu; }
        if (ctx->pc != 0x15D7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E2E8_0x15e2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7BCu; }
        if (ctx->pc != 0x15D7BCu) { return; }
    }
    ctx->pc = 0x15D7BCu;
label_15d7bc:
    // 0x15d7bc: 0x93a3002f  lbu         $v1, 0x2F($sp)
    ctx->pc = 0x15d7bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x15d7c0: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d7c4: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d7c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d7cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d7d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d7d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d7d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15d7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15d7dc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15d7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d7e0: 0x93a3002e  lbu         $v1, 0x2E($sp)
    ctx->pc = 0x15d7e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x15d7e4: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d7e8: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d7ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d7f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d7f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d7f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d7fc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x15d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d800: 0x93a3002d  lbu         $v1, 0x2D($sp)
    ctx->pc = 0x15d800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x15d804: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d808: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d80c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d814: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d818: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d81c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x15d81cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d820: 0x93a3002b  lbu         $v1, 0x2B($sp)
    ctx->pc = 0x15d820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 43)));
    // 0x15d824: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d828: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d828u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d82c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d834: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d838: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d83c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x15d83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d840: 0x93a3002a  lbu         $v1, 0x2A($sp)
    ctx->pc = 0x15d840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
    // 0x15d844: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d848: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d848u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d84c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d854: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d858: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d85c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x15d85cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d860: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x15d860u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x15d864: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x15d864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d868: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x15d86c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d874: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d878: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d87c: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x15d87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d888: 0x3e00008  jr          $ra
    ctx->pc = 0x15D888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D888u;
            // 0x15d88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D890u;
    // 0x15d890: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15d894: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x15d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x15d898: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x15d89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d8a0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x15d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x15d8a4: 0xf  sync
    ctx->pc = 0x15d8a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15d8a8: 0x42000038  ei
    ctx->pc = 0x15d8a8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x15d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15D8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8ACu;
            // 0x15d8b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D8B4u;
    // 0x15d8b4: 0x0  nop
    ctx->pc = 0x15d8b4u;
    // NOP
    // 0x15d8b8: 0x0  nop
    ctx->pc = 0x15d8b8u;
    // NOP
    // 0x15d8bc: 0x0  nop
    ctx->pc = 0x15d8bcu;
    // NOP
}
