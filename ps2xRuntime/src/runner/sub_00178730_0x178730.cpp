#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178730
// Address: 0x178730 - 0x1787f8
void sub_00178730_0x178730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178730_0x178730");
#endif

    switch (ctx->pc) {
        case 0x178770u: goto label_178770;
        case 0x1787a0u: goto label_1787a0;
        case 0x1787acu: goto label_1787ac;
        default: break;
    }

    ctx->pc = 0x178730u;

    // 0x178730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17873c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178740: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178740u;
    {
        const bool branch_taken_0x178740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178740u;
            // 0x178744: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178740) {
            ctx->pc = 0x178768u;
            goto label_178768;
        }
    }
    ctx->pc = 0x178748u;
    // 0x178748: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17874c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17874cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178754: 0x24844bc8  addiu       $a0, $a0, 0x4BC8
    ctx->pc = 0x178754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19400));
    // 0x178758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17875c: 0x805e0a6  j           func_178298
    ctx->pc = 0x17875Cu;
    ctx->pc = 0x178760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17875Cu;
            // 0x178760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178764u;
    // 0x178764: 0x0  nop
    ctx->pc = 0x178764u;
    // NOP
label_178768:
    // 0x178768: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x178768u;
    SET_GPR_U32(ctx, 31, 0x178770u);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178770u; }
        if (ctx->pc != 0x178770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178770u; }
        if (ctx->pc != 0x178770u) { return; }
    }
    ctx->pc = 0x178770u;
label_178770:
    // 0x178770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178774: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178774u;
    {
        const bool branch_taken_0x178774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x178778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178774u;
            // 0x178778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178774) {
            ctx->pc = 0x178798u;
            goto label_178798;
        }
    }
    ctx->pc = 0x17877Cu;
    // 0x17877c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17877cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178780: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x178784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17878c: 0xa040d5d8  sb          $zero, -0x2A28($v0)
    ctx->pc = 0x17878cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956504), (uint8_t)GPR_U32(ctx, 0));
    // 0x178790: 0x3e00008  jr          $ra
    ctx->pc = 0x178790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178790u;
            // 0x178794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178798u;
label_178798:
    // 0x178798: 0xc05e17e  jal         func_1785F8
    ctx->pc = 0x178798u;
    SET_GPR_U32(ctx, 31, 0x1787A0u);
    ctx->pc = 0x1785F8u;
    if (runtime->hasFunction(0x1785F8u)) {
        auto targetFn = runtime->lookupFunction(0x1785F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787A0u; }
        if (ctx->pc != 0x1787A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001785F8_0x1785f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787A0u; }
        if (ctx->pc != 0x1787A0u) { return; }
    }
    ctx->pc = 0x1787A0u;
label_1787a0:
    // 0x1787a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787a4: 0xc05e1fe  jal         func_1787F8
    ctx->pc = 0x1787A4u;
    SET_GPR_U32(ctx, 31, 0x1787ACu);
    ctx->pc = 0x1787A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787A4u;
            // 0x1787a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1787F8u;
    if (runtime->hasFunction(0x1787F8u)) {
        auto targetFn = runtime->lookupFunction(0x1787F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787ACu; }
        if (ctx->pc != 0x1787ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001787F8_0x1787f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1787ACu; }
        if (ctx->pc != 0x1787ACu) { return; }
    }
    ctx->pc = 0x1787ACu;
label_1787ac:
    // 0x1787ac: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1787acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1787b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1787b4: 0x2484d5d8  addiu       $a0, $a0, -0x2A28
    ctx->pc = 0x1787b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956504));
    // 0x1787b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1787b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787bc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1787BCu;
    {
        const bool branch_taken_0x1787bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1787C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1787BCu;
            // 0x1787c0: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787bc) {
            ctx->pc = 0x1787D8u;
            goto label_1787d8;
        }
    }
    ctx->pc = 0x1787C4u;
    // 0x1787c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1787c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1787c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1787c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1787cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1787ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1787d0: 0x804a508  j           func_129420
    ctx->pc = 0x1787D0u;
    ctx->pc = 0x1787D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787D0u;
            // 0x1787d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1787D8u;
label_1787d8:
    // 0x1787d8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1787d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1787dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1787dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1787e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1787e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1787e4: 0x24844bf0  addiu       $a0, $a0, 0x4BF0
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19440));
    // 0x1787e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1787ec: 0x805e0a6  j           func_178298
    ctx->pc = 0x1787ECu;
    ctx->pc = 0x1787F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1787ECu;
            // 0x1787f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1787F4u;
    // 0x1787f4: 0x0  nop
    ctx->pc = 0x1787f4u;
    // NOP
}
