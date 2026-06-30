#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004665D0
// Address: 0x4665d0 - 0x466760
void sub_004665D0_0x4665d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004665D0_0x4665d0");
#endif

    switch (ctx->pc) {
        case 0x466630u: goto label_466630;
        case 0x466638u: goto label_466638;
        case 0x46670cu: goto label_46670c;
        case 0x466748u: goto label_466748;
        default: break;
    }

    ctx->pc = 0x4665d0u;

    // 0x4665d0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4665D0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4665D8u;
    // 0x4665d8: 0x0  nop
    ctx->pc = 0x4665d8u;
    // NOP
    // 0x4665dc: 0x0  nop
    ctx->pc = 0x4665dcu;
    // NOP
    // 0x4665e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4665e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4665e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4665e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4665e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4665e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4665ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4665ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4665f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4665f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4665f4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4665f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4665f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4665fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4665fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x466600: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x466600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x466604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466608: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x466608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x46660c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46660cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466610: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x466610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x466614: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x466614u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x466618: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x466618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x46661c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x46661cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x466620: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x466620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x466624: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x466624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x466628: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x466628u;
    SET_GPR_U32(ctx, 31, 0x466630u);
    ctx->pc = 0x46662Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466628u;
            // 0x46662c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466630u; }
        if (ctx->pc != 0x466630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466630u; }
        if (ctx->pc != 0x466630u) { return; }
    }
    ctx->pc = 0x466630u;
label_466630:
    // 0x466630: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x466630u;
    SET_GPR_U32(ctx, 31, 0x466638u);
    ctx->pc = 0x466634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466630u;
            // 0x466634: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466638u; }
        if (ctx->pc != 0x466638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466638u; }
        if (ctx->pc != 0x466638u) { return; }
    }
    ctx->pc = 0x466638u;
label_466638:
    // 0x466638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x466638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x46663c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x46663cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x466640: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x466640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x466644: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x466644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x466648: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x466648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x46664c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x46664cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x466650: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x466650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x466654: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x466654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x466658: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x466658u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x46665c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x46665cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x466660: 0x24e7e780  addiu       $a3, $a3, -0x1880
    ctx->pc = 0x466660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961024));
    // 0x466664: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x466664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    // 0x466668: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x466668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x46666c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x46666cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x466670: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x466670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x466674: 0x2463e820  addiu       $v1, $v1, -0x17E0
    ctx->pc = 0x466674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
    // 0x466678: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x466678u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x46667c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46667cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466680: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x466680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x466684: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x466684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x466688: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x466688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x46668c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x46668cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x466690: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x466690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x466694: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x466694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x466698: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x466698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x46669c: 0xae100058  sw          $s0, 0x58($s0)
    ctx->pc = 0x46669cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 16));
    // 0x4666a0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4666a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x4666a4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4666a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x4666a8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4666a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x4666ac: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x4666acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x4666b0: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x4666b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x4666b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4666b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4666b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4666bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4666BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4666C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4666BCu;
            // 0x4666c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4666C4u;
    // 0x4666c4: 0x0  nop
    ctx->pc = 0x4666c4u;
    // NOP
    // 0x4666c8: 0x0  nop
    ctx->pc = 0x4666c8u;
    // NOP
    // 0x4666cc: 0x0  nop
    ctx->pc = 0x4666ccu;
    // NOP
    // 0x4666d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4666d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4666d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4666d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4666d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4666d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4666dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4666dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4666e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4666e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4666e4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4666E4u;
    {
        const bool branch_taken_0x4666e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4666E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4666E4u;
            // 0x4666e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4666e4) {
            ctx->pc = 0x466748u;
            goto label_466748;
        }
    }
    ctx->pc = 0x4666ECu;
    // 0x4666ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4666ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4666f0: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x4666f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x4666f4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4666F4u;
    {
        const bool branch_taken_0x4666f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4666F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4666F4u;
            // 0x4666f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4666f4) {
            ctx->pc = 0x466730u;
            goto label_466730;
        }
    }
    ctx->pc = 0x4666FCu;
    // 0x4666fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4666fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x466700: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x466700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x466704: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x466704u;
    SET_GPR_U32(ctx, 31, 0x46670Cu);
    ctx->pc = 0x466708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466704u;
            // 0x466708: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46670Cu; }
        if (ctx->pc != 0x46670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46670Cu; }
        if (ctx->pc != 0x46670Cu) { return; }
    }
    ctx->pc = 0x46670Cu;
label_46670c:
    // 0x46670c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x46670Cu;
    {
        const bool branch_taken_0x46670c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46670c) {
            ctx->pc = 0x466710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46670Cu;
            // 0x466710: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466734u;
            goto label_466734;
        }
    }
    ctx->pc = 0x466714u;
    // 0x466714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x466714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x466718: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x466718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x46671c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46671Cu;
    {
        const bool branch_taken_0x46671c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x466720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46671Cu;
            // 0x466720: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46671c) {
            ctx->pc = 0x466730u;
            goto label_466730;
        }
    }
    ctx->pc = 0x466724u;
    // 0x466724: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x466724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x466728: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x466728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x46672c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x46672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_466730:
    // 0x466730: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x466730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_466734:
    // 0x466734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x466734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x466738: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x466738u;
    {
        const bool branch_taken_0x466738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x466738) {
            ctx->pc = 0x46673Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466738u;
            // 0x46673c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46674Cu;
            goto label_46674c;
        }
    }
    ctx->pc = 0x466740u;
    // 0x466740: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x466740u;
    SET_GPR_U32(ctx, 31, 0x466748u);
    ctx->pc = 0x466744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x466740u;
            // 0x466744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466748u; }
        if (ctx->pc != 0x466748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466748u; }
        if (ctx->pc != 0x466748u) { return; }
    }
    ctx->pc = 0x466748u;
label_466748:
    // 0x466748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x466748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46674c:
    // 0x46674c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466758: 0x3e00008  jr          $ra
    ctx->pc = 0x466758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466758u;
            // 0x46675c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466760u;
}
