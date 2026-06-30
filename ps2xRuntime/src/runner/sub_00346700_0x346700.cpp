#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00346700
// Address: 0x346700 - 0x3468b0
void sub_00346700_0x346700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346700_0x346700");
#endif

    switch (ctx->pc) {
        case 0x346728u: goto label_346728;
        case 0x3467acu: goto label_3467ac;
        case 0x3467c8u: goto label_3467c8;
        case 0x346800u: goto label_346800;
        case 0x346808u: goto label_346808;
        case 0x346820u: goto label_346820;
        case 0x346878u: goto label_346878;
        case 0x346890u: goto label_346890;
        default: break;
    }

    ctx->pc = 0x346700u;

    // 0x346700: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x346700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x346704: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x346708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34670c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x346710: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x346710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34671c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34671cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346720: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x346720u;
    SET_GPR_U32(ctx, 31, 0x346728u);
    ctx->pc = 0x346724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346720u;
            // 0x346724: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346728u; }
        if (ctx->pc != 0x346728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346728u; }
        if (ctx->pc != 0x346728u) { return; }
    }
    ctx->pc = 0x346728u;
label_346728:
    // 0x346728: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x346728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x34672c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x34672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x346730: 0xc440c900  lwc1        $f0, -0x3700($v0)
    ctx->pc = 0x346730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346734: 0xafb20044  sw          $s2, 0x44($sp)
    ctx->pc = 0x346734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
    // 0x346738: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x346738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x34673c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x34673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x346740: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x346740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x346744: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x346744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x346748: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x346748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34674c: 0xa3a300f0  sb          $v1, 0xF0($sp)
    ctx->pc = 0x34674cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 3));
    // 0x346750: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x346750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x346754: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x346754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x346758: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x346758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x34675c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346760: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x346760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x346764: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x346764u;
    {
        const bool branch_taken_0x346764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x346764) {
            ctx->pc = 0x346768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346764u;
            // 0x346768: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346794u;
            goto label_346794;
        }
    }
    ctx->pc = 0x34676Cu;
    // 0x34676c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346770: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346770u;
    {
        const bool branch_taken_0x346770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x346770) {
            ctx->pc = 0x346774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346770u;
            // 0x346774: 0x92020005  lbu         $v0, 0x5($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346780u;
            goto label_346780;
        }
    }
    ctx->pc = 0x346778u;
    // 0x346778: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346778u;
    {
        const bool branch_taken_0x346778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346778u;
            // 0x34677c: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346778) {
            ctx->pc = 0x346798u;
            goto label_346798;
        }
    }
    ctx->pc = 0x346780u;
label_346780:
    // 0x346780: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346780u;
    {
        const bool branch_taken_0x346780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x346780) {
            ctx->pc = 0x346784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346780u;
            // 0x346784: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346798u;
            goto label_346798;
        }
    }
    ctx->pc = 0x346788u;
    // 0x346788: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x346788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x34678c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34678Cu;
    {
        const bool branch_taken_0x34678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34678Cu;
            // 0x346790: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34678c) {
            ctx->pc = 0x346798u;
            goto label_346798;
        }
    }
    ctx->pc = 0x346794u;
label_346794:
    // 0x346794: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x346794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_346798:
    // 0x346798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34679c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x34679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3467a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3467a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3467a4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3467A4u;
    SET_GPR_U32(ctx, 31, 0x3467ACu);
    ctx->pc = 0x3467A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3467A4u;
            // 0x3467a8: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467ACu; }
        if (ctx->pc != 0x3467ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467ACu; }
        if (ctx->pc != 0x3467ACu) { return; }
    }
    ctx->pc = 0x3467ACu;
label_3467ac:
    // 0x3467ac: 0x24030210  addiu       $v1, $zero, 0x210
    ctx->pc = 0x3467acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3467b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3467b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3467B4u;
    {
        const bool branch_taken_0x3467b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3467B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3467B4u;
            // 0x3467b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3467b4) {
            ctx->pc = 0x3467D8u;
            goto label_3467d8;
        }
    }
    ctx->pc = 0x3467BCu;
    // 0x3467bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3467bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467c0: 0xc088ef4  jal         func_223BD0
    ctx->pc = 0x3467C0u;
    SET_GPR_U32(ctx, 31, 0x3467C8u);
    ctx->pc = 0x3467C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3467C0u;
            // 0x3467c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467C8u; }
        if (ctx->pc != 0x3467C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467C8u; }
        if (ctx->pc != 0x3467C8u) { return; }
    }
    ctx->pc = 0x3467C8u;
label_3467c8:
    // 0x3467c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3467c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3467cc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3467ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
    // 0x3467d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3467d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3467d4: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x3467d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_3467d8:
    // 0x3467d8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x3467d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x3467dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3467dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3467e0: 0xae500200  sw          $s0, 0x200($s2)
    ctx->pc = 0x3467e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 16));
    // 0x3467e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3467e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3467e8: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x3467e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x3467ec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3467f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3467f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3467f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3467f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3467f8: 0xc08c164  jal         func_230590
    ctx->pc = 0x3467F8u;
    SET_GPR_U32(ctx, 31, 0x346800u);
    ctx->pc = 0x3467FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3467F8u;
            // 0x3467fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346800u; }
        if (ctx->pc != 0x346800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346800u; }
        if (ctx->pc != 0x346800u) { return; }
    }
    ctx->pc = 0x346800u;
label_346800:
    // 0x346800: 0xc08d414  jal         func_235050
    ctx->pc = 0x346800u;
    SET_GPR_U32(ctx, 31, 0x346808u);
    ctx->pc = 0x346804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346800u;
            // 0x346804: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346808u; }
        if (ctx->pc != 0x346808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346808u; }
        if (ctx->pc != 0x346808u) { return; }
    }
    ctx->pc = 0x346808u;
label_346808:
    // 0x346808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34680c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34680cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346818: 0x3e00008  jr          $ra
    ctx->pc = 0x346818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346818u;
            // 0x34681c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346820u;
label_346820:
    // 0x346820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x346824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x346828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34682c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346834: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x346834u;
    {
        const bool branch_taken_0x346834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346834u;
            // 0x346838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346834) {
            ctx->pc = 0x346890u;
            goto label_346890;
        }
    }
    ctx->pc = 0x34683Cu;
    // 0x34683c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x346840: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x346840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x346844: 0x24635820  addiu       $v1, $v1, 0x5820
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22560));
    // 0x346848: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x346848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
    // 0x34684c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34684cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x346850: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x346850u;
    {
        const bool branch_taken_0x346850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346850u;
            // 0x346854: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346850) {
            ctx->pc = 0x346878u;
            goto label_346878;
        }
    }
    ctx->pc = 0x346858u;
    // 0x346858: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34685c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x346860: 0x246358e0  addiu       $v1, $v1, 0x58E0
    ctx->pc = 0x346860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22752));
    // 0x346864: 0x24425918  addiu       $v0, $v0, 0x5918
    ctx->pc = 0x346864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22808));
    // 0x346868: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x346868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34686c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346870: 0xc0d1a2c  jal         func_3468B0
    ctx->pc = 0x346870u;
    SET_GPR_U32(ctx, 31, 0x346878u);
    ctx->pc = 0x346874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346870u;
            // 0x346874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3468B0u;
    if (runtime->hasFunction(0x3468B0u)) {
        auto targetFn = runtime->lookupFunction(0x3468B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346878u; }
        if (ctx->pc != 0x346878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003468B0_0x3468b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346878u; }
        if (ctx->pc != 0x346878u) { return; }
    }
    ctx->pc = 0x346878u;
label_346878:
    // 0x346878: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x346878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x34687c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34687cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x346880: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x346880u;
    {
        const bool branch_taken_0x346880 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x346880) {
            ctx->pc = 0x346884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346880u;
            // 0x346884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346894u;
            goto label_346894;
        }
    }
    ctx->pc = 0x346888u;
    // 0x346888: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x346888u;
    SET_GPR_U32(ctx, 31, 0x346890u);
    ctx->pc = 0x34688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346888u;
            // 0x34688c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346890u; }
        if (ctx->pc != 0x346890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346890u; }
        if (ctx->pc != 0x346890u) { return; }
    }
    ctx->pc = 0x346890u;
label_346890:
    // 0x346890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346894:
    // 0x346894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x346894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34689c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3468a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3468A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3468A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3468A0u;
            // 0x3468a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3468A8u;
    // 0x3468a8: 0x0  nop
    ctx->pc = 0x3468a8u;
    // NOP
    // 0x3468ac: 0x0  nop
    ctx->pc = 0x3468acu;
    // NOP
}
