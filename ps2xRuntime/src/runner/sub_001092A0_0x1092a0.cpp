#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001092A0
// Address: 0x1092a0 - 0x1093a0
void sub_001092A0_0x1092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001092A0_0x1092a0");
#endif

    switch (ctx->pc) {
        case 0x1092e0u: goto label_1092e0;
        case 0x109344u: goto label_109344;
        case 0x10934cu: goto label_10934c;
        default: break;
    }

    ctx->pc = 0x1092a0u;

    // 0x1092a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1092a4: 0x2484118f  addiu       $a0, $a0, 0x118F
    ctx->pc = 0x1092a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4495));
    // 0x1092a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1092a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1092ac: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1092acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1092b0: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x1092b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1092b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1092b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1092b8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1092b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1092bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092c0: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1092C0u;
    {
        const bool branch_taken_0x1092c0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1092C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1092C0u;
            // 0x1092c4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092c0) {
            ctx->pc = 0x10933Cu;
            goto label_10933c;
        }
    }
    ctx->pc = 0x1092C8u;
    // 0x1092c8: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x1092cc: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x1092ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1092d0: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x1092d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x1092d4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1092d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1092d8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1092d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1092dc: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1092dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1092e0:
    // 0x1092e0: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1092e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1092e4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1092e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092e8: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1092e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1092ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1092ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092f0: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1092f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1092f4: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1092f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x1092f8: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1092f8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1092fc: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1092fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x109300: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x109300u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x109304: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x109304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x109308: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x109308u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x10930c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x109310: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x109310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x109314: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x109314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x109318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10931c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10931cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x109320: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109324: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x109324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x109328: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x109328u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x10932c: 0xf  sync
    ctx->pc = 0x10932cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x109330: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x109334: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x109334u;
    {
        const bool branch_taken_0x109334 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x109338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109334u;
            // 0x109338: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109334) {
            ctx->pc = 0x1092E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1092e0;
        }
    }
    ctx->pc = 0x10933Cu;
label_10933c:
    // 0x10933c: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x10933Cu;
    SET_GPR_U32(ctx, 31, 0x109344u);
    ctx->pc = 0x109340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10933Cu;
            // 0x109340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109344u; }
        if (ctx->pc != 0x109344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109344u; }
        if (ctx->pc != 0x109344u) { return; }
    }
    ctx->pc = 0x109344u;
label_109344:
    // 0x109344: 0xc045968  jal         func_1165A0
    ctx->pc = 0x109344u;
    SET_GPR_U32(ctx, 31, 0x10934Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10934Cu; }
        if (ctx->pc != 0x10934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10934Cu; }
        if (ctx->pc != 0x10934Cu) { return; }
    }
    ctx->pc = 0x10934Cu;
label_10934c:
    // 0x10934c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10934cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x109350: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109354: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109358: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x109358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x10935c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x109360: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109364: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x109364u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x109368: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x109368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10936c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10936cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109370: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109374: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x109374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x109378: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x109378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10937c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10937cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x109380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109380u;
    {
        const bool branch_taken_0x109380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109380u;
            // 0x109384: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109380) {
            ctx->pc = 0x109394u;
            goto label_109394;
        }
    }
    ctx->pc = 0x109388u;
    // 0x109388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10938c: 0x804597c  j           func_1165F0
    ctx->pc = 0x10938Cu;
    ctx->pc = 0x109390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10938Cu;
            // 0x109390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x109394u;
label_109394:
    // 0x109394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109398: 0x3e00008  jr          $ra
    ctx->pc = 0x109398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109398u;
            // 0x10939c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1093A0u;
}
