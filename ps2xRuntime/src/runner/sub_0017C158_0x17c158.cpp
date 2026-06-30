#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C158
// Address: 0x17c158 - 0x17c278
void sub_0017C158_0x17c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C158_0x17c158");
#endif

    switch (ctx->pc) {
        case 0x17c198u: goto label_17c198;
        case 0x17c1e0u: goto label_17c1e0;
        case 0x17c214u: goto label_17c214;
        default: break;
    }

    ctx->pc = 0x17c158u;

    // 0x17c158: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x17c15c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c160: 0x24e7d740  addiu       $a3, $a3, -0x28C0
    ctx->pc = 0x17c160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956864));
    // 0x17c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c168: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17c16c: 0x3c09006d  lui         $t1, 0x6D
    ctx->pc = 0x17c16cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)109 << 16));
    // 0x17c170: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x17c170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x17c174: 0x244454c0  addiu       $a0, $v0, 0x54C0
    ctx->pc = 0x17c174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21696));
    // 0x17c178: 0x2529d840  addiu       $t1, $t1, -0x27C0
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957120));
    // 0x17c17c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c184: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x17c184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c188: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17c188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c18c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17c18cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c190: 0xc04410c  jal         func_110430
    ctx->pc = 0x17C190u;
    SET_GPR_U32(ctx, 31, 0x17C198u);
    ctx->pc = 0x17C194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C190u;
            // 0x17c194: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C198u; }
        if (ctx->pc != 0x17C198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C198u; }
        if (ctx->pc != 0x17C198u) { return; }
    }
    ctx->pc = 0x17C198u;
label_17c198:
    // 0x17c198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C19Cu;
            // 0x17c1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C1A4u;
    // 0x17c1a4: 0x0  nop
    ctx->pc = 0x17c1a4u;
    // NOP
    // 0x17c1a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17c1ac: 0x24634c30  addiu       $v1, $v1, 0x4C30
    ctx->pc = 0x17c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19504));
    // 0x17c1b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1B8u;
            // 0x17c1bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C1C0u;
    // 0x17c1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c1c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c1d0: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x17C1D0u;
    {
        const bool branch_taken_0x17c1d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17C1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1D0u;
            // 0x17c1d4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1d0) {
            ctx->pc = 0x17C1FCu;
            goto label_17c1fc;
        }
    }
    ctx->pc = 0x17C1D8u;
    // 0x17c1d8: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x17c1dc: 0x0  nop
    ctx->pc = 0x17c1dcu;
    // NOP
label_17c1e0:
    // 0x17c1e0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17c1e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c1e8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x17c1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17c1ec: 0x0  nop
    ctx->pc = 0x17c1ecu;
    // NOP
    // 0x17c1f0: 0x0  nop
    ctx->pc = 0x17c1f0u;
    // NOP
    // 0x17c1f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C1F4u;
    {
        const bool branch_taken_0x17c1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1F4u;
            // 0x17c1f8: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1f4) {
            ctx->pc = 0x17C1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c1e0;
        }
    }
    ctx->pc = 0x17C1FCu;
label_17c1fc:
    // 0x17c1fc: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17c1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17c200: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17c204: 0x26104c34  addiu       $s0, $s0, 0x4C34
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19508));
    // 0x17c208: 0x24a55cf8  addiu       $a1, $a1, 0x5CF8
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23800));
    // 0x17c20c: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x17C20Cu;
    SET_GPR_U32(ctx, 31, 0x17C214u);
    ctx->pc = 0x17C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C20Cu;
            // 0x17c210: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C214u; }
        if (ctx->pc != 0x17C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C214u; }
        if (ctx->pc != 0x17C214u) { return; }
    }
    ctx->pc = 0x17C214u;
label_17c214:
    // 0x17c214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c218: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c21c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c220: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17c224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c228: 0x3e00008  jr          $ra
    ctx->pc = 0x17C228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C228u;
            // 0x17c22c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C230u;
    // 0x17c230: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17c234: 0x2c850010  sltiu       $a1, $a0, 0x10
    ctx->pc = 0x17c234u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17c238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c23c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C23Cu;
    {
        const bool branch_taken_0x17c23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C23Cu;
            // 0x17c240: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c23c) {
            ctx->pc = 0x17C254u;
            goto label_17c254;
        }
    }
    ctx->pc = 0x17C244u;
    // 0x17c244: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17c244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c248: 0x3c01005e  lui         $at, 0x5E
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)94 << 16));
    // 0x17c24c: 0x24214c40  addiu       $at, $at, 0x4C40
    ctx->pc = 0x17c24cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 19520));
    // 0x17c250: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_17c254:
    // 0x17c254: 0x3e00008  jr          $ra
    ctx->pc = 0x17C254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C25Cu;
    // 0x17c25c: 0x0  nop
    ctx->pc = 0x17c25cu;
    // NOP
    // 0x17c260: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17c260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17c264: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17c264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17c268: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17c268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C26Cu;
            // 0x17c270: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C274u;
    // 0x17c274: 0x0  nop
    ctx->pc = 0x17c274u;
    // NOP
}
