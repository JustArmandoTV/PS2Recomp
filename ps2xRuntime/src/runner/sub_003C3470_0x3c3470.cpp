#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3470
// Address: 0x3c3470 - 0x3c3590
void sub_003C3470_0x3c3470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3470_0x3c3470");
#endif

    switch (ctx->pc) {
        case 0x3c34dcu: goto label_3c34dc;
        case 0x3c350cu: goto label_3c350c;
        case 0x3c3544u: goto label_3c3544;
        default: break;
    }

    ctx->pc = 0x3c3470u;

    // 0x3c3470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c3474: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c3474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c347c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c3480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c3484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c3488: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3c3488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c348c: 0x90653db0  lbu         $a1, 0x3DB0($v1)
    ctx->pc = 0x3c348cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
    // 0x3c3490: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x3c3490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c3494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c3494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3498: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x3c3498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x3c349c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3c349cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3c34a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3c34a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3c34a4: 0x5c600033  bgtzl       $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3C34A4u;
    {
        const bool branch_taken_0x3c34a4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3c34a4) {
            ctx->pc = 0x3C34A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C34A4u;
            // 0x3c34a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3574u;
            goto label_3c3574;
        }
    }
    ctx->pc = 0x3C34ACu;
    // 0x3c34ac: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3c34acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x3c34b0: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x3c34b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3c34b4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C34B4u;
    {
        const bool branch_taken_0x3c34b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C34B4u;
            // 0x3c34b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34b4) {
            ctx->pc = 0x3C34CCu;
            goto label_3c34cc;
        }
    }
    ctx->pc = 0x3C34BCu;
    // 0x3c34bc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3c34bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3c34c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C34C0u;
    {
        const bool branch_taken_0x3c34c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c34c0) {
            ctx->pc = 0x3C34CCu;
            goto label_3c34cc;
        }
    }
    ctx->pc = 0x3C34C8u;
    // 0x3c34c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c34cc:
    // 0x3c34cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C34CCu;
    {
        const bool branch_taken_0x3c34cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c34cc) {
            ctx->pc = 0x3C34E8u;
            goto label_3c34e8;
        }
    }
    ctx->pc = 0x3C34D4u;
    // 0x3c34d4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3C34D4u;
    SET_GPR_U32(ctx, 31, 0x3C34DCu);
    ctx->pc = 0x3C34D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C34D4u;
            // 0x3c34d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C34DCu; }
        if (ctx->pc != 0x3C34DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C34DCu; }
        if (ctx->pc != 0x3C34DCu) { return; }
    }
    ctx->pc = 0x3C34DCu;
label_3c34dc:
    // 0x3c34dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C34DCu;
    {
        const bool branch_taken_0x3c34dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c34dc) {
            ctx->pc = 0x3C34E8u;
            goto label_3c34e8;
        }
    }
    ctx->pc = 0x3C34E4u;
    // 0x3c34e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c34e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c34e8:
    // 0x3c34e8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C34E8u;
    {
        const bool branch_taken_0x3c34e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c34e8) {
            ctx->pc = 0x3C3570u;
            goto label_3c3570;
        }
    }
    ctx->pc = 0x3C34F0u;
    // 0x3c34f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c34f4: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x3c34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x3c34f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3c34fc: 0x245202b8  addiu       $s2, $v0, 0x2B8
    ctx->pc = 0x3c34fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
    // 0x3c3500: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x3c3500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x3c3504: 0xc040180  jal         func_100600
    ctx->pc = 0x3C3504u;
    SET_GPR_U32(ctx, 31, 0x3C350Cu);
    ctx->pc = 0x3C3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3504u;
            // 0x3c3508: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C350Cu; }
        if (ctx->pc != 0x3C350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C350Cu; }
        if (ctx->pc != 0x3C350Cu) { return; }
    }
    ctx->pc = 0x3C350Cu;
label_3c350c:
    // 0x3c350c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C350Cu;
    {
        const bool branch_taken_0x3c350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C350Cu;
            // 0x3c3510: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c350c) {
            ctx->pc = 0x3C3570u;
            goto label_3c3570;
        }
    }
    ctx->pc = 0x3C3514u;
    // 0x3c3514: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c3514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3518: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3c3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3c351c: 0x8e120d98  lw          $s2, 0xD98($s0)
    ctx->pc = 0x3c351cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x3c3520: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c3520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3524: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x3c3524u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x3c3528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c352c: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3c352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
    // 0x3c3530: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3c3530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c3534: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x3c3534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
    // 0x3c3538: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3c3538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c353c: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x3C353Cu;
    SET_GPR_U32(ctx, 31, 0x3C3544u);
    ctx->pc = 0x3C3540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C353Cu;
            // 0x3c3540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3544u; }
        if (ctx->pc != 0x3C3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3544u; }
        if (ctx->pc != 0x3C3544u) { return; }
    }
    ctx->pc = 0x3C3544u;
label_3c3544:
    // 0x3c3544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3548: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3c3548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3c354c: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x3c354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x3c3550: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x3c3550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
    // 0x3c3554: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3c3554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c3558: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3c3558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3c355c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c355cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3560: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x3c3560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
    // 0x3c3564: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c3564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3c3568: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3c3568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3c356c: 0xa0643db0  sb          $a0, 0x3DB0($v1)
    ctx->pc = 0x3c356cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
label_3c3570:
    // 0x3c3570: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c3570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3574:
    // 0x3c3574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c3574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c3578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c3578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c357c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c357cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c3580: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3580u;
            // 0x3c3584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3588u;
    // 0x3c3588: 0x0  nop
    ctx->pc = 0x3c3588u;
    // NOP
    // 0x3c358c: 0x0  nop
    ctx->pc = 0x3c358cu;
    // NOP
}
