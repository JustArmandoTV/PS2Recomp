#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00538330
// Address: 0x538330 - 0x538490
void sub_00538330_0x538330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00538330_0x538330");
#endif

    switch (ctx->pc) {
        case 0x538390u: goto label_538390;
        case 0x538398u: goto label_538398;
        case 0x5383e4u: goto label_5383e4;
        case 0x538424u: goto label_538424;
        case 0x53847cu: goto label_53847c;
        default: break;
    }

    ctx->pc = 0x538330u;

    // 0x538330: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x538330u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x538338u;
    // 0x538338: 0x0  nop
    ctx->pc = 0x538338u;
    // NOP
    // 0x53833c: 0x0  nop
    ctx->pc = 0x53833cu;
    // NOP
    // 0x538340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x538340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x538344: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x538344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x538348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x538348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53834c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x53834cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x538350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x538354: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x538354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x538358: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x538358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x53835c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x53835cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x538360: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x538360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x538364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x538364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x538368: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x538368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x53836c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53836cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x538370: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x538370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x538374: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x538374u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x538378: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x538378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x53837c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x53837cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x538380: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x538380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x538384: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x538384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x538388: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x538388u;
    SET_GPR_U32(ctx, 31, 0x538390u);
    ctx->pc = 0x53838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538388u;
            // 0x53838c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538390u; }
        if (ctx->pc != 0x538390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538390u; }
        if (ctx->pc != 0x538390u) { return; }
    }
    ctx->pc = 0x538390u;
label_538390:
    // 0x538390: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x538390u;
    SET_GPR_U32(ctx, 31, 0x538398u);
    ctx->pc = 0x538394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538390u;
            // 0x538394: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538398u; }
        if (ctx->pc != 0x538398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538398u; }
        if (ctx->pc != 0x538398u) { return; }
    }
    ctx->pc = 0x538398u;
label_538398:
    // 0x538398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x538398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53839c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x53839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x5383a0: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x5383a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x5383a4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x5383a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x5383a8: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x5383a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x5383ac: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x5383acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
    // 0x5383b0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x5383b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x5383b4: 0x24a58410  addiu       $a1, $a1, -0x7BF0
    ctx->pc = 0x5383b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
    // 0x5383b8: 0x8d090788  lw          $t1, 0x788($t0)
    ctx->pc = 0x5383b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1928)));
    // 0x5383bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5383c0: 0x24427070  addiu       $v0, $v0, 0x7070
    ctx->pc = 0x5383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28784));
    // 0x5383c4: 0x24c67730  addiu       $a2, $a2, 0x7730
    ctx->pc = 0x5383c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30512));
    // 0x5383c8: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x5383c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x5383cc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x5383ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x5383d0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x5383d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5383d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x5383d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5383d8: 0xa203004d  sb          $v1, 0x4D($s0)
    ctx->pc = 0x5383d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x5383dc: 0xc040804  jal         func_102010
    ctx->pc = 0x5383DCu;
    SET_GPR_U32(ctx, 31, 0x5383E4u);
    ctx->pc = 0x5383E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5383DCu;
            // 0x5383e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5383E4u; }
        if (ctx->pc != 0x5383E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5383E4u; }
        if (ctx->pc != 0x5383E4u) { return; }
    }
    ctx->pc = 0x5383E4u;
label_5383e4:
    // 0x5383e4: 0xae000490  sw          $zero, 0x490($s0)
    ctx->pc = 0x5383e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 0));
    // 0x5383e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5383e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5383ec: 0xae000494  sw          $zero, 0x494($s0)
    ctx->pc = 0x5383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 0));
    // 0x5383f0: 0xae000498  sw          $zero, 0x498($s0)
    ctx->pc = 0x5383f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 0));
    // 0x5383f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5383f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5383f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5383f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5383fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5383FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5383FCu;
            // 0x538400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538404u;
    // 0x538404: 0x0  nop
    ctx->pc = 0x538404u;
    // NOP
    // 0x538408: 0x0  nop
    ctx->pc = 0x538408u;
    // NOP
    // 0x53840c: 0x0  nop
    ctx->pc = 0x53840cu;
    // NOP
    // 0x538410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x538410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x538414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x538414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x538418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53841c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x53841Cu;
    SET_GPR_U32(ctx, 31, 0x538424u);
    ctx->pc = 0x538420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53841Cu;
            // 0x538420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538424u; }
        if (ctx->pc != 0x538424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538424u; }
        if (ctx->pc != 0x538424u) { return; }
    }
    ctx->pc = 0x538424u;
label_538424:
    // 0x538424: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x538424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x538428: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x538428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53842c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x53842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x538430: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x538430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x538434: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x538434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x538438: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x538438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x53843c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x53843cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x538440: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x538440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x538444: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x538444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x538448: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x538448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53844c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x53844cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x538450: 0x246370b0  addiu       $v1, $v1, 0x70B0
    ctx->pc = 0x538450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28848));
    // 0x538454: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x538454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x538458: 0x244270f0  addiu       $v0, $v0, 0x70F0
    ctx->pc = 0x538458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28912));
    // 0x53845c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53845cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x538460: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x538460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x538464: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x538464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x538468: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x538468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x53846c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x53846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x538470: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x538470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x538474: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x538474u;
    SET_GPR_U32(ctx, 31, 0x53847Cu);
    ctx->pc = 0x538478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538474u;
            // 0x538478: 0xae000150  sw          $zero, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53847Cu; }
        if (ctx->pc != 0x53847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53847Cu; }
        if (ctx->pc != 0x53847Cu) { return; }
    }
    ctx->pc = 0x53847Cu;
label_53847c:
    // 0x53847c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53847cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x538480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x538480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x538484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x538488: 0x3e00008  jr          $ra
    ctx->pc = 0x538488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538488u;
            // 0x53848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538490u;
}
