#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185370
// Address: 0x185370 - 0x185448
void sub_00185370_0x185370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185370_0x185370");
#endif

    switch (ctx->pc) {
        case 0x185370u: goto label_185370;
        case 0x185374u: goto label_185374;
        case 0x185378u: goto label_185378;
        case 0x18537cu: goto label_18537c;
        case 0x185380u: goto label_185380;
        case 0x185384u: goto label_185384;
        case 0x185388u: goto label_185388;
        case 0x18538cu: goto label_18538c;
        case 0x185390u: goto label_185390;
        case 0x185394u: goto label_185394;
        case 0x185398u: goto label_185398;
        case 0x18539cu: goto label_18539c;
        case 0x1853a0u: goto label_1853a0;
        case 0x1853a4u: goto label_1853a4;
        case 0x1853a8u: goto label_1853a8;
        case 0x1853acu: goto label_1853ac;
        case 0x1853b0u: goto label_1853b0;
        case 0x1853b4u: goto label_1853b4;
        case 0x1853b8u: goto label_1853b8;
        case 0x1853bcu: goto label_1853bc;
        case 0x1853c0u: goto label_1853c0;
        case 0x1853c4u: goto label_1853c4;
        case 0x1853c8u: goto label_1853c8;
        case 0x1853ccu: goto label_1853cc;
        case 0x1853d0u: goto label_1853d0;
        case 0x1853d4u: goto label_1853d4;
        case 0x1853d8u: goto label_1853d8;
        case 0x1853dcu: goto label_1853dc;
        case 0x1853e0u: goto label_1853e0;
        case 0x1853e4u: goto label_1853e4;
        case 0x1853e8u: goto label_1853e8;
        case 0x1853ecu: goto label_1853ec;
        case 0x1853f0u: goto label_1853f0;
        case 0x1853f4u: goto label_1853f4;
        case 0x1853f8u: goto label_1853f8;
        case 0x1853fcu: goto label_1853fc;
        case 0x185400u: goto label_185400;
        case 0x185404u: goto label_185404;
        case 0x185408u: goto label_185408;
        case 0x18540cu: goto label_18540c;
        case 0x185410u: goto label_185410;
        case 0x185414u: goto label_185414;
        case 0x185418u: goto label_185418;
        case 0x18541cu: goto label_18541c;
        case 0x185420u: goto label_185420;
        case 0x185424u: goto label_185424;
        case 0x185428u: goto label_185428;
        case 0x18542cu: goto label_18542c;
        case 0x185430u: goto label_185430;
        case 0x185434u: goto label_185434;
        case 0x185438u: goto label_185438;
        case 0x18543cu: goto label_18543c;
        case 0x185440u: goto label_185440;
        case 0x185444u: goto label_185444;
        default: break;
    }

    ctx->pc = 0x185370u;

label_185370:
    // 0x185370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185374:
    // 0x185374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185378:
    // 0x185378: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x185378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18537c:
    // 0x18537c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185380:
    // 0x185380: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x185380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185384:
    // 0x185384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185388:
    // 0x185388: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_18538c:
    if (ctx->pc == 0x18538Cu) {
        ctx->pc = 0x18538Cu;
            // 0x18538c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x185390u;
        goto label_185390;
    }
    ctx->pc = 0x185388u;
    {
        const bool branch_taken_0x185388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185388u;
            // 0x18538c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185388) {
            ctx->pc = 0x1853A8u;
            goto label_1853a8;
        }
    }
    ctx->pc = 0x185390u;
label_185390:
    // 0x185390: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185394:
    // 0x185394: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185398:
    // 0x185398: 0x24847a98  addiu       $a0, $a0, 0x7A98
    ctx->pc = 0x185398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31384));
label_18539c:
    // 0x18539c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1853a0:
    if (ctx->pc == 0x1853A0u) {
        ctx->pc = 0x1853A0u;
            // 0x1853a0: 0x24a57988  addiu       $a1, $a1, 0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
        ctx->pc = 0x1853A4u;
        goto label_1853a4;
    }
    ctx->pc = 0x18539Cu;
    {
        const bool branch_taken_0x18539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18539Cu;
            // 0x1853a0: 0x24a57988  addiu       $a1, $a1, 0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18539c) {
            ctx->pc = 0x1853C4u;
            goto label_1853c4;
        }
    }
    ctx->pc = 0x1853A4u;
label_1853a4:
    // 0x1853a4: 0x0  nop
    ctx->pc = 0x1853a4u;
    // NOP
label_1853a8:
    // 0x1853a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1853ac:
    // 0x1853ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1853b0:
    if (ctx->pc == 0x1853B0u) {
        ctx->pc = 0x1853B4u;
        goto label_1853b4;
    }
    ctx->pc = 0x1853ACu;
    {
        const bool branch_taken_0x1853ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853ac) {
            ctx->pc = 0x1853D8u;
            goto label_1853d8;
        }
    }
    ctx->pc = 0x1853B4u;
label_1853b4:
    // 0x1853b4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1853b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1853b8:
    // 0x1853b8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1853bc:
    // 0x1853bc: 0x24847aa8  addiu       $a0, $a0, 0x7AA8
    ctx->pc = 0x1853bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31400));
label_1853c0:
    // 0x1853c0: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_1853c4:
    // 0x1853c4: 0xc061296  jal         func_184A58
label_1853c8:
    if (ctx->pc == 0x1853C8u) {
        ctx->pc = 0x1853CCu;
        goto label_1853cc;
    }
    ctx->pc = 0x1853C4u;
    SET_GPR_U32(ctx, 31, 0x1853CCu);
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853CCu; }
        if (ctx->pc != 0x1853CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A58_0x184a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1853CCu; }
        if (ctx->pc != 0x1853CCu) { return; }
    }
    ctx->pc = 0x1853CCu;
label_1853cc:
    // 0x1853cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1853d0:
    if (ctx->pc == 0x1853D0u) {
        ctx->pc = 0x1853D0u;
            // 0x1853d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1853D4u;
        goto label_1853d4;
    }
    ctx->pc = 0x1853CCu;
    {
        const bool branch_taken_0x1853cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853CCu;
            // 0x1853d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853cc) {
            ctx->pc = 0x185428u;
            goto label_185428;
        }
    }
    ctx->pc = 0x1853D4u;
label_1853d4:
    // 0x1853d4: 0x0  nop
    ctx->pc = 0x1853d4u;
    // NOP
label_1853d8:
    // 0x1853d8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1853dc:
    if (ctx->pc == 0x1853DCu) {
        ctx->pc = 0x1853DCu;
            // 0x1853dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1853E0u;
        goto label_1853e0;
    }
    ctx->pc = 0x1853D8u;
    {
        const bool branch_taken_0x1853d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853D8u;
            // 0x1853dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853d8) {
            ctx->pc = 0x18541Cu;
            goto label_18541c;
        }
    }
    ctx->pc = 0x1853E0u;
label_1853e0:
    // 0x1853e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1853e4:
    // 0x1853e4: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_1853e8:
    if (ctx->pc == 0x1853E8u) {
        ctx->pc = 0x1853E8u;
            // 0x1853e8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = 0x1853ECu;
        goto label_1853ec;
    }
    ctx->pc = 0x1853E4u;
    {
        const bool branch_taken_0x1853e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1853e4) {
            ctx->pc = 0x1853E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1853E4u;
            // 0x1853e8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185408u;
            goto label_185408;
        }
    }
    ctx->pc = 0x1853ECu;
label_1853ec:
    // 0x1853ec: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1853ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1853f0:
    // 0x1853f0: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x1853f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1853f4:
    // 0x1853f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1853f8:
    if (ctx->pc == 0x1853F8u) {
        ctx->pc = 0x1853F8u;
            // 0x1853f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1853FCu;
        goto label_1853fc;
    }
    ctx->pc = 0x1853F4u;
    {
        const bool branch_taken_0x1853f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853F4u;
            // 0x1853f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853f4) {
            ctx->pc = 0x18541Cu;
            goto label_18541c;
        }
    }
    ctx->pc = 0x1853FCu;
label_1853fc:
    // 0x1853fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_185400:
    if (ctx->pc == 0x185400u) {
        ctx->pc = 0x185400u;
            // 0x185400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185404u;
        goto label_185404;
    }
    ctx->pc = 0x1853FCu;
    {
        const bool branch_taken_0x1853fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853FCu;
            // 0x185400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853fc) {
            ctx->pc = 0x18541Cu;
            goto label_18541c;
        }
    }
    ctx->pc = 0x185404u;
label_185404:
    // 0x185404: 0x0  nop
    ctx->pc = 0x185404u;
    // NOP
label_185408:
    // 0x185408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18540c:
    if (ctx->pc == 0x18540Cu) {
        ctx->pc = 0x18540Cu;
            // 0x18540c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185410u;
        goto label_185410;
    }
    ctx->pc = 0x185408u;
    {
        const bool branch_taken_0x185408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185408u;
            // 0x18540c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185408) {
            ctx->pc = 0x18541Cu;
            goto label_18541c;
        }
    }
    ctx->pc = 0x185410u;
label_185410:
    // 0x185410: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_185414:
    // 0x185414: 0x40f809  jalr        $v0
label_185418:
    if (ctx->pc == 0x185418u) {
        ctx->pc = 0x185418u;
            // 0x185418: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x18541Cu;
        goto label_18541c;
    }
    ctx->pc = 0x185414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18541Cu);
        ctx->pc = 0x185418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185414u;
            // 0x185418: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18541Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18541Cu; }
            if (ctx->pc != 0x18541Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18541Cu;
label_18541c:
    // 0x18541c: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x18541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_185420:
    // 0x185420: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x185420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_185424:
    // 0x185424: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x185424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_185428:
    // 0x185428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18542c:
    // 0x18542c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18542cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185430:
    // 0x185430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185434:
    // 0x185434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185438:
    // 0x185438: 0x3e00008  jr          $ra
label_18543c:
    if (ctx->pc == 0x18543Cu) {
        ctx->pc = 0x18543Cu;
            // 0x18543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185440u;
        goto label_185440;
    }
    ctx->pc = 0x185438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185438u;
            // 0x18543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185440u;
label_185440:
    // 0x185440: 0x3e00008  jr          $ra
label_185444:
    if (ctx->pc == 0x185444u) {
        ctx->pc = 0x185444u;
            // 0x185444: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x185448u;
        goto label_fallthrough_0x185440;
    }
    ctx->pc = 0x185440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185440u;
            // 0x185444: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185440:
    ctx->pc = 0x185448u;
}
