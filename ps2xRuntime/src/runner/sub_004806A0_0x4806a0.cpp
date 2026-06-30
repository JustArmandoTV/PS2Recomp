#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004806A0
// Address: 0x4806a0 - 0x480860
void sub_004806A0_0x4806a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004806A0_0x4806a0");
#endif

    switch (ctx->pc) {
        case 0x480700u: goto label_480700;
        case 0x480708u: goto label_480708;
        case 0x480760u: goto label_480760;
        case 0x480794u: goto label_480794;
        case 0x48079cu: goto label_48079c;
        case 0x4807bcu: goto label_4807bc;
        case 0x4807c4u: goto label_4807c4;
        case 0x480808u: goto label_480808;
        case 0x480810u: goto label_480810;
        default: break;
    }

    ctx->pc = 0x4806a0u;

    // 0x4806a0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4806A0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4806A8u;
    // 0x4806a8: 0x0  nop
    ctx->pc = 0x4806a8u;
    // NOP
    // 0x4806ac: 0x0  nop
    ctx->pc = 0x4806acu;
    // NOP
    // 0x4806b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4806b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4806b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4806b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4806b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4806b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4806bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4806bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4806c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4806c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4806c4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4806c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4806c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4806cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4806ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4806d0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4806d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4806d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4806d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4806d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4806d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4806dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4806dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4806e0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4806e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4806e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4806e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4806e8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4806e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4806ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4806ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4806f0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4806f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4806f4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4806f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4806f8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4806F8u;
    SET_GPR_U32(ctx, 31, 0x480700u);
    ctx->pc = 0x4806FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4806F8u;
            // 0x4806fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480700u; }
        if (ctx->pc != 0x480700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480700u; }
        if (ctx->pc != 0x480700u) { return; }
    }
    ctx->pc = 0x480700u;
label_480700:
    // 0x480700: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x480700u;
    SET_GPR_U32(ctx, 31, 0x480708u);
    ctx->pc = 0x480704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480700u;
            // 0x480704: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480708u; }
        if (ctx->pc != 0x480708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480708u; }
        if (ctx->pc != 0x480708u) { return; }
    }
    ctx->pc = 0x480708u;
label_480708:
    // 0x480708: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x480708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48070c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x48070cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x480710: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x480710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x480714: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x480714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x480718: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x480718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x48071c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x48071cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x480720: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x480720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x480724: 0x2463ef60  addiu       $v1, $v1, -0x10A0
    ctx->pc = 0x480724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963040));
    // 0x480728: 0x8cea0788  lw          $t2, 0x788($a3)
    ctx->pc = 0x480728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x48072c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x480730: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x480730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x480734: 0x24a50780  addiu       $a1, $a1, 0x780
    ctx->pc = 0x480734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
    // 0x480738: 0x24c6f2c0  addiu       $a2, $a2, -0xD40
    ctx->pc = 0x480738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963904));
    // 0x48073c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x48073cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x480740: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x480740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x480744: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x480744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x480748: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x480748u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48074c: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x48074cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x480750: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x480750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x480754: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x480754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x480758: 0xc040804  jal         func_102010
    ctx->pc = 0x480758u;
    SET_GPR_U32(ctx, 31, 0x480760u);
    ctx->pc = 0x48075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480758u;
            // 0x48075c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480760u; }
        if (ctx->pc != 0x480760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480760u; }
        if (ctx->pc != 0x480760u) { return; }
    }
    ctx->pc = 0x480760u;
label_480760:
    // 0x480760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x480760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x480764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48076c: 0x3e00008  jr          $ra
    ctx->pc = 0x48076Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48076Cu;
            // 0x480770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480774u;
    // 0x480774: 0x0  nop
    ctx->pc = 0x480774u;
    // NOP
    // 0x480778: 0x0  nop
    ctx->pc = 0x480778u;
    // NOP
    // 0x48077c: 0x0  nop
    ctx->pc = 0x48077cu;
    // NOP
    // 0x480780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x480784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x480788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48078c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x48078Cu;
    SET_GPR_U32(ctx, 31, 0x480794u);
    ctx->pc = 0x480790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48078Cu;
            // 0x480790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480794u; }
        if (ctx->pc != 0x480794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480794u; }
        if (ctx->pc != 0x480794u) { return; }
    }
    ctx->pc = 0x480794u;
label_480794:
    // 0x480794: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x480794u;
    SET_GPR_U32(ctx, 31, 0x48079Cu);
    ctx->pc = 0x480798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480794u;
            // 0x480798: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48079Cu; }
        if (ctx->pc != 0x48079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48079Cu; }
        if (ctx->pc != 0x48079Cu) { return; }
    }
    ctx->pc = 0x48079Cu;
label_48079c:
    // 0x48079c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x48079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4807a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4807a4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4807a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4807a8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4807a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4807ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4807acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4807b0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4807b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4807b4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4807B4u;
    SET_GPR_U32(ctx, 31, 0x4807BCu);
    ctx->pc = 0x4807B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4807B4u;
            // 0x4807b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4807BCu; }
        if (ctx->pc != 0x4807BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4807BCu; }
        if (ctx->pc != 0x4807BCu) { return; }
    }
    ctx->pc = 0x4807BCu;
label_4807bc:
    // 0x4807bc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4807BCu;
    SET_GPR_U32(ctx, 31, 0x4807C4u);
    ctx->pc = 0x4807C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4807BCu;
            // 0x4807c0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4807C4u; }
        if (ctx->pc != 0x4807C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4807C4u; }
        if (ctx->pc != 0x4807C4u) { return; }
    }
    ctx->pc = 0x4807C4u;
label_4807c4:
    // 0x4807c4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4807c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4807c8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4807c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4807cc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4807ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4807d0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4807d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4807d4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4807d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4807d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4807d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4807dc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4807dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4807e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4807e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4807e4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4807e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4807e8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4807e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4807ec: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4807ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4807f0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4807f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4807f4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4807f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4807f8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4807f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4807fc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4807fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x480800: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x480800u;
    SET_GPR_U32(ctx, 31, 0x480808u);
    ctx->pc = 0x480804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480800u;
            // 0x480804: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480808u; }
        if (ctx->pc != 0x480808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480808u; }
        if (ctx->pc != 0x480808u) { return; }
    }
    ctx->pc = 0x480808u;
label_480808:
    // 0x480808: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x480808u;
    SET_GPR_U32(ctx, 31, 0x480810u);
    ctx->pc = 0x48080Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480808u;
            // 0x48080c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480810u; }
        if (ctx->pc != 0x480810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480810u; }
        if (ctx->pc != 0x480810u) { return; }
    }
    ctx->pc = 0x480810u;
label_480810:
    // 0x480810: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x480810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x480814: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x480814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x480818: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x480818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x48081c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x48081cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x480820: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x480820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x480824: 0x2484efa0  addiu       $a0, $a0, -0x1060
    ctx->pc = 0x480824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963104));
    // 0x480828: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x480828u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48082c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48082cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x480830: 0x2463efe0  addiu       $v1, $v1, -0x1020
    ctx->pc = 0x480830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963168));
    // 0x480834: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x480834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x480838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x480838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48083c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x48083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x480840: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x480840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x480844: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x480844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x480848: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x480848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x48084c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480854: 0x3e00008  jr          $ra
    ctx->pc = 0x480854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480854u;
            // 0x480858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48085Cu;
    // 0x48085c: 0x0  nop
    ctx->pc = 0x48085cu;
    // NOP
}
