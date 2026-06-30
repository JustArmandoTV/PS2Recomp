#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181540
// Address: 0x181540 - 0x181918
void sub_00181540_0x181540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181540_0x181540");
#endif

    switch (ctx->pc) {
        case 0x181560u: goto label_181560;
        case 0x1815f8u: goto label_1815f8;
        case 0x181614u: goto label_181614;
        case 0x18162cu: goto label_18162c;
        case 0x181634u: goto label_181634;
        case 0x18166cu: goto label_18166c;
        case 0x181684u: goto label_181684;
        case 0x1816c8u: goto label_1816c8;
        case 0x1816d8u: goto label_1816d8;
        case 0x181738u: goto label_181738;
        case 0x181774u: goto label_181774;
        case 0x1817ecu: goto label_1817ec;
        case 0x181824u: goto label_181824;
        case 0x18185cu: goto label_18185c;
        case 0x181880u: goto label_181880;
        case 0x1818a0u: goto label_1818a0;
        case 0x1818b4u: goto label_1818b4;
        case 0x1818c8u: goto label_1818c8;
        case 0x1818d0u: goto label_1818d0;
        case 0x1818f8u: goto label_1818f8;
        default: break;
    }

    ctx->pc = 0x181540u;

label_181540:
    // 0x181540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181544: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x181548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18154c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18154cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x181550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x181554: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x181558: 0xc06052a  jal         func_1814A8
    ctx->pc = 0x181558u;
    SET_GPR_U32(ctx, 31, 0x181560u);
    ctx->pc = 0x18155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181558u;
            // 0x18155c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814A8u;
    if (runtime->hasFunction(0x1814A8u)) {
        auto targetFn = runtime->lookupFunction(0x1814A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181560u; }
        if (ctx->pc != 0x181560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814A8_0x1814a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181560u; }
        if (ctx->pc != 0x181560u) { return; }
    }
    ctx->pc = 0x181560u;
label_181560:
    // 0x181560: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x181560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x181564: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x181564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x181568: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18156c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181570: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181570u;
    {
        const bool branch_taken_0x181570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181570) {
            ctx->pc = 0x181574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181570u;
            // 0x181574: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181578u;
            goto label_181578;
        }
    }
    ctx->pc = 0x181578u;
label_181578:
    // 0x181578: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18157c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x18157cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x181580: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x181580u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181584: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x181584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x181588: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x181588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x18158c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18158cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x181590: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x181590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x181594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181598: 0x1012  mflo        $v0
    ctx->pc = 0x181598u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x18159c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1815a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1815a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1815a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1815A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1815A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815A4u;
            // 0x1815a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1815ACu;
    // 0x1815ac: 0x0  nop
    ctx->pc = 0x1815acu;
    // NOP
    // 0x1815b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1815b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1815b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1815b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1815b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1815bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1815c0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1815C0u;
    {
        const bool branch_taken_0x1815c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1815C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815C0u;
            // 0x1815c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815c0) {
            ctx->pc = 0x1815D8u;
            goto label_1815d8;
        }
    }
    ctx->pc = 0x1815C8u;
    // 0x1815c8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1815cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1815CCu;
    {
        const bool branch_taken_0x1815cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815CCu;
            // 0x1815d0: 0x24a56bd0  addiu       $a1, $a1, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815cc) {
            ctx->pc = 0x18160Cu;
            goto label_18160c;
        }
    }
    ctx->pc = 0x1815D4u;
    // 0x1815d4: 0x0  nop
    ctx->pc = 0x1815d4u;
    // NOP
label_1815d8:
    // 0x1815d8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1815D8u;
    {
        const bool branch_taken_0x1815d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815D8u;
            // 0x1815dc: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815d8) {
            ctx->pc = 0x1815F0u;
            goto label_1815f0;
        }
    }
    ctx->pc = 0x1815E0u;
    // 0x1815e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1815e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1815E4u;
    {
        const bool branch_taken_0x1815e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815E4u;
            // 0x1815e8: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815e4) {
            ctx->pc = 0x18160Cu;
            goto label_18160c;
        }
    }
    ctx->pc = 0x1815ECu;
    // 0x1815ec: 0x0  nop
    ctx->pc = 0x1815ecu;
    // NOP
label_1815f0:
    // 0x1815f0: 0xc060532  jal         func_1814C8
    ctx->pc = 0x1815F0u;
    SET_GPR_U32(ctx, 31, 0x1815F8u);
    ctx->pc = 0x1814C8u;
    if (runtime->hasFunction(0x1814C8u)) {
        auto targetFn = runtime->lookupFunction(0x1814C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815F8u; }
        if (ctx->pc != 0x1815F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814C8_0x1814c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815F8u; }
        if (ctx->pc != 0x1815F8u) { return; }
    }
    ctx->pc = 0x1815F8u;
label_1815f8:
    // 0x1815f8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1815fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1815fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181600: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x181604: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181604u;
    {
        const bool branch_taken_0x181604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x181608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181604u;
            // 0x181608: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181604) {
            ctx->pc = 0x181620u;
            goto label_181620;
        }
    }
    ctx->pc = 0x18160Cu;
label_18160c:
    // 0x18160c: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x18160Cu;
    SET_GPR_U32(ctx, 31, 0x181614u);
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181614u; }
        if (ctx->pc != 0x181614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181614u; }
        if (ctx->pc != 0x181614u) { return; }
    }
    ctx->pc = 0x181614u;
label_181614:
    // 0x181614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181614u;
    {
        const bool branch_taken_0x181614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181614u;
            // 0x181618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181614) {
            ctx->pc = 0x181638u;
            goto label_181638;
        }
    }
    ctx->pc = 0x18161Cu;
    // 0x18161c: 0x0  nop
    ctx->pc = 0x18161cu;
    // NOP
label_181620:
    // 0x181620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181624: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x181624u;
    SET_GPR_U32(ctx, 31, 0x18162Cu);
    ctx->pc = 0x181628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181624u;
            // 0x181628: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18162Cu; }
        if (ctx->pc != 0x18162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18162Cu; }
        if (ctx->pc != 0x18162Cu) { return; }
    }
    ctx->pc = 0x18162Cu;
label_18162c:
    // 0x18162c: 0xc060550  jal         func_181540
    ctx->pc = 0x18162Cu;
    SET_GPR_U32(ctx, 31, 0x181634u);
    ctx->pc = 0x181630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18162Cu;
            // 0x181630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    goto label_181540;
    ctx->pc = 0x181634u;
label_181634:
    // 0x181634: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181638:
    // 0x181638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18163c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18163cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181644: 0x3e00008  jr          $ra
    ctx->pc = 0x181644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181644u;
            // 0x181648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18164Cu;
    // 0x18164c: 0x0  nop
    ctx->pc = 0x18164cu;
    // NOP
    // 0x181650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18165c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18165Cu;
    {
        const bool branch_taken_0x18165c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x181660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18165Cu;
            // 0x181660: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18165c) {
            ctx->pc = 0x181684u;
            goto label_181684;
        }
    }
    ctx->pc = 0x181664u;
    // 0x181664: 0xc060646  jal         func_181918
    ctx->pc = 0x181664u;
    SET_GPR_U32(ctx, 31, 0x18166Cu);
    ctx->pc = 0x181918u;
    if (runtime->hasFunction(0x181918u)) {
        auto targetFn = runtime->lookupFunction(0x181918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18166Cu; }
        if (ctx->pc != 0x18166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181918_0x181918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18166Cu; }
        if (ctx->pc != 0x18166Cu) { return; }
    }
    ctx->pc = 0x18166Cu;
label_18166c:
    // 0x18166c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181670: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181674: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181674u;
    {
        const bool branch_taken_0x181674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x181678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181674u;
            // 0x181678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181674) {
            ctx->pc = 0x181684u;
            goto label_181684;
        }
    }
    ctx->pc = 0x18167Cu;
    // 0x18167c: 0xc060548  jal         func_181520
    ctx->pc = 0x18167Cu;
    SET_GPR_U32(ctx, 31, 0x181684u);
    ctx->pc = 0x181680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18167Cu;
            // 0x181680: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181520u;
    if (runtime->hasFunction(0x181520u)) {
        auto targetFn = runtime->lookupFunction(0x181520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181684u; }
        if (ctx->pc != 0x181684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181520_0x181520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181684u; }
        if (ctx->pc != 0x181684u) { return; }
    }
    ctx->pc = 0x181684u;
label_181684:
    // 0x181684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181688: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18168c: 0x3e00008  jr          $ra
    ctx->pc = 0x18168Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18168Cu;
            // 0x181690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181694u;
    // 0x181694: 0x0  nop
    ctx->pc = 0x181694u;
    // NOP
    // 0x181698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18169c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1816a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1816a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1816a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1816a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1816a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1816acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1816b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1816b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816b4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1816B4u;
    {
        const bool branch_taken_0x1816b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816B4u;
            // 0x1816b8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816b4) {
            ctx->pc = 0x1816D0u;
            goto label_1816d0;
        }
    }
    ctx->pc = 0x1816BCu;
    // 0x1816bc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1816bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1816c0: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x1816C0u;
    SET_GPR_U32(ctx, 31, 0x1816C8u);
    ctx->pc = 0x1816C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816C0u;
            // 0x1816c4: 0x24a56c50  addiu       $a1, $a1, 0x6C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816C8u; }
        if (ctx->pc != 0x1816C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816C8u; }
        if (ctx->pc != 0x1816C8u) { return; }
    }
    ctx->pc = 0x1816C8u;
label_1816c8:
    // 0x1816c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1816C8u;
    {
        const bool branch_taken_0x1816c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816C8u;
            // 0x1816cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816c8) {
            ctx->pc = 0x18173Cu;
            goto label_18173c;
        }
    }
    ctx->pc = 0x1816D0u;
label_1816d0:
    // 0x1816d0: 0xc0604a0  jal         func_181280
    ctx->pc = 0x1816D0u;
    SET_GPR_U32(ctx, 31, 0x1816D8u);
    ctx->pc = 0x181280u;
    if (runtime->hasFunction(0x181280u)) {
        auto targetFn = runtime->lookupFunction(0x181280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D8u; }
        if (ctx->pc != 0x1816D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181280_0x181280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D8u; }
        if (ctx->pc != 0x1816D8u) { return; }
    }
    ctx->pc = 0x1816D8u;
label_1816d8:
    // 0x1816d8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816D8u;
    {
        const bool branch_taken_0x1816d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816D8u;
            // 0x1816dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816d8) {
            ctx->pc = 0x1816E8u;
            goto label_1816e8;
        }
    }
    ctx->pc = 0x1816E0u;
    // 0x1816e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1816E0u;
    {
        const bool branch_taken_0x1816e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816E0u;
            // 0x1816e4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e0) {
            ctx->pc = 0x181718u;
            goto label_181718;
        }
    }
    ctx->pc = 0x1816E8u;
label_1816e8:
    // 0x1816e8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1816E8u;
    {
        const bool branch_taken_0x1816e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1816ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816E8u;
            // 0x1816ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e8) {
            ctx->pc = 0x181700u;
            goto label_181700;
        }
    }
    ctx->pc = 0x1816F0u;
    // 0x1816f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1816f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1816f4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1816f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1816F8u;
    {
        const bool branch_taken_0x1816f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816F8u;
            // 0x1816fc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816f8) {
            ctx->pc = 0x18171Cu;
            goto label_18171c;
        }
    }
    ctx->pc = 0x181700u;
label_181700:
    // 0x181700: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181700u;
    {
        const bool branch_taken_0x181700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x181704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181700u;
            // 0x181704: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181700) {
            ctx->pc = 0x18171Cu;
            goto label_18171c;
        }
    }
    ctx->pc = 0x181708u;
    // 0x181708: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18170c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x181710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181710u;
    {
        const bool branch_taken_0x181710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181710u;
            // 0x181714: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181710) {
            ctx->pc = 0x18171Cu;
            goto label_18171c;
        }
    }
    ctx->pc = 0x181718u;
label_181718:
    // 0x181718: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x181718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18171c:
    // 0x18171c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x181720: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x181724: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x181724u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x181728: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x181728u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18172c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x18172cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x181730: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181730u;
    SET_GPR_U32(ctx, 31, 0x181738u);
    ctx->pc = 0x181734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181730u;
            // 0x181734: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (runtime->hasFunction(0x181298u)) {
        auto targetFn = runtime->lookupFunction(0x181298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181738u; }
        if (ctx->pc != 0x181738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181298_0x181298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181738u; }
        if (ctx->pc != 0x181738u) { return; }
    }
    ctx->pc = 0x181738u;
label_181738:
    // 0x181738: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18173c:
    // 0x18173c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18173cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x181748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18174c: 0x3e00008  jr          $ra
    ctx->pc = 0x18174Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18174Cu;
            // 0x181750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181754u;
    // 0x181754: 0x0  nop
    ctx->pc = 0x181754u;
    // NOP
    // 0x181758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18175c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18175cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181760: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181760u;
    {
        const bool branch_taken_0x181760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181760u;
            // 0x181764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181760) {
            ctx->pc = 0x181780u;
            goto label_181780;
        }
    }
    ctx->pc = 0x181768u;
    // 0x181768: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x18176c: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x18176Cu;
    SET_GPR_U32(ctx, 31, 0x181774u);
    ctx->pc = 0x181770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18176Cu;
            // 0x181770: 0x24a56c70  addiu       $a1, $a1, 0x6C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181774u; }
        if (ctx->pc != 0x181774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181774u; }
        if (ctx->pc != 0x181774u) { return; }
    }
    ctx->pc = 0x181774u;
label_181774:
    // 0x181774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181774u;
    {
        const bool branch_taken_0x181774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181774u;
            // 0x181778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181774) {
            ctx->pc = 0x181784u;
            goto label_181784;
        }
    }
    ctx->pc = 0x18177Cu;
    // 0x18177c: 0x0  nop
    ctx->pc = 0x18177cu;
    // NOP
label_181780:
    // 0x181780: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_181784:
    // 0x181784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181788: 0x3e00008  jr          $ra
    ctx->pc = 0x181788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181788u;
            // 0x18178c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181790u;
    // 0x181790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181794: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x181794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x181798: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18179c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1817a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1817a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817a4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1817a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1817a8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1817a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1817acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1817b0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1817B0u;
    {
        const bool branch_taken_0x1817b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817B0u;
            // 0x1817b4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817b0) {
            ctx->pc = 0x1817C8u;
            goto label_1817c8;
        }
    }
    ctx->pc = 0x1817B8u;
    // 0x1817b8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1817bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1817BCu;
    {
        const bool branch_taken_0x1817bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817BCu;
            // 0x1817c0: 0x24a56c90  addiu       $a1, $a1, 0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817bc) {
            ctx->pc = 0x1817E4u;
            goto label_1817e4;
        }
    }
    ctx->pc = 0x1817C4u;
    // 0x1817c4: 0x0  nop
    ctx->pc = 0x1817c4u;
    // NOP
label_1817c8:
    // 0x1817c8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1817C8u;
    {
        const bool branch_taken_0x1817c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1817CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817C8u;
            // 0x1817cc: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817c8) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817D0u;
    // 0x1817d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1817D0u;
    {
        const bool branch_taken_0x1817d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817D0u;
            // 0x1817d4: 0x24a56cb0  addiu       $a1, $a1, 0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d0) {
            ctx->pc = 0x1817E4u;
            goto label_1817e4;
        }
    }
    ctx->pc = 0x1817D8u;
label_1817d8:
    // 0x1817d8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1817D8u;
    {
        const bool branch_taken_0x1817d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817D8u;
            // 0x1817dc: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d8) {
            ctx->pc = 0x1817F8u;
            goto label_1817f8;
        }
    }
    ctx->pc = 0x1817E0u;
    // 0x1817e0: 0x24a56cd0  addiu       $a1, $a1, 0x6CD0
    ctx->pc = 0x1817e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27856));
label_1817e4:
    // 0x1817e4: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x1817E4u;
    SET_GPR_U32(ctx, 31, 0x1817ECu);
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817ECu; }
        if (ctx->pc != 0x1817ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817ECu; }
        if (ctx->pc != 0x1817ECu) { return; }
    }
    ctx->pc = 0x1817ECu;
label_1817ec:
    // 0x1817ec: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1817ECu;
    {
        const bool branch_taken_0x1817ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817ECu;
            // 0x1817f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817ec) {
            ctx->pc = 0x1818FCu;
            goto label_1818fc;
        }
    }
    ctx->pc = 0x1817F4u;
    // 0x1817f4: 0x0  nop
    ctx->pc = 0x1817f4u;
    // NOP
label_1817f8:
    // 0x1817f8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1817F8u;
    {
        const bool branch_taken_0x1817f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1817f8) {
            ctx->pc = 0x1817FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1817F8u;
            // 0x1817fc: 0x82430001  lb          $v1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181810u;
            goto label_181810;
        }
    }
    ctx->pc = 0x181800u;
    // 0x181800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181808: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x181808u;
    {
        const bool branch_taken_0x181808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181808u;
            // 0x18180c: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181808) {
            ctx->pc = 0x1818FCu;
            goto label_1818fc;
        }
    }
    ctx->pc = 0x181810u;
label_181810:
    // 0x181810: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181814: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x181814u;
    {
        const bool branch_taken_0x181814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181814u;
            // 0x181818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181814) {
            ctx->pc = 0x1818FCu;
            goto label_1818fc;
        }
    }
    ctx->pc = 0x18181Cu;
    // 0x18181c: 0xc0604a0  jal         func_181280
    ctx->pc = 0x18181Cu;
    SET_GPR_U32(ctx, 31, 0x181824u);
    ctx->pc = 0x181280u;
    if (runtime->hasFunction(0x181280u)) {
        auto targetFn = runtime->lookupFunction(0x181280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181824u; }
        if (ctx->pc != 0x181824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181280_0x181280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181824u; }
        if (ctx->pc != 0x181824u) { return; }
    }
    ctx->pc = 0x181824u;
label_181824:
    // 0x181824: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x181824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x181828: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x181828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x18182c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x181830: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181834: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181838: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x181838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18183c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x18183cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x181840: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x181840u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x181844: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x181844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x181848: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181848u;
    {
        const bool branch_taken_0x181848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181848u;
            // 0x18184c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181848) {
            ctx->pc = 0x181868u;
            goto label_181868;
        }
    }
    ctx->pc = 0x181850u;
    // 0x181850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181854: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181854u;
    SET_GPR_U32(ctx, 31, 0x18185Cu);
    ctx->pc = 0x181858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181854u;
            // 0x181858: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (runtime->hasFunction(0x181298u)) {
        auto targetFn = runtime->lookupFunction(0x181298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18185Cu; }
        if (ctx->pc != 0x18185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181298_0x181298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18185Cu; }
        if (ctx->pc != 0x18185Cu) { return; }
    }
    ctx->pc = 0x18185Cu;
label_18185c:
    // 0x18185c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18185Cu;
    {
        const bool branch_taken_0x18185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18185Cu;
            // 0x181860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18185c) {
            ctx->pc = 0x1818FCu;
            goto label_1818fc;
        }
    }
    ctx->pc = 0x181864u;
    // 0x181864: 0x0  nop
    ctx->pc = 0x181864u;
    // NOP
label_181868:
    // 0x181868: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x181868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x18186c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x181870: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x181870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x181874: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x181874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181878: 0xc0604e4  jal         func_181390
    ctx->pc = 0x181878u;
    SET_GPR_U32(ctx, 31, 0x181880u);
    ctx->pc = 0x18187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181878u;
            // 0x18187c: 0xa2510001  sb          $s1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181390u;
    if (runtime->hasFunction(0x181390u)) {
        auto targetFn = runtime->lookupFunction(0x181390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181880u; }
        if (ctx->pc != 0x181880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181390_0x181390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181880u; }
        if (ctx->pc != 0x181880u) { return; }
    }
    ctx->pc = 0x181880u;
label_181880:
    // 0x181880: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x181884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181888: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x181888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18188c: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x181890: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181894: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x181898: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181898u;
    SET_GPR_U32(ctx, 31, 0x1818A0u);
    ctx->pc = 0x18189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181898u;
            // 0x18189c: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (runtime->hasFunction(0x181298u)) {
        auto targetFn = runtime->lookupFunction(0x181298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818A0u; }
        if (ctx->pc != 0x1818A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181298_0x181298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818A0u; }
        if (ctx->pc != 0x1818A0u) { return; }
    }
    ctx->pc = 0x1818A0u;
label_1818a0:
    // 0x1818a0: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1818a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1818a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818a8: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1818a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1818ac: 0xc04a508  jal         func_129420
    ctx->pc = 0x1818ACu;
    SET_GPR_U32(ctx, 31, 0x1818B4u);
    ctx->pc = 0x1818B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818ACu;
            // 0x1818b0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818B4u; }
        if (ctx->pc != 0x1818B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818B4u; }
        if (ctx->pc != 0x1818B4u) { return; }
    }
    ctx->pc = 0x1818B4u;
label_1818b4:
    // 0x1818b4: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1818b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1818b8: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1818b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1818bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818c0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1818C0u;
    SET_GPR_U32(ctx, 31, 0x1818C8u);
    ctx->pc = 0x1818C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818C0u;
            // 0x1818c4: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818C8u; }
        if (ctx->pc != 0x1818C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818C8u; }
        if (ctx->pc != 0x1818C8u) { return; }
    }
    ctx->pc = 0x1818C8u;
label_1818c8:
    // 0x1818c8: 0xc0604a0  jal         func_181280
    ctx->pc = 0x1818C8u;
    SET_GPR_U32(ctx, 31, 0x1818D0u);
    ctx->pc = 0x181280u;
    if (runtime->hasFunction(0x181280u)) {
        auto targetFn = runtime->lookupFunction(0x181280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818D0u; }
        if (ctx->pc != 0x1818D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181280_0x181280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818D0u; }
        if (ctx->pc != 0x1818D0u) { return; }
    }
    ctx->pc = 0x1818D0u;
label_1818d0:
    // 0x1818d0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1818d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1818d8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1818d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1818dc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1818e0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1818e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1818e4: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x1818e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1818e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1818e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1818ec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1818ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1818f0: 0xc0604a6  jal         func_181298
    ctx->pc = 0x1818F0u;
    SET_GPR_U32(ctx, 31, 0x1818F8u);
    ctx->pc = 0x1818F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818F0u;
            // 0x1818f4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (runtime->hasFunction(0x181298u)) {
        auto targetFn = runtime->lookupFunction(0x181298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818F8u; }
        if (ctx->pc != 0x1818F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181298_0x181298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818F8u; }
        if (ctx->pc != 0x1818F8u) { return; }
    }
    ctx->pc = 0x1818F8u;
label_1818f8:
    // 0x1818f8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1818fc:
    // 0x1818fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1818fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x181904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181908: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x181908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18190c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181910: 0x3e00008  jr          $ra
    ctx->pc = 0x181910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181910u;
            // 0x181914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181918u;
}
