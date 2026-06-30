#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180498
// Address: 0x180498 - 0x180560
void sub_00180498_0x180498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180498_0x180498");
#endif

    switch (ctx->pc) {
        case 0x1804f8u: goto label_1804f8;
        case 0x180508u: goto label_180508;
        case 0x180520u: goto label_180520;
        case 0x18053cu: goto label_18053c;
        case 0x180548u: goto label_180548;
        default: break;
    }

    ctx->pc = 0x180498u;

    // 0x180498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18049c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1804a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804a4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1804A4u;
    {
        const bool branch_taken_0x1804a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804A4u;
            // 0x1804a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804a4) {
            ctx->pc = 0x1804C8u;
            goto label_1804c8;
        }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1804acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1804b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1804b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1804b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1804b8: 0x24846818  addiu       $a0, $a0, 0x6818
    ctx->pc = 0x1804b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26648));
    // 0x1804bc: 0x8060334  j           func_180CD0
    ctx->pc = 0x1804BCu;
    ctx->pc = 0x1804C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804BCu;
            // 0x1804c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1804C4u;
    // 0x1804c4: 0x0  nop
    ctx->pc = 0x1804c4u;
    // NOP
label_1804c8:
    // 0x1804c8: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1804cc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1804CCu;
    {
        const bool branch_taken_0x1804cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1804cc) {
            ctx->pc = 0x1804D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1804CCu;
            // 0x1804d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180510u;
            goto label_180510;
        }
    }
    ctx->pc = 0x1804D4u;
    // 0x1804d4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1804d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1804D8u;
    {
        const bool branch_taken_0x1804d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804D8u;
            // 0x1804dc: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804d8) {
            ctx->pc = 0x1804FCu;
            goto label_1804fc;
        }
    }
    ctx->pc = 0x1804E0u;
    // 0x1804e0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1804e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1804e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1804e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1804E8u;
    {
        const bool branch_taken_0x1804e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1804e8) {
            ctx->pc = 0x1804ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1804E8u;
            // 0x1804ec: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180500u;
            goto label_180500;
        }
    }
    ctx->pc = 0x1804F0u;
    // 0x1804f0: 0xc05c396  jal         func_170E58
    ctx->pc = 0x1804F0u;
    SET_GPR_U32(ctx, 31, 0x1804F8u);
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804F8u; }
        if (ctx->pc != 0x1804F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804F8u; }
        if (ctx->pc != 0x1804F8u) { return; }
    }
    ctx->pc = 0x1804F8u;
label_1804f8:
    // 0x1804f8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1804f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1804fc:
    // 0x1804fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1804fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_180500:
    // 0x180500: 0xc0600d8  jal         func_180360
    ctx->pc = 0x180500u;
    SET_GPR_U32(ctx, 31, 0x180508u);
    ctx->pc = 0x180504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180500u;
            // 0x180504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180360u;
    if (runtime->hasFunction(0x180360u)) {
        auto targetFn = runtime->lookupFunction(0x180360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180508u; }
        if (ctx->pc != 0x180508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180360_0x180360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180508u; }
        if (ctx->pc != 0x180508u) { return; }
    }
    ctx->pc = 0x180508u;
label_180508:
    // 0x180508: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x180508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x18050c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18050cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180510:
    // 0x180510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180514: 0x3e00008  jr          $ra
    ctx->pc = 0x180514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180514u;
            // 0x180518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18051Cu;
    // 0x18051c: 0x0  nop
    ctx->pc = 0x18051cu;
    // NOP
label_180520:
    // 0x180520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18052c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180534: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180534u;
    SET_GPR_U32(ctx, 31, 0x18053Cu);
    ctx->pc = 0x180538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180534u;
            // 0x180538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18053Cu; }
        if (ctx->pc != 0x18053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18053Cu; }
        if (ctx->pc != 0x18053Cu) { return; }
    }
    ctx->pc = 0x18053Cu;
label_18053c:
    // 0x18053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180540: 0xc060158  jal         func_180560
    ctx->pc = 0x180540u;
    SET_GPR_U32(ctx, 31, 0x180548u);
    ctx->pc = 0x180544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180540u;
            // 0x180544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180560u;
    if (runtime->hasFunction(0x180560u)) {
        auto targetFn = runtime->lookupFunction(0x180560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180548u; }
        if (ctx->pc != 0x180548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180560_0x180560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180548u; }
        if (ctx->pc != 0x180548u) { return; }
    }
    ctx->pc = 0x180548u;
label_180548:
    // 0x180548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18054c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18054cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180554: 0x806031c  j           func_180C70
    ctx->pc = 0x180554u;
    ctx->pc = 0x180558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180554u;
            // 0x180558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18055Cu;
    // 0x18055c: 0x0  nop
    ctx->pc = 0x18055cu;
    // NOP
}
