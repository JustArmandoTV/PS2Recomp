#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122F98
// Address: 0x122f98 - 0x123398
void sub_00122F98_0x122f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F98_0x122f98");
#endif

    switch (ctx->pc) {
        case 0x122fd8u: goto label_122fd8;
        case 0x122ff4u: goto label_122ff4;
        case 0x123018u: goto label_123018;
        case 0x123028u: goto label_123028;
        case 0x123054u: goto label_123054;
        case 0x12306cu: goto label_12306c;
        case 0x123100u: goto label_123100;
        case 0x123124u: goto label_123124;
        case 0x12313cu: goto label_12313c;
        case 0x123154u: goto label_123154;
        case 0x1231d8u: goto label_1231d8;
        case 0x123220u: goto label_123220;
        case 0x123250u: goto label_123250;
        case 0x123270u: goto label_123270;
        case 0x1232e8u: goto label_1232e8;
        case 0x123320u: goto label_123320;
        case 0x123350u: goto label_123350;
        case 0x123370u: goto label_123370;
        default: break;
    }

    ctx->pc = 0x122f98u;

label_122f98:
    // 0x122f98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122f9c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x122f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122fa0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x122fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122fa4: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x122fa8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x122fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122fb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x122fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122fb8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122fbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122fc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122fc4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x122fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122fc8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x122fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x122fcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x122FCCu;
    {
        const bool branch_taken_0x122fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122FCCu;
            // 0x122fd0: 0x26b436c0  addiu       $s4, $s5, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fcc) {
            ctx->pc = 0x123008u;
            goto label_123008;
        }
    }
    ctx->pc = 0x122FD4u;
    // 0x122fd4: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
label_122fd8:
    // 0x122fd8: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x122fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x122fdc: 0x262526c4  addiu       $a1, $s1, 0x26C4
    ctx->pc = 0x122fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9924));
    // 0x122fe0: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x122fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x122fe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x122fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fe8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x122fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x122fec: 0xc04a508  jal         func_129420
    ctx->pc = 0x122FECu;
    SET_GPR_U32(ctx, 31, 0x122FF4u);
    ctx->pc = 0x122FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122FECu;
            // 0x122ff0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122FF4u; }
        if (ctx->pc != 0x122FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122FF4u; }
        if (ctx->pc != 0x122FF4u) { return; }
    }
    ctx->pc = 0x122FF4u;
label_122ff4:
    // 0x122ff4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x122ff8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x122ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122ffc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x122ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x123000: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x123000u;
    {
        const bool branch_taken_0x123000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123000u;
            // 0x123004: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123000) {
            ctx->pc = 0x122FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122fd8;
        }
    }
    ctx->pc = 0x123008u;
label_123008:
    // 0x123008: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x123008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12300c: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x12300Cu;
    {
        const bool branch_taken_0x12300c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x123010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12300Cu;
            // 0x123010: 0x26b436c0  addiu       $s4, $s5, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12300c) {
            ctx->pc = 0x12309Cu;
            goto label_12309c;
        }
    }
    ctx->pc = 0x123014u;
    // 0x123014: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x123014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_123018:
    // 0x123018: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x123018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12301c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12301cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123020: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x123020u;
    SET_GPR_U32(ctx, 31, 0x123028u);
    ctx->pc = 0x123024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123020u;
            // 0x123024: 0x2843021  addu        $a2, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F10u;
    if (runtime->hasFunction(0x122F10u)) {
        auto targetFn = runtime->lookupFunction(0x122F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123028u; }
        if (ctx->pc != 0x123028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F10_0x122f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123028u; }
        if (ctx->pc != 0x123028u) { return; }
    }
    ctx->pc = 0x123028u;
label_123028:
    // 0x123028: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x123028u;
    {
        const bool branch_taken_0x123028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123028u;
            // 0x12302c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123028) {
            ctx->pc = 0x1230A4u;
            goto label_1230a4;
        }
    }
    ctx->pc = 0x123030u;
    // 0x123030: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x123030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x123034: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x123034u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x123038: 0x8e2446c0  lw          $a0, 0x46C0($s1)
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18112)));
    // 0x12303c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123040: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x123040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x123044: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x123044u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x123048: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12304c: 0xc04a508  jal         func_129420
    ctx->pc = 0x12304Cu;
    SET_GPR_U32(ctx, 31, 0x123054u);
    ctx->pc = 0x123050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12304Cu;
            // 0x123050: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123054u; }
        if (ctx->pc != 0x123054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123054u; }
        if (ctx->pc != 0x123054u) { return; }
    }
    ctx->pc = 0x123054u;
label_123054:
    // 0x123054: 0x8e2346c0  lw          $v1, 0x46C0($s1)
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18112)));
    // 0x123058: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x123058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x12305c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123064: 0xc04a508  jal         func_129420
    ctx->pc = 0x123064u;
    SET_GPR_U32(ctx, 31, 0x12306Cu);
    ctx->pc = 0x123068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123064u;
            // 0x123068: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12306Cu; }
        if (ctx->pc != 0x12306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12306Cu; }
        if (ctx->pc != 0x12306Cu) { return; }
    }
    ctx->pc = 0x12306Cu;
label_12306c:
    // 0x12306c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x123070: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x123070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123074: 0x8e2446c0  lw          $a0, 0x46C0($s1)
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18112)));
    // 0x123078: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12307c: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x12307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x123080: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x123080u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x123084: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x123084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x123088: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12308c: 0xae2446c0  sw          $a0, 0x46C0($s1)
    ctx->pc = 0x12308cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18112), GPR_U32(ctx, 4));
    // 0x123090: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x123090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x123094: 0x1e40ffe0  bgtz        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x123094u;
    {
        const bool branch_taken_0x123094 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123094u;
            // 0x123098: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123094) {
            ctx->pc = 0x123018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123018;
        }
    }
    ctx->pc = 0x12309Cu;
label_12309c:
    // 0x12309c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12309cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1230a4:
    // 0x1230a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1230a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1230a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1230a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1230ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1230acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1230b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1230b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1230b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1230b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1230b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1230bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1230BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1230BCu;
            // 0x1230c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1230C4u;
    // 0x1230c4: 0x0  nop
    ctx->pc = 0x1230c4u;
    // NOP
    // 0x1230c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1230c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1230cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1230ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1230d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1230d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1230d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1230d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1230d8: 0x245226c0  addiu       $s2, $v0, 0x26C0
    ctx->pc = 0x1230d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x1230dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1230dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1230e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1230e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1230ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1230ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1230f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1230f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f4: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1230f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1230f8: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1230F8u;
    SET_GPR_U32(ctx, 31, 0x123100u);
    ctx->pc = 0x1230FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1230F8u;
            // 0x1230fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123100u; }
        if (ctx->pc != 0x123100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123100u; }
        if (ctx->pc != 0x123100u) { return; }
    }
    ctx->pc = 0x123100u;
label_123100:
    // 0x123100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123104: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123104u;
    {
        const bool branch_taken_0x123104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x123108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123104u;
            // 0x123108: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123104) {
            ctx->pc = 0x12311Cu;
            goto label_12311c;
        }
    }
    ctx->pc = 0x12310Cu;
    // 0x12310c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12310Cu;
    {
        const bool branch_taken_0x12310c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x123110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12310Cu;
            // 0x123110: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12310c) {
            ctx->pc = 0x12312Cu;
            goto label_12312c;
        }
    }
    ctx->pc = 0x123114u;
    // 0x123114: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x123114u;
    {
        const bool branch_taken_0x123114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123114u;
            // 0x123118: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123114) {
            ctx->pc = 0x123168u;
            goto label_123168;
        }
    }
    ctx->pc = 0x12311Cu;
label_12311c:
    // 0x12311c: 0xc048be6  jal         func_122F98
    ctx->pc = 0x12311Cu;
    SET_GPR_U32(ctx, 31, 0x123124u);
    ctx->pc = 0x123120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12311Cu;
            // 0x123120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F98u;
    goto label_122f98;
    ctx->pc = 0x123124u;
label_123124:
    // 0x123124: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x123124u;
    {
        const bool branch_taken_0x123124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123124u;
            // 0x123128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123124) {
            ctx->pc = 0x123164u;
            goto label_123164;
        }
    }
    ctx->pc = 0x12312Cu;
label_12312c:
    // 0x12312c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x12312cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x123130: 0x8e0446c0  lw          $a0, 0x46C0($s0)
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18112)));
    // 0x123134: 0xc04a508  jal         func_129420
    ctx->pc = 0x123134u;
    SET_GPR_U32(ctx, 31, 0x12313Cu);
    ctx->pc = 0x123138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123134u;
            // 0x123138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12313Cu; }
        if (ctx->pc != 0x12313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12313Cu; }
        if (ctx->pc != 0x12313Cu) { return; }
    }
    ctx->pc = 0x12313Cu;
label_12313c:
    // 0x12313c: 0x8e0346c0  lw          $v1, 0x46C0($s0)
    ctx->pc = 0x12313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18112)));
    // 0x123140: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x123140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x123144: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x123144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x123148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x123148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12314c: 0xc04a508  jal         func_129420
    ctx->pc = 0x12314Cu;
    SET_GPR_U32(ctx, 31, 0x123154u);
    ctx->pc = 0x123150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12314Cu;
            // 0x123150: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123154u; }
        if (ctx->pc != 0x123154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123154u; }
        if (ctx->pc != 0x123154u) { return; }
    }
    ctx->pc = 0x123154u;
label_123154:
    // 0x123154: 0x8e0346c0  lw          $v1, 0x46C0($s0)
    ctx->pc = 0x123154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18112)));
    // 0x123158: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12315c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123160: 0xae0346c0  sw          $v1, 0x46C0($s0)
    ctx->pc = 0x123160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18112), GPR_U32(ctx, 3));
label_123164:
    // 0x123164: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x123164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_123168:
    // 0x123168: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x123168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12316c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123170: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x123170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123174: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123178: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12317c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12317cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123180: 0x3e00008  jr          $ra
    ctx->pc = 0x123180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123180u;
            // 0x123184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123188u;
    // 0x123188: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12318c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x12318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x123190: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x123190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x123194: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x123194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x123198: 0x24540fc0  addiu       $s4, $v0, 0xFC0
    ctx->pc = 0x123198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x12319c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1231a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1231a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1231a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1231a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1231a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1231acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1231b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1231b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1231b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1231b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1231b8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1231b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1231bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1231BCu;
    {
        const bool branch_taken_0x1231bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1231C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1231BCu;
            // 0x1231c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231bc) {
            ctx->pc = 0x1231CCu;
            goto label_1231cc;
        }
    }
    ctx->pc = 0x1231C4u;
    // 0x1231c4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1231C4u;
    {
        const bool branch_taken_0x1231c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1231C4u;
            // 0x1231c8: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231c4) {
            ctx->pc = 0x123274u;
            goto label_123274;
        }
    }
    ctx->pc = 0x1231CCu;
label_1231cc:
    // 0x1231cc: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x1231ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x1231d0: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x1231D0u;
    SET_GPR_U32(ctx, 31, 0x1231D8u);
    ctx->pc = 0x1231D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1231D0u;
            // 0x1231d4: 0x8ea416dc  lw          $a0, 0x16DC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231D8u; }
        if (ctx->pc != 0x1231D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1231D8u; }
        if (ctx->pc != 0x1231D8u) { return; }
    }
    ctx->pc = 0x1231D8u;
label_1231d8:
    // 0x1231d8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1231D8u;
    {
        const bool branch_taken_0x1231d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1231d8) {
            ctx->pc = 0x1231DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1231D8u;
            // 0x1231dc: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1231E8u;
            goto label_1231e8;
        }
    }
    ctx->pc = 0x1231E0u;
    // 0x1231e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1231E0u;
    {
        const bool branch_taken_0x1231e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1231E0u;
            // 0x1231e4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231e0) {
            ctx->pc = 0x123274u;
            goto label_123274;
        }
    }
    ctx->pc = 0x1231E8u;
label_1231e8:
    // 0x1231e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1231e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1231ec: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1231ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1231f0: 0x24901040  addiu       $s0, $a0, 0x1040
    ctx->pc = 0x1231f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4160));
    // 0x1231f4: 0x246326c0  addiu       $v1, $v1, 0x26C0
    ctx->pc = 0x1231f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x1231f8: 0xac931040  sw          $s3, 0x1040($a0)
    ctx->pc = 0x1231f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4160), GPR_U32(ctx, 19));
    // 0x1231fc: 0x24c614c0  addiu       $a2, $a2, 0x14C0
    ctx->pc = 0x1231fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5312));
    // 0x123200: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x123200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x123204: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x123204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x123208: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12320c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x12320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x123210: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x123214: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x123214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x123218: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x123218u;
    SET_GPR_U32(ctx, 31, 0x123220u);
    ctx->pc = 0x12321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123218u;
            // 0x12321c: 0xac5146c0  sw          $s1, 0x46C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123220u; }
        if (ctx->pc != 0x123220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123220u; }
        if (ctx->pc != 0x123220u) { return; }
    }
    ctx->pc = 0x123220u;
label_123220:
    // 0x123220: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x123224: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x123228: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12322c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123230: 0x25292580  addiu       $t1, $t1, 0x2580
    ctx->pc = 0x123230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9600));
    // 0x123234: 0x256b16d8  addiu       $t3, $t3, 0x16D8
    ctx->pc = 0x123234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5848));
    // 0x123238: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x123238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12323c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x12323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x123240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123244: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x123244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x123248: 0xc04410c  jal         func_110430
    ctx->pc = 0x123248u;
    SET_GPR_U32(ctx, 31, 0x123250u);
    ctx->pc = 0x12324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123248u;
            // 0x12324c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123250u; }
        if (ctx->pc != 0x123250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123250u; }
        if (ctx->pc != 0x123250u) { return; }
    }
    ctx->pc = 0x123250u;
label_123250:
    // 0x123250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123254: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123254u;
    {
        const bool branch_taken_0x123254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123254u;
            // 0x123258: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123254) {
            ctx->pc = 0x123268u;
            goto label_123268;
        }
    }
    ctx->pc = 0x12325Cu;
    // 0x12325c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x12325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x123260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123260u;
    {
        const bool branch_taken_0x123260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123260) {
            ctx->pc = 0x123270u;
            goto label_123270;
        }
    }
    ctx->pc = 0x123268u;
label_123268:
    // 0x123268: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x123268u;
    SET_GPR_U32(ctx, 31, 0x123270u);
    ctx->pc = 0x12326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123268u;
            // 0x12326c: 0x8ea416dc  lw          $a0, 0x16DC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123270u; }
        if (ctx->pc != 0x123270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123270u; }
        if (ctx->pc != 0x123270u) { return; }
    }
    ctx->pc = 0x123270u;
label_123270:
    // 0x123270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x123270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123274:
    // 0x123274: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x123274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123278: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x123278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12327c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12327cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123280: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x123280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123284: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x123284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123288: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x123288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12328c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12328cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123290: 0x3e00008  jr          $ra
    ctx->pc = 0x123290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123290u;
            // 0x123294: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123298u;
    // 0x123298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12329c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x12329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1232a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1232a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1232a4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1232a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1232a8: 0x24540fc0  addiu       $s4, $v0, 0xFC0
    ctx->pc = 0x1232a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x1232ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1232acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1232b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1232b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1232b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1232b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1232b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1232bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1232c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1232c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1232c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1232c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1232c8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1232c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1232cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1232CCu;
    {
        const bool branch_taken_0x1232cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1232D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232CCu;
            // 0x1232d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232cc) {
            ctx->pc = 0x1232DCu;
            goto label_1232dc;
        }
    }
    ctx->pc = 0x1232D4u;
    // 0x1232d4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1232D4u;
    {
        const bool branch_taken_0x1232d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232D4u;
            // 0x1232d8: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d4) {
            ctx->pc = 0x123374u;
            goto label_123374;
        }
    }
    ctx->pc = 0x1232DCu;
label_1232dc:
    // 0x1232dc: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x1232dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x1232e0: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x1232E0u;
    SET_GPR_U32(ctx, 31, 0x1232E8u);
    ctx->pc = 0x1232E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1232E0u;
            // 0x1232e4: 0x8ea416dc  lw          $a0, 0x16DC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232E8u; }
        if (ctx->pc != 0x1232E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1232E8u; }
        if (ctx->pc != 0x1232E8u) { return; }
    }
    ctx->pc = 0x1232E8u;
label_1232e8:
    // 0x1232e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1232E8u;
    {
        const bool branch_taken_0x1232e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1232ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232E8u;
            // 0x1232ec: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232e8) {
            ctx->pc = 0x1232F8u;
            goto label_1232f8;
        }
    }
    ctx->pc = 0x1232F0u;
    // 0x1232f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1232F0u;
    {
        const bool branch_taken_0x1232f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1232F0u;
            // 0x1232f4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f0) {
            ctx->pc = 0x123374u;
            goto label_123374;
        }
    }
    ctx->pc = 0x1232F8u;
label_1232f8:
    // 0x1232f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1232f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1232fc: 0x24701040  addiu       $s0, $v1, 0x1040
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
    // 0x123300: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x123304: 0xac731040  sw          $s3, 0x1040($v1)
    ctx->pc = 0x123304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4160), GPR_U32(ctx, 19));
    // 0x123308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12330c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x12330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x123310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123314: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x123314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x123318: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x123318u;
    SET_GPR_U32(ctx, 31, 0x123320u);
    ctx->pc = 0x12331Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123318u;
            // 0x12331c: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123320u; }
        if (ctx->pc != 0x123320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123320u; }
        if (ctx->pc != 0x123320u) { return; }
    }
    ctx->pc = 0x123320u;
label_123320:
    // 0x123320: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x123320u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x123324: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x123324u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x123328: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x123328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12332c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123330: 0x25292580  addiu       $t1, $t1, 0x2580
    ctx->pc = 0x123330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9600));
    // 0x123334: 0x256b16d8  addiu       $t3, $t3, 0x16D8
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5848));
    // 0x123338: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x123338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12333c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x123340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123344: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x123344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x123348: 0xc04410c  jal         func_110430
    ctx->pc = 0x123348u;
    SET_GPR_U32(ctx, 31, 0x123350u);
    ctx->pc = 0x12334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123348u;
            // 0x12334c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123350u; }
        if (ctx->pc != 0x123350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123350u; }
        if (ctx->pc != 0x123350u) { return; }
    }
    ctx->pc = 0x123350u;
label_123350:
    // 0x123350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123354: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123354u;
    {
        const bool branch_taken_0x123354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123354u;
            // 0x123358: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123354) {
            ctx->pc = 0x123368u;
            goto label_123368;
        }
    }
    ctx->pc = 0x12335Cu;
    // 0x12335c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x12335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x123360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123360u;
    {
        const bool branch_taken_0x123360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123360) {
            ctx->pc = 0x123370u;
            goto label_123370;
        }
    }
    ctx->pc = 0x123368u;
label_123368:
    // 0x123368: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x123368u;
    SET_GPR_U32(ctx, 31, 0x123370u);
    ctx->pc = 0x12336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123368u;
            // 0x12336c: 0x8ea416dc  lw          $a0, 0x16DC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123370u; }
        if (ctx->pc != 0x123370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123370u; }
        if (ctx->pc != 0x123370u) { return; }
    }
    ctx->pc = 0x123370u;
label_123370:
    // 0x123370: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x123370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123374:
    // 0x123374: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x123374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123378: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x123378u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12337c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12337cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123380: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x123380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123384: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x123384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123388: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x123388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12338c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12338cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123390: 0x3e00008  jr          $ra
    ctx->pc = 0x123390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123390u;
            // 0x123394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123398u;
}
