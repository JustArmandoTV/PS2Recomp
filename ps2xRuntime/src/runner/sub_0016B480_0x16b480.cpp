#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B480
// Address: 0x16b480 - 0x16b530
void sub_0016B480_0x16b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B480_0x16b480");
#endif

    switch (ctx->pc) {
        case 0x16b4a0u: goto label_16b4a0;
        case 0x16b50cu: goto label_16b50c;
        case 0x16b518u: goto label_16b518;
        default: break;
    }

    ctx->pc = 0x16b480u;

    // 0x16b480: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x16b484: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b488: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b48c: 0x24a53528  addiu       $a1, $a1, 0x3528
    ctx->pc = 0x16b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13608));
    // 0x16b490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b494: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b498: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x16B498u;
    SET_GPR_U32(ctx, 31, 0x16B4A0u);
    ctx->pc = 0x16B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B498u;
            // 0x16b49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A0u; }
        if (ctx->pc != 0x16B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A0u; }
        if (ctx->pc != 0x16B4A0u) { return; }
    }
    ctx->pc = 0x16B4A0u;
label_16b4a0:
    // 0x16b4a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16B4A0u;
    {
        const bool branch_taken_0x16b4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4A0u;
            // 0x16b4a4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4a0) {
            ctx->pc = 0x16B4D0u;
            goto label_16b4d0;
        }
    }
    ctx->pc = 0x16B4A8u;
    // 0x16b4a8: 0x92050005  lbu         $a1, 0x5($s0)
    ctx->pc = 0x16b4a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x16b4ac: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x16b4acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x16b4b0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x16b4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x16b4b4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x16b4b8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x16b4b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16b4bc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x16b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x16b4c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16b4c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16b4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16b4c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16b4cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16b4d0:
    // 0x16b4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b4d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4D8u;
            // 0x16b4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B4E0u;
    // 0x16b4e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4E4u;
            // 0x16b4e8: 0xac447ab0  sw          $a0, 0x7AB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B4ECu;
    // 0x16b4ec: 0x0  nop
    ctx->pc = 0x16b4ecu;
    // NOP
    // 0x16b4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b4f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b504: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B504u;
    SET_GPR_U32(ctx, 31, 0x16B50Cu);
    ctx->pc = 0x16B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B504u;
            // 0x16b508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B50Cu; }
        if (ctx->pc != 0x16B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B50Cu; }
        if (ctx->pc != 0x16B50Cu) { return; }
    }
    ctx->pc = 0x16B50Cu;
label_16b50c:
    // 0x16b50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b510: 0xc05ad4c  jal         func_16B530
    ctx->pc = 0x16B510u;
    SET_GPR_U32(ctx, 31, 0x16B518u);
    ctx->pc = 0x16B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B510u;
            // 0x16b514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B530u;
    if (runtime->hasFunction(0x16B530u)) {
        auto targetFn = runtime->lookupFunction(0x16B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B518u; }
        if (ctx->pc != 0x16B518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B530_0x16b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B518u; }
        if (ctx->pc != 0x16B518u) { return; }
    }
    ctx->pc = 0x16B518u;
label_16b518:
    // 0x16b518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b524: 0x805adca  j           func_16B728
    ctx->pc = 0x16B524u;
    ctx->pc = 0x16B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B524u;
            // 0x16b528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B728_0x16b728(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B52Cu;
    // 0x16b52c: 0x0  nop
    ctx->pc = 0x16b52cu;
    // NOP
}
