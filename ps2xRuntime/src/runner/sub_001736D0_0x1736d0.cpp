#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001736D0
// Address: 0x1736d0 - 0x173a00
void sub_001736D0_0x1736d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001736D0_0x1736d0");
#endif

    switch (ctx->pc) {
        case 0x173720u: goto label_173720;
        case 0x17373cu: goto label_17373c;
        case 0x1737b0u: goto label_1737b0;
        case 0x17385cu: goto label_17385c;
        case 0x173864u: goto label_173864;
        case 0x1738fcu: goto label_1738fc;
        case 0x173908u: goto label_173908;
        case 0x173914u: goto label_173914;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739ecu: goto label_1739ec;
        default: break;
    }

    ctx->pc = 0x1736d0u;

label_1736d0:
    // 0x1736d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1736d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1736d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1736d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1736d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1736dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1736e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1736e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1736e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1736e8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1736ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1736f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1736f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1736f4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1736f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1736f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1736f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1736fc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1736FCu;
    {
        const bool branch_taken_0x1736fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x173700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1736FCu;
            // 0x173700: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736fc) {
            ctx->pc = 0x173714u;
            goto label_173714;
        }
    }
    ctx->pc = 0x173704u;
    // 0x173704: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173704u;
    {
        const bool branch_taken_0x173704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x173704) {
            ctx->pc = 0x173708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173704u;
            // 0x173708: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173718u;
            goto label_173718;
        }
    }
    ctx->pc = 0x17370Cu;
    // 0x17370c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x17370Cu;
    {
        const bool branch_taken_0x17370c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x173710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17370Cu;
            // 0x173710: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17370c) {
            ctx->pc = 0x173728u;
            goto label_173728;
        }
    }
    ctx->pc = 0x173714u;
label_173714:
    // 0x173714: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_173718:
    // 0x173718: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173718u;
    SET_GPR_U32(ctx, 31, 0x173720u);
    ctx->pc = 0x17371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173718u;
            // 0x17371c: 0x248441f0  addiu       $a0, $a0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173720u; }
        if (ctx->pc != 0x173720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173720u; }
        if (ctx->pc != 0x173720u) { return; }
    }
    ctx->pc = 0x173720u;
label_173720:
    // 0x173720: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x173720u;
    {
        const bool branch_taken_0x173720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173720u;
            // 0x173724: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173720) {
            ctx->pc = 0x1739A0u;
            goto label_1739a0;
        }
    }
    ctx->pc = 0x173728u;
label_173728:
    // 0x173728: 0x8e023f1c  lw          $v0, 0x3F1C($s0)
    ctx->pc = 0x173728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16156)));
    // 0x17372c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17372Cu;
    {
        const bool branch_taken_0x17372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17372Cu;
            // 0x173730: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17372c) {
            ctx->pc = 0x173748u;
            goto label_173748;
        }
    }
    ctx->pc = 0x173734u;
    // 0x173734: 0xc05cd4e  jal         func_173538
    ctx->pc = 0x173734u;
    SET_GPR_U32(ctx, 31, 0x17373Cu);
    ctx->pc = 0x173538u;
    if (runtime->hasFunction(0x173538u)) {
        auto targetFn = runtime->lookupFunction(0x173538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17373Cu; }
        if (ctx->pc != 0x17373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173538_0x173538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17373Cu; }
        if (ctx->pc != 0x17373Cu) { return; }
    }
    ctx->pc = 0x17373Cu;
label_17373c:
    // 0x17373c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x17373Cu;
    {
        const bool branch_taken_0x17373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17373Cu;
            // 0x173740: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17373c) {
            ctx->pc = 0x1739A0u;
            goto label_1739a0;
        }
    }
    ctx->pc = 0x173744u;
    // 0x173744: 0x0  nop
    ctx->pc = 0x173744u;
    // NOP
label_173748:
    // 0x173748: 0xae203f6c  sw          $zero, 0x3F6C($s1)
    ctx->pc = 0x173748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16236), GPR_U32(ctx, 0));
    // 0x17374c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x17374cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x173750: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x173750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x173754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x173754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x173758: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x173758u;
    {
        const bool branch_taken_0x173758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173758u;
            // 0x17375c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173758) {
            ctx->pc = 0x1738E0u;
            goto label_1738e0;
        }
    }
    ctx->pc = 0x173760u;
    // 0x173760: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x173764: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x173764u;
    {
        const bool branch_taken_0x173764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173764) {
            ctx->pc = 0x173768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173764u;
            // 0x173768: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173798u;
            goto label_173798;
        }
    }
    ctx->pc = 0x17376Cu;
    // 0x17376c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x173770: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x173774: 0x8c439d88  lw          $v1, -0x6278($v0)
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942088)));
    // 0x173778: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x173778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x17377c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173780: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x173780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17378c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_173798:
    // 0x173798: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x173798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17379c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737a0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1737a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1737a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737a8: 0xc05cd4e  jal         func_173538
    ctx->pc = 0x1737A8u;
    SET_GPR_U32(ctx, 31, 0x1737B0u);
    ctx->pc = 0x1737ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1737A8u;
            // 0x1737ac: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173538u;
    if (runtime->hasFunction(0x173538u)) {
        auto targetFn = runtime->lookupFunction(0x173538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737B0u; }
        if (ctx->pc != 0x1737B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173538_0x173538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737B0u; }
        if (ctx->pc != 0x1737B0u) { return; }
    }
    ctx->pc = 0x1737B0u;
label_1737b0:
    // 0x1737b0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1737b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1737b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1737b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1737b8: 0x26d43f68  addiu       $s4, $s6, 0x3F68
    ctx->pc = 0x1737b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16232));
    // 0x1737bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1737bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1737c0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1737c4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1737c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1737c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1737c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1737cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1737ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1737d0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1737d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1737d4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1737d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1737d8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1737dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1737dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1737e0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1737e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1737e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1737e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1737e8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1737e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1737ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1737ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1737f0: 0x0  nop
    ctx->pc = 0x1737f0u;
    // NOP
    // 0x1737f4: 0x0  nop
    ctx->pc = 0x1737f4u;
    // NOP
    // 0x1737f8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1737f8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1737fc: 0x0  nop
    ctx->pc = 0x1737fcu;
    // NOP
    // 0x173800: 0x0  nop
    ctx->pc = 0x173800u;
    // NOP
    // 0x173804: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x173804u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x173808: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17380c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x17380cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x173810: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x173810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173814: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x173814u;
    {
        const bool branch_taken_0x173814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173814u;
            // 0x173818: 0xe6213f6c  swc1        $f1, 0x3F6C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173814) {
            ctx->pc = 0x173830u;
            goto label_173830;
        }
    }
    ctx->pc = 0x17381Cu;
    // 0x17381c: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x17381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x173820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x173820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173828: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
    ctx->pc = 0x173828u;
    {
        const bool branch_taken_0x173828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173828) {
            ctx->pc = 0x17382Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173828u;
            // 0x17382c: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173988u;
            goto label_173988;
        }
    }
    ctx->pc = 0x173830u;
label_173830:
    // 0x173830: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x173834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173838: 0x8c433f40  lw          $v1, 0x3F40($v0)
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16192)));
    // 0x17383c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x17383Cu;
    {
        const bool branch_taken_0x17383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x173840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17383Cu;
            // 0x173840: 0x26103f1c  addiu       $s0, $s0, 0x3F1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17383c) {
            ctx->pc = 0x173870u;
            goto label_173870;
        }
    }
    ctx->pc = 0x173844u;
    // 0x173844: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x173844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173848: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17384c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x173850: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x173850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x173854: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x173854u;
    SET_GPR_U32(ctx, 31, 0x17385Cu);
    ctx->pc = 0x173858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173854u;
            // 0x173858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    goto label_1736d0;
    ctx->pc = 0x17385Cu;
label_17385c:
    // 0x17385c: 0xc05cd9a  jal         func_173668
    ctx->pc = 0x17385Cu;
    SET_GPR_U32(ctx, 31, 0x173864u);
    ctx->pc = 0x173860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17385Cu;
            // 0x173860: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173668u;
    if (runtime->hasFunction(0x173668u)) {
        auto targetFn = runtime->lookupFunction(0x173668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173864u; }
        if (ctx->pc != 0x173864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173668_0x173668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173864u; }
        if (ctx->pc != 0x173864u) { return; }
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173868: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17386c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_173870:
    // 0x173870: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x173870u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173874: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x173874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173878: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x17387c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17387cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x173880: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x173880u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173888: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x173888u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17388c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17388cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173890: 0x0  nop
    ctx->pc = 0x173890u;
    // NOP
    // 0x173894: 0x0  nop
    ctx->pc = 0x173894u;
    // NOP
    // 0x173898: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x173898u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x17389c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17389cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1738a0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1738a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1738a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1738a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1738a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1738a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1738ac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1738ACu;
    {
        const bool branch_taken_0x1738ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1738ac) {
            ctx->pc = 0x1738B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1738ACu;
            // 0x1738b0: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1738CCu;
            goto label_1738cc;
        }
    }
    ctx->pc = 0x1738B4u;
    // 0x1738b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1738b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1738b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1738b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1738bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1738bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1738c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1738c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1738c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1738c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1738c8: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1738c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1738cc:
    // 0x1738cc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1738ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1738d0: 0x8c629d88  lw          $v0, -0x6278($v1)
    ctx->pc = 0x1738d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942088)));
    // 0x1738d4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1738D4u;
    {
        const bool branch_taken_0x1738d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738D4u;
            // 0x1738d8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738d4) {
            ctx->pc = 0x173984u;
            goto label_173984;
        }
    }
    ctx->pc = 0x1738DCu;
    // 0x1738dc: 0x0  nop
    ctx->pc = 0x1738dcu;
    // NOP
label_1738e0:
    // 0x1738e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1738e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1738e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1738e8: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1738E8u;
    {
        const bool branch_taken_0x1738e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1738e8) {
            ctx->pc = 0x1738ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1738E8u;
            // 0x1738ec: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173980u;
            goto label_173980;
        }
    }
    ctx->pc = 0x1738F0u;
    // 0x1738f0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1738f4: 0xc05c064  jal         func_170190
    ctx->pc = 0x1738F4u;
    SET_GPR_U32(ctx, 31, 0x1738FCu);
    ctx->pc = 0x1738F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1738F4u;
            // 0x1738f8: 0x3c16005e  lui         $s6, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738FCu; }
        if (ctx->pc != 0x1738FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738FCu; }
        if (ctx->pc != 0x1738FCu) { return; }
    }
    ctx->pc = 0x1738FCu;
label_1738fc:
    // 0x1738fc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x173900: 0xc05c046  jal         func_170118
    ctx->pc = 0x173900u;
    SET_GPR_U32(ctx, 31, 0x173908u);
    ctx->pc = 0x173904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173900u;
            // 0x173904: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173908u; }
        if (ctx->pc != 0x173908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173908u; }
        if (ctx->pc != 0x173908u) { return; }
    }
    ctx->pc = 0x173908u;
label_173908:
    // 0x173908: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x173908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17390c: 0xc05c052  jal         func_170148
    ctx->pc = 0x17390Cu;
    SET_GPR_U32(ctx, 31, 0x173914u);
    ctx->pc = 0x173910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17390Cu;
            // 0x173910: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170148u;
    if (runtime->hasFunction(0x170148u)) {
        auto targetFn = runtime->lookupFunction(0x170148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173914u; }
        if (ctx->pc != 0x173914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170148_0x170148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173914u; }
        if (ctx->pc != 0x173914u) { return; }
    }
    ctx->pc = 0x173914u;
label_173914:
    // 0x173914: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173918: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x173918u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17391c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17391Cu;
    {
        const bool branch_taken_0x17391c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17391c) {
            ctx->pc = 0x173920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17391Cu;
            // 0x173920: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x173924u;
            goto label_173924;
        }
    }
    ctx->pc = 0x173924u;
label_173924:
    // 0x173924: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173928: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x173928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17392c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17392cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x173930: 0xc6c13f68  lwc1        $f1, 0x3F68($s6)
    ctx->pc = 0x173930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x173934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x173938: 0x1812  mflo        $v1
    ctx->pc = 0x173938u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x17393c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x17393cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x173940: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x173940u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173948: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x173948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17394c: 0x0  nop
    ctx->pc = 0x17394cu;
    // NOP
    // 0x173950: 0x0  nop
    ctx->pc = 0x173950u;
    // NOP
    // 0x173954: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x173954u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x173958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x173958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17395c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17395cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x173960: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x173960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x173964: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x173964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x173968: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x17396c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173974u;
    {
        const bool branch_taken_0x173974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173974u;
            // 0x173978: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173974) {
            ctx->pc = 0x173984u;
            goto label_173984;
        }
    }
    ctx->pc = 0x17397Cu;
    // 0x17397c: 0x0  nop
    ctx->pc = 0x17397cu;
    // NOP
label_173980:
    // 0x173980: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x173980u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_173984:
    // 0x173984: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_173988:
    // 0x173988: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17398c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173990: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x173990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x173994: 0x8ec23f68  lw          $v0, 0x3F68($s6)
    ctx->pc = 0x173994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16232)));
    // 0x173998: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x173998u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x17399c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1739a0:
    // 0x1739a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1739a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1739a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1739a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1739a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1739a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1739ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1739acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1739b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1739b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1739b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1739b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1739b8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1739b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1739bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1739BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1739BCu;
            // 0x1739c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1739C4u;
    // 0x1739c4: 0x0  nop
    ctx->pc = 0x1739c4u;
    // NOP
    // 0x1739c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1739cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1739ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1739d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1739d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1739d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1739D4u;
    SET_GPR_U32(ctx, 31, 0x1739DCu);
    ctx->pc = 0x1739D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739D4u;
            // 0x1739d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739DCu; }
        if (ctx->pc != 0x1739DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739DCu; }
        if (ctx->pc != 0x1739DCu) { return; }
    }
    ctx->pc = 0x1739DCu;
label_1739dc:
    // 0x1739dc: 0xc05ce80  jal         func_173A00
    ctx->pc = 0x1739DCu;
    SET_GPR_U32(ctx, 31, 0x1739E4u);
    ctx->pc = 0x1739E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739DCu;
            // 0x1739e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A00u;
    if (runtime->hasFunction(0x173A00u)) {
        auto targetFn = runtime->lookupFunction(0x173A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739E4u; }
        if (ctx->pc != 0x1739E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A00_0x173a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739E4u; }
        if (ctx->pc != 0x1739E4u) { return; }
    }
    ctx->pc = 0x1739E4u;
label_1739e4:
    // 0x1739e4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1739E4u;
    SET_GPR_U32(ctx, 31, 0x1739ECu);
    ctx->pc = 0x1739E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1739E4u;
            // 0x1739e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739ECu; }
        if (ctx->pc != 0x1739ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739ECu; }
        if (ctx->pc != 0x1739ECu) { return; }
    }
    ctx->pc = 0x1739ECu;
label_1739ec:
    // 0x1739ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1739ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1739f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1739f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1739f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1739F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1739F8u;
            // 0x1739fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173A00u;
}
