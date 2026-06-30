#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001702D8
// Address: 0x1702d8 - 0x1703b8
void sub_001702D8_0x1702d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001702D8_0x1702d8");
#endif

    switch (ctx->pc) {
        case 0x1702f8u: goto label_1702f8;
        case 0x170320u: goto label_170320;
        case 0x170340u: goto label_170340;
        case 0x170358u: goto label_170358;
        case 0x170398u: goto label_170398;
        case 0x1703a0u: goto label_1703a0;
        default: break;
    }

    ctx->pc = 0x1702d8u;

    // 0x1702d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1702dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1702dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1702e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1702e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1702e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1702e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1702ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1702f0: 0xc0593d0  jal         func_164F40
    ctx->pc = 0x1702F0u;
    SET_GPR_U32(ctx, 31, 0x1702F8u);
    ctx->pc = 0x1702F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702F0u;
            // 0x1702f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F40u;
    if (runtime->hasFunction(0x164F40u)) {
        auto targetFn = runtime->lookupFunction(0x164F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702F8u; }
        if (ctx->pc != 0x1702F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F40_0x164f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702F8u; }
        if (ctx->pc != 0x1702F8u) { return; }
    }
    ctx->pc = 0x1702F8u;
label_1702f8:
    // 0x1702f8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1702F8u;
    {
        const bool branch_taken_0x1702f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702F8u;
            // 0x1702fc: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702f8) {
            ctx->pc = 0x170328u;
            goto label_170328;
        }
    }
    ctx->pc = 0x170300u;
    // 0x170300: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x170300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x170304: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x170308: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x170308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17030c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17030Cu;
    {
        const bool branch_taken_0x17030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17030c) {
            ctx->pc = 0x170310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17030Cu;
            // 0x170310: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170328u;
            goto label_170328;
        }
    }
    ctx->pc = 0x170314u;
    // 0x170314: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x170314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170318: 0xc0593d4  jal         func_164F50
    ctx->pc = 0x170318u;
    SET_GPR_U32(ctx, 31, 0x170320u);
    ctx->pc = 0x17031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170318u;
            // 0x17031c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F50u;
    if (runtime->hasFunction(0x164F50u)) {
        auto targetFn = runtime->lookupFunction(0x164F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170320u; }
        if (ctx->pc != 0x170320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F50_0x164f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170320u; }
        if (ctx->pc != 0x170320u) { return; }
    }
    ctx->pc = 0x170320u;
label_170320:
    // 0x170320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170320u;
    {
        const bool branch_taken_0x170320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170320u;
            // 0x170324: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170320) {
            ctx->pc = 0x17032Cu;
            goto label_17032c;
        }
    }
    ctx->pc = 0x170328u;
label_170328:
    // 0x170328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17032c:
    // 0x17032c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170334: 0x3e00008  jr          $ra
    ctx->pc = 0x170334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170334u;
            // 0x170338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x0  nop
    ctx->pc = 0x17033cu;
    // NOP
label_170340:
    // 0x170340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17034c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170350: 0xc0593d0  jal         func_164F40
    ctx->pc = 0x170350u;
    SET_GPR_U32(ctx, 31, 0x170358u);
    ctx->pc = 0x170354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170350u;
            // 0x170354: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F40u;
    if (runtime->hasFunction(0x164F40u)) {
        auto targetFn = runtime->lookupFunction(0x164F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170358u; }
        if (ctx->pc != 0x170358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164F40_0x164f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170358u; }
        if (ctx->pc != 0x170358u) { return; }
    }
    ctx->pc = 0x170358u;
label_170358:
    // 0x170358: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170358u;
    {
        const bool branch_taken_0x170358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x170358) {
            ctx->pc = 0x17035Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170358u;
            // 0x17035c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170388u;
            goto label_170388;
        }
    }
    ctx->pc = 0x170360u;
    // 0x170360: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x170360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x170364: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x170364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x170368: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17036c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17036Cu;
    {
        const bool branch_taken_0x17036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17036c) {
            ctx->pc = 0x170370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17036Cu;
            // 0x170370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170388u;
            goto label_170388;
        }
    }
    ctx->pc = 0x170374u;
    // 0x170374: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x170374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17037c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17037cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170380: 0x80593d8  j           func_164F60
    ctx->pc = 0x170380u;
    ctx->pc = 0x170384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170380u;
            // 0x170384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F60u;
    {
        auto targetFn = runtime->lookupFunction(0x164F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170388u;
label_170388:
    // 0x170388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17038c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170390: 0x3e00008  jr          $ra
    ctx->pc = 0x170390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170390u;
            // 0x170394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170398u;
label_170398:
    // 0x170398: 0x3e00008  jr          $ra
    ctx->pc = 0x170398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170398u;
            // 0x17039c: 0x8c820098  lw          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1703A0u;
label_1703a0:
    // 0x1703a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1703a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1703a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1703a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1703a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1703a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1703ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1703acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1703b0: 0x805939e  j           func_164E78
    ctx->pc = 0x1703B0u;
    ctx->pc = 0x1703B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1703B0u;
            // 0x1703b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E78u;
    {
        auto targetFn = runtime->lookupFunction(0x164E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1703B8u;
}
