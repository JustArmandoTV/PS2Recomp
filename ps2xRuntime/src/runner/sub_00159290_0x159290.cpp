#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159290
// Address: 0x159290 - 0x159610
void sub_00159290_0x159290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159290_0x159290");
#endif

    switch (ctx->pc) {
        case 0x159354u: goto label_159354;
        case 0x1593a4u: goto label_1593a4;
        case 0x1593f4u: goto label_1593f4;
        case 0x159444u: goto label_159444;
        case 0x159494u: goto label_159494;
        case 0x1594e4u: goto label_1594e4;
        case 0x15955cu: goto label_15955c;
        case 0x1595acu: goto label_1595ac;
        case 0x1595fcu: goto label_1595fc;
        default: break;
    }

    ctx->pc = 0x159290u;

    // 0x159290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159294: 0x240d6000  addiu       $t5, $zero, 0x6000
    ctx->pc = 0x159294u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x159298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x159298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15929c: 0x948e0008  lhu         $t6, 0x8($a0)
    ctx->pc = 0x15929cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1592a0: 0x948a000c  lhu         $t2, 0xC($a0)
    ctx->pc = 0x1592a0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1592a4: 0x948c000e  lhu         $t4, 0xE($a0)
    ctx->pc = 0x1592a4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1592a8: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x1592a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x1592ac: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x1592acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1592b0: 0x31cefe00  andi        $t6, $t6, 0xFE00
    ctx->pc = 0x1592b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65024);
    // 0x1592b4: 0x11cd008d  beq         $t6, $t5, . + 4 + (0x8D << 2)
    ctx->pc = 0x1592B4u;
    {
        const bool branch_taken_0x1592b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        ctx->pc = 0x1592B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1592B4u;
            // 0x1592b8: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592b4) {
            ctx->pc = 0x1594ECu;
            goto label_1594ec;
        }
    }
    ctx->pc = 0x1592BCu;
    // 0x1592bc: 0x240d6400  addiu       $t5, $zero, 0x6400
    ctx->pc = 0x1592bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x1592c0: 0x51cd0076  beql        $t6, $t5, . + 4 + (0x76 << 2)
    ctx->pc = 0x1592C0u;
    {
        const bool branch_taken_0x1592c0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1592c0) {
            ctx->pc = 0x1592C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592C0u;
            // 0x1592c4: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15949Cu;
            goto label_15949c;
        }
    }
    ctx->pc = 0x1592C8u;
    // 0x1592c8: 0x240d6200  addiu       $t5, $zero, 0x6200
    ctx->pc = 0x1592c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x1592cc: 0x51cd005f  beql        $t6, $t5, . + 4 + (0x5F << 2)
    ctx->pc = 0x1592CCu;
    {
        const bool branch_taken_0x1592cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1592cc) {
            ctx->pc = 0x1592D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592CCu;
            // 0x1592d0: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15944Cu;
            goto label_15944c;
        }
    }
    ctx->pc = 0x1592D4u;
    // 0x1592d4: 0x24056c00  addiu       $a1, $zero, 0x6C00
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x1592d8: 0x51c50048  beql        $t6, $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1592D8u;
    {
        const bool branch_taken_0x1592d8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x1592d8) {
            ctx->pc = 0x1592DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592D8u;
            // 0x1592dc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1593FCu;
            goto label_1593fc;
        }
    }
    ctx->pc = 0x1592E0u;
    // 0x1592e0: 0x24056a00  addiu       $a1, $zero, 0x6A00
    ctx->pc = 0x1592e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x1592e4: 0x51c50031  beql        $t6, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1592E4u;
    {
        const bool branch_taken_0x1592e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x1592e4) {
            ctx->pc = 0x1592E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592E4u;
            // 0x1592e8: 0x240d0002  addiu       $t5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1593ACu;
            goto label_1593ac;
        }
    }
    ctx->pc = 0x1592ECu;
    // 0x1592ec: 0x24056800  addiu       $a1, $zero, 0x6800
    ctx->pc = 0x1592ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x1592f0: 0x51c5001a  beql        $t6, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1592F0u;
    {
        const bool branch_taken_0x1592f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x1592f0) {
            ctx->pc = 0x1592F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592F0u;
            // 0x1592f4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15935Cu;
            goto label_15935c;
        }
    }
    ctx->pc = 0x1592F8u;
    // 0x1592f8: 0x24056600  addiu       $a1, $zero, 0x6600
    ctx->pc = 0x1592f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x1592fc: 0x51c50003  beql        $t6, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1592FCu;
    {
        const bool branch_taken_0x1592fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x1592fc) {
            ctx->pc = 0x159300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592FCu;
            // 0x159300: 0x240d0002  addiu       $t5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15930Cu;
            goto label_15930c;
        }
    }
    ctx->pc = 0x159304u;
    // 0x159304: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x159304u;
    {
        const bool branch_taken_0x159304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159304u;
            // 0x159308: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159304) {
            ctx->pc = 0x159600u;
            goto label_159600;
        }
    }
    ctx->pc = 0x15930Cu;
label_15930c:
    // 0x15930c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x15930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159310: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x159310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x159314: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x159314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x159318: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x159318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x15931c: 0x25650100  addiu       $a1, $t3, 0x100
    ctx->pc = 0x15931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
    // 0x159320: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x159324: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x159324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159328: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x159328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x15932c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x15932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x159330: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x159334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x159334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159338: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x159338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x15933c: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x15933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x159340: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x159340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159344: 0xffad0038  sd          $t5, 0x38($sp)
    ctx->pc = 0x159344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 13));
    // 0x159348: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15934c: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x15934Cu;
    SET_GPR_U32(ctx, 31, 0x159354u);
    ctx->pc = 0x159350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15934Cu;
            // 0x159350: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159354u; }
        if (ctx->pc != 0x159354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159354u; }
        if (ctx->pc != 0x159354u) { return; }
    }
    ctx->pc = 0x159354u;
label_159354:
    // 0x159354: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x159354u;
    {
        const bool branch_taken_0x159354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159354) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x15935Cu;
label_15935c:
    // 0x15935c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x15935cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159360: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x159360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x159364: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159368: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x15936c: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x159370: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x159370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x159374: 0x25650100  addiu       $a1, $t3, 0x100
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
    // 0x159378: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x15937c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159380: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x159380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x159384: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x159384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x159388: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x159388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x15938c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159390: 0xffaa0038  sd          $t2, 0x38($sp)
    ctx->pc = 0x159390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 10));
    // 0x159394: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159398: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x159398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x15939c: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x15939Cu;
    SET_GPR_U32(ctx, 31, 0x1593A4u);
    ctx->pc = 0x1593A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15939Cu;
            // 0x1593a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593A4u; }
        if (ctx->pc != 0x1593A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593A4u; }
        if (ctx->pc != 0x1593A4u) { return; }
    }
    ctx->pc = 0x1593A4u;
label_1593a4:
    // 0x1593a4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1593A4u;
    {
        const bool branch_taken_0x1593a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593a4) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x1593ACu;
label_1593ac:
    // 0x1593ac: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1593acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b0: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x1593b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x1593b4: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x1593b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x1593b8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1593b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1593bc: 0x25650200  addiu       $a1, $t3, 0x200
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x1593c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1593c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1593c4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1593c8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1593c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1593cc: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1593d0: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1593d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1593d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1593d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593d8: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x1593d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x1593dc: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x1593dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x1593e0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1593e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593e4: 0xffad0038  sd          $t5, 0x38($sp)
    ctx->pc = 0x1593e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 13));
    // 0x1593e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1593ec: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x1593ECu;
    SET_GPR_U32(ctx, 31, 0x1593F4u);
    ctx->pc = 0x1593F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1593ECu;
            // 0x1593f0: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593F4u; }
        if (ctx->pc != 0x1593F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593F4u; }
        if (ctx->pc != 0x1593F4u) { return; }
    }
    ctx->pc = 0x1593F4u;
label_1593f4:
    // 0x1593f4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1593F4u;
    {
        const bool branch_taken_0x1593f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1593f4) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x1593FCu;
label_1593fc:
    // 0x1593fc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1593fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159400: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x159400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x159404: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159408: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x15940c: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x15940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x159410: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x159410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x159414: 0x25650400  addiu       $a1, $t3, 0x400
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1024));
    // 0x159418: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x15941c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159420: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x159420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x159424: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x159424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x159428: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x159428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x15942c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x15942cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159430: 0xffaa0038  sd          $t2, 0x38($sp)
    ctx->pc = 0x159430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 10));
    // 0x159434: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159438: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x159438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x15943c: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x15943Cu;
    SET_GPR_U32(ctx, 31, 0x159444u);
    ctx->pc = 0x159440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15943Cu;
            // 0x159440: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159444u; }
        if (ctx->pc != 0x159444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159444u; }
        if (ctx->pc != 0x159444u) { return; }
    }
    ctx->pc = 0x159444u;
label_159444:
    // 0x159444: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x159444u;
    {
        const bool branch_taken_0x159444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159444) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x15944Cu;
label_15944c:
    // 0x15944c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x15944cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159450: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x159450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x159454: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x159454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159458: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x15945c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x15945cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159460: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x159460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x159464: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x159464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x159468: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x15946c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159470: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x159470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x159474: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x159478: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x159478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x15947c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x15947cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159480: 0xffaa0038  sd          $t2, 0x38($sp)
    ctx->pc = 0x159480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 10));
    // 0x159484: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159488: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x159488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x15948c: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x15948Cu;
    SET_GPR_U32(ctx, 31, 0x159494u);
    ctx->pc = 0x159490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15948Cu;
            // 0x159490: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159494u; }
        if (ctx->pc != 0x159494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159494u; }
        if (ctx->pc != 0x159494u) { return; }
    }
    ctx->pc = 0x159494u;
label_159494:
    // 0x159494: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159494u;
    {
        const bool branch_taken_0x159494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159494) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x15949Cu;
label_15949c:
    // 0x15949c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x15949cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594a0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1594a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1594a4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1594a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1594a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1594ac: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1594acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1594b0: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1594b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1594b4: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x1594b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x1594b8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1594b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1594bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1594bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1594c0: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x1594c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x1594c4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1594c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1594c8: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x1594c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x1594cc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1594ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594d0: 0xffaa0038  sd          $t2, 0x38($sp)
    ctx->pc = 0x1594d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 10));
    // 0x1594d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1594d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1594d8: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1594d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1594dc: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x1594DCu;
    SET_GPR_U32(ctx, 31, 0x1594E4u);
    ctx->pc = 0x1594E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1594DCu;
            // 0x1594e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594E4u; }
        if (ctx->pc != 0x1594E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1594E4u; }
        if (ctx->pc != 0x1594E4u) { return; }
    }
    ctx->pc = 0x1594E4u;
label_1594e4:
    // 0x1594e4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1594E4u;
    {
        const bool branch_taken_0x1594e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1594e4) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x1594ECu;
label_1594ec:
    // 0x1594ec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1594f0: 0x51e60030  beql        $t7, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1594F0u;
    {
        const bool branch_taken_0x1594f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 6));
        if (branch_taken_0x1594f0) {
            ctx->pc = 0x1594F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1594F0u;
            // 0x1594f4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1595B4u;
            goto label_1595b4;
        }
    }
    ctx->pc = 0x1594F8u;
    // 0x1594f8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1594fc: 0x51e60019  beql        $t7, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1594FCu;
    {
        const bool branch_taken_0x1594fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 6));
        if (branch_taken_0x1594fc) {
            ctx->pc = 0x159500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1594FCu;
            // 0x159500: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159564u;
            goto label_159564;
        }
    }
    ctx->pc = 0x159504u;
    // 0x159504: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159508: 0x51e60003  beql        $t7, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x159508u;
    {
        const bool branch_taken_0x159508 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 6));
        if (branch_taken_0x159508) {
            ctx->pc = 0x15950Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159508u;
            // 0x15950c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159518u;
            goto label_159518;
        }
    }
    ctx->pc = 0x159510u;
    // 0x159510: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x159510u;
    {
        const bool branch_taken_0x159510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159510) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x159518u;
label_159518:
    // 0x159518: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x159518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15951c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x15951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x159520: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159524: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x159528: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x159528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x15952c: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x15952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x159530: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159534: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x159538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x159538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15953c: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x15953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x159540: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x159540u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159544: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x159544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x159548: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x159548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15954c: 0xffa60038  sd          $a2, 0x38($sp)
    ctx->pc = 0x15954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 6));
    // 0x159550: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x159550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159554: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x159554u;
    SET_GPR_U32(ctx, 31, 0x15955Cu);
    ctx->pc = 0x159558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159554u;
            // 0x159558: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15955Cu; }
        if (ctx->pc != 0x15955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15955Cu; }
        if (ctx->pc != 0x15955Cu) { return; }
    }
    ctx->pc = 0x15955Cu;
label_15955c:
    // 0x15955c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15955Cu;
    {
        const bool branch_taken_0x15955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15955c) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x159564u;
label_159564:
    // 0x159564: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x159564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159568: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x159568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x15956c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159570: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x159570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x159574: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x159574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x159578: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x159578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x15957c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x159580: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x159580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x159584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159588: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x159588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x15958c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15958cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159590: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x159590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x159594: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x159594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159598: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x159598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x15959c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1595a0: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1595a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1595a4: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x1595A4u;
    SET_GPR_U32(ctx, 31, 0x1595ACu);
    ctx->pc = 0x1595A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1595A4u;
            // 0x1595a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595ACu; }
        if (ctx->pc != 0x1595ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595ACu; }
        if (ctx->pc != 0x1595ACu) { return; }
    }
    ctx->pc = 0x1595ACu;
label_1595ac:
    // 0x1595ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1595ACu;
    {
        const bool branch_taken_0x1595ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1595ac) {
            ctx->pc = 0x1595FCu;
            goto label_1595fc;
        }
    }
    ctx->pc = 0x1595B4u;
label_1595b4:
    // 0x1595b4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1595b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595b8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1595b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1595bc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1595c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1595c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1595c4: 0x24020f70  addiu       $v0, $zero, 0xF70
    ctx->pc = 0x1595c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3952));
    // 0x1595c8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1595c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1595cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1595ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1595d0: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1595d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1595d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1595d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1595d8: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x1595d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x1595dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1595dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595e0: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x1595e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x1595e4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1595e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595e8: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x1595e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x1595ec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1595ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595f0: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1595f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1595f4: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x1595F4u;
    SET_GPR_U32(ctx, 31, 0x1595FCu);
    ctx->pc = 0x1595F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1595F4u;
            // 0x1595f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595FCu; }
        if (ctx->pc != 0x1595FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD20_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595FCu; }
        if (ctx->pc != 0x1595FCu) { return; }
    }
    ctx->pc = 0x1595FCu;
label_1595fc:
    // 0x1595fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1595fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_159600:
    // 0x159600: 0x3e00008  jr          $ra
    ctx->pc = 0x159600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159600u;
            // 0x159604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159608u;
    // 0x159608: 0x0  nop
    ctx->pc = 0x159608u;
    // NOP
    // 0x15960c: 0x0  nop
    ctx->pc = 0x15960cu;
    // NOP
}
