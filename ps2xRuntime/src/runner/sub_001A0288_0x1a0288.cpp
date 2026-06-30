#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0288
// Address: 0x1a0288 - 0x1a0360
void sub_001A0288_0x1a0288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0288_0x1a0288");
#endif

    switch (ctx->pc) {
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a0308u: goto label_1a0308;
        case 0x1a0310u: goto label_1a0310;
        case 0x1a031cu: goto label_1a031c;
        case 0x1a0328u: goto label_1a0328;
        case 0x1a0330u: goto label_1a0330;
        default: break;
    }

    ctx->pc = 0x1a0288u;

    // 0x1a0288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a028c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a029c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a02a0: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A02A0u;
    SET_GPR_U32(ctx, 31, 0x1A02A8u);
    ctx->pc = 0x1A02A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02A0u;
            // 0x1a02a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A8u; }
        if (ctx->pc != 0x1A02A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A8u; }
        if (ctx->pc != 0x1A02A8u) { return; }
    }
    ctx->pc = 0x1A02A8u;
label_1a02a8:
    // 0x1a02a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a02a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02b0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a02b4: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A02B4u;
    {
        const bool branch_taken_0x1a02b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02B4u;
            // 0x1a02b8: 0x2484a4d0  addiu       $a0, $a0, -0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02b4) {
            ctx->pc = 0x1A02D8u;
            goto label_1a02d8;
        }
    }
    ctx->pc = 0x1A02BCu;
    // 0x1a02bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a02bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a02c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a02c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a02c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a02c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a02cc: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A02CCu;
    ctx->pc = 0x1A02D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02CCu;
            // 0x1a02d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A02D4u;
    // 0x1a02d4: 0x0  nop
    ctx->pc = 0x1a02d4u;
    // NOP
label_1a02d8:
    // 0x1a02d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A02D8u;
    {
        const bool branch_taken_0x1a02d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02D8u;
            // 0x1a02dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d8) {
            ctx->pc = 0x1A0300u;
            goto label_1a0300;
        }
    }
    ctx->pc = 0x1A02E0u;
    // 0x1a02e0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a02e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a02e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a02e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a02ec: 0x2484a500  addiu       $a0, $a0, -0x5B00
    ctx->pc = 0x1a02ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    // 0x1a02f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a02f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a02f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a02f8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A02F8u;
    ctx->pc = 0x1A02FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02F8u;
            // 0x1a02fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0300u;
label_1a0300:
    // 0x1a0300: 0xc06719a  jal         func_19C668
    ctx->pc = 0x1A0300u;
    SET_GPR_U32(ctx, 31, 0x1A0308u);
    ctx->pc = 0x1A0304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0300u;
            // 0x1a0304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C668u;
    if (runtime->hasFunction(0x19C668u)) {
        auto targetFn = runtime->lookupFunction(0x19C668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0308u; }
        if (ctx->pc != 0x1A0308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C668_0x19c668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0308u; }
        if (ctx->pc != 0x1A0308u) { return; }
    }
    ctx->pc = 0x1A0308u;
label_1a0308:
    // 0x1a0308: 0xc06011a  jal         func_180468
    ctx->pc = 0x1A0308u;
    SET_GPR_U32(ctx, 31, 0x1A0310u);
    ctx->pc = 0x1A030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0308u;
            // 0x1a030c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0310u; }
        if (ctx->pc != 0x1A0310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0310u; }
        if (ctx->pc != 0x1A0310u) { return; }
    }
    ctx->pc = 0x1A0310u;
label_1a0310:
    // 0x1a0310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0314: 0xc068032  jal         func_1A00C8
    ctx->pc = 0x1A0314u;
    SET_GPR_U32(ctx, 31, 0x1A031Cu);
    ctx->pc = 0x1A0318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0314u;
            // 0x1a0318: 0x8e050418  lw          $a1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00C8u;
    if (runtime->hasFunction(0x1A00C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A00C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A031Cu; }
        if (ctx->pc != 0x1A031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A00C8_0x1a00c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A031Cu; }
        if (ctx->pc != 0x1A031Cu) { return; }
    }
    ctx->pc = 0x1A031Cu;
label_1a031c:
    // 0x1a031c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0320: 0xc06808a  jal         func_1A0228
    ctx->pc = 0x1A0320u;
    SET_GPR_U32(ctx, 31, 0x1A0328u);
    ctx->pc = 0x1A0324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0320u;
            // 0x1a0324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0228u;
    if (runtime->hasFunction(0x1A0228u)) {
        auto targetFn = runtime->lookupFunction(0x1A0228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0328u; }
        if (ctx->pc != 0x1A0328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0228_0x1a0228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0328u; }
        if (ctx->pc != 0x1A0328u) { return; }
    }
    ctx->pc = 0x1A0328u;
label_1a0328:
    // 0x1a0328: 0xc068062  jal         func_1A0188
    ctx->pc = 0x1A0328u;
    SET_GPR_U32(ctx, 31, 0x1A0330u);
    ctx->pc = 0x1A032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0328u;
            // 0x1a032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0188u;
    if (runtime->hasFunction(0x1A0188u)) {
        auto targetFn = runtime->lookupFunction(0x1A0188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0330u; }
        if (ctx->pc != 0x1A0330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0188_0x1a0188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0330u; }
        if (ctx->pc != 0x1A0330u) { return; }
    }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0xae110560  sw          $s1, 0x560($s0)
    ctx->pc = 0x1a0330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 17));
    // 0x1a0334: 0x8e02055c  lw          $v0, 0x55C($s0)
    ctx->pc = 0x1a0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x1a0338: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0338u;
    {
        const bool branch_taken_0x1a0338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0338u;
            // 0x1a033c: 0xae110558  sw          $s1, 0x558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0338) {
            ctx->pc = 0x1A0344u;
            goto label_1a0344;
        }
    }
    ctx->pc = 0x1A0340u;
    // 0x1a0340: 0xae110564  sw          $s1, 0x564($s0)
    ctx->pc = 0x1a0340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 17));
label_1a0344:
    // 0x1a0344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a034c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a034cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a0350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0354: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0354u;
            // 0x1a0358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A035Cu;
    // 0x1a035c: 0x0  nop
    ctx->pc = 0x1a035cu;
    // NOP
}
