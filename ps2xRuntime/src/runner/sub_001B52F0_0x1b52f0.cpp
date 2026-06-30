#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B52F0
// Address: 0x1b52f0 - 0x1b5458
void sub_001B52F0_0x1b52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B52F0_0x1b52f0");
#endif

    switch (ctx->pc) {
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b5430u: goto label_1b5430;
        default: break;
    }

    ctx->pc = 0x1b52f0u;

    // 0x1b52f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b52f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b52f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b52f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b52fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b52fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b5300: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b5300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b5304: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b5308: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b5308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b530c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b5310: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5314: 0x8eb03720  lw          $s0, 0x3720($s5)
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14112)));
    // 0x1b5318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b531c: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x1b531cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b5320: 0x261408a0  addiu       $s4, $s0, 0x8A0
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x1b5324: 0x26110ad0  addiu       $s1, $s0, 0xAD0
    ctx->pc = 0x1b5324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x1b5328: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B5328u;
    {
        const bool branch_taken_0x1b5328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5328u;
            // 0x1b532c: 0x26120d0c  addiu       $s2, $s0, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5328) {
            ctx->pc = 0x1B5430u;
            goto label_1b5430;
        }
    }
    ctx->pc = 0x1B5330u;
    // 0x1b5330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b5330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5334: 0xc06d516  jal         func_1B5458
    ctx->pc = 0x1B5334u;
    SET_GPR_U32(ctx, 31, 0x1B533Cu);
    ctx->pc = 0x1B5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5334u;
            // 0x1b5338: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5458u;
    if (runtime->hasFunction(0x1B5458u)) {
        auto targetFn = runtime->lookupFunction(0x1B5458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B533Cu; }
        if (ctx->pc != 0x1B533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5458_0x1b5458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B533Cu; }
        if (ctx->pc != 0x1B533Cu) { return; }
    }
    ctx->pc = 0x1B533Cu;
label_1b533c:
    // 0x1b533c: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1B533Cu;
    {
        const bool branch_taken_0x1b533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b533c) {
            ctx->pc = 0x1B5340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B533Cu;
            // 0x1b5340: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5434u;
            goto label_1b5434;
        }
    }
    ctx->pc = 0x1B5344u;
    // 0x1b5344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b5348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b534c: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1B534Cu;
    SET_GPR_U32(ctx, 31, 0x1B5354u);
    ctx->pc = 0x1B5350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B534Cu;
            // 0x1b5350: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (runtime->hasFunction(0x1B54D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B54D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5354u; }
        if (ctx->pc != 0x1B5354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B54D8_0x1b54d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5354u; }
        if (ctx->pc != 0x1B5354u) { return; }
    }
    ctx->pc = 0x1B5354u;
label_1b5354:
    // 0x1b5354: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B5354u;
    {
        const bool branch_taken_0x1b5354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5354) {
            ctx->pc = 0x1B5358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5354u;
            // 0x1b5358: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5434u;
            goto label_1b5434;
        }
    }
    ctx->pc = 0x1B535Cu;
    // 0x1b535c: 0xc06d556  jal         func_1B5558
    ctx->pc = 0x1B535Cu;
    SET_GPR_U32(ctx, 31, 0x1B5364u);
    ctx->pc = 0x1B5360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B535Cu;
            // 0x1b5360: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5558u;
    if (runtime->hasFunction(0x1B5558u)) {
        auto targetFn = runtime->lookupFunction(0x1B5558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5364u; }
        if (ctx->pc != 0x1B5364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5558_0x1b5558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5364u; }
        if (ctx->pc != 0x1B5364u) { return; }
    }
    ctx->pc = 0x1B5364u;
label_1b5364:
    // 0x1b5364: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B5364u;
    {
        const bool branch_taken_0x1b5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5364u;
            // 0x1b5368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5364) {
            ctx->pc = 0x1B53F0u;
            goto label_1b53f0;
        }
    }
    ctx->pc = 0x1B536Cu;
    // 0x1b536c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b536cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1b5370: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b5370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b5374: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B5374u;
    {
        const bool branch_taken_0x1b5374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5374) {
            ctx->pc = 0x1B5378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5374u;
            // 0x1b5378: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B53E4u;
            goto label_1b53e4;
        }
    }
    ctx->pc = 0x1B537Cu;
    // 0x1b537c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1b537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b5380: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5380u;
    {
        const bool branch_taken_0x1b5380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5380) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B5388u;
    // 0x1b5388: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x1b538c: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B538Cu;
    {
        const bool branch_taken_0x1b538c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B5390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B538Cu;
            // 0x1b5390: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b538c) {
            ctx->pc = 0x1B53A4u;
            goto label_1b53a4;
        }
    }
    ctx->pc = 0x1B5394u;
    // 0x1b5394: 0x58c00013  blezl       $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5394u;
    {
        const bool branch_taken_0x1b5394 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1b5394) {
            ctx->pc = 0x1B5398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5394u;
            // 0x1b5398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B53E4u;
            goto label_1b53e4;
        }
    }
    ctx->pc = 0x1B539Cu;
    // 0x1b539c: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B539Cu;
    SET_GPR_U32(ctx, 31, 0x1B53A4u);
    ctx->pc = 0x1B53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B539Cu;
            // 0x1b53a0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53A4u; }
        if (ctx->pc != 0x1B53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53A4u; }
        if (ctx->pc != 0x1B53A4u) { return; }
    }
    ctx->pc = 0x1B53A4u;
label_1b53a4:
    // 0x1b53a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B53A4u;
    {
        const bool branch_taken_0x1b53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53A4u;
            // 0x1b53a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53a4) {
            ctx->pc = 0x1B53E4u;
            goto label_1b53e4;
        }
    }
    ctx->pc = 0x1B53ACu;
    // 0x1b53ac: 0x0  nop
    ctx->pc = 0x1b53acu;
    // NOP
label_1b53b0:
    // 0x1b53b0: 0xc06a108  jal         func_1A8420
    ctx->pc = 0x1B53B0u;
    SET_GPR_U32(ctx, 31, 0x1B53B8u);
    ctx->pc = 0x1B53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53B0u;
            // 0x1b53b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8420u;
    if (runtime->hasFunction(0x1A8420u)) {
        auto targetFn = runtime->lookupFunction(0x1A8420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8420_0x1a8420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B53B8u; }
        if (ctx->pc != 0x1B53B8u) { return; }
    }
    ctx->pc = 0x1B53B8u;
label_1b53b8:
    // 0x1b53b8: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1b53b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1b53bc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B53BCu;
    {
        const bool branch_taken_0x1b53bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53bc) {
            ctx->pc = 0x1B53C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53BCu;
            // 0x1b53c0: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B53E4u;
            goto label_1b53e4;
        }
    }
    ctx->pc = 0x1B53C4u;
    // 0x1b53c4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1b53c8: 0x240307e2  addiu       $v1, $zero, 0x7E2
    ctx->pc = 0x1b53c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2018));
    // 0x1b53cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B53CCu;
    {
        const bool branch_taken_0x1b53cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53cc) {
            ctx->pc = 0x1B53D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53CCu;
            // 0x1b53d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B53D4u;
            goto label_1b53d4;
        }
    }
    ctx->pc = 0x1B53D4u;
label_1b53d4:
    // 0x1b53d4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1b53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b53d8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b53d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b53dc: 0x1012  mflo        $v0
    ctx->pc = 0x1b53dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b53e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b53e4:
    // 0x1b53e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B53E4u;
    {
        const bool branch_taken_0x1b53e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53E4u;
            // 0x1b53e8: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53e4) {
            ctx->pc = 0x1B5418u;
            goto label_1b5418;
        }
    }
    ctx->pc = 0x1B53ECu;
    // 0x1b53ec: 0x0  nop
    ctx->pc = 0x1b53ecu;
    // NOP
label_1b53f0:
    // 0x1b53f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b53f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B53F4u;
    {
        const bool branch_taken_0x1b53f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B53F4u;
            // 0x1b53f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53f4) {
            ctx->pc = 0x1B5408u;
            goto label_1b5408;
        }
    }
    ctx->pc = 0x1B53FCu;
    // 0x1b53fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b5400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5400u;
    {
        const bool branch_taken_0x1b5400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5400u;
            // 0x1b5404: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5400) {
            ctx->pc = 0x1B5418u;
            goto label_1b5418;
        }
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5408u;
    {
        const bool branch_taken_0x1b5408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5408) {
            ctx->pc = 0x1B540Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5408u;
            // 0x1b540c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5434u;
            goto label_1b5434;
        }
    }
    ctx->pc = 0x1B5410u;
    // 0x1b5410: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1b5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b5414: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1b5414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b5418:
    // 0x1b5418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b541c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1b541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1b5420: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b5420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b5424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5428: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1B5428u;
    SET_GPR_U32(ctx, 31, 0x1B5430u);
    ctx->pc = 0x1B542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5428u;
            // 0x1b542c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (runtime->hasFunction(0x1B5C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C88_0x1b5c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    }
    ctx->pc = 0x1B5430u;
label_1b5430:
    // 0x1b5430: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5434:
    // 0x1b5434: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b5434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5438: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b5438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b543c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5440: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b5440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5444: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b5444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b544c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B544Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B544Cu;
            // 0x1b5450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5454u;
    // 0x1b5454: 0x0  nop
    ctx->pc = 0x1b5454u;
    // NOP
}
