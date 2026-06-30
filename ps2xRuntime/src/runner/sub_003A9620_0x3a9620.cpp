#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A9620
// Address: 0x3a9620 - 0x3a9700
void sub_003A9620_0x3a9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9620_0x3a9620");
#endif

    ctx->pc = 0x3a9620u;

    // 0x3a9620: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a9620u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9624: 0x91090012  lbu         $t1, 0x12($t0)
    ctx->pc = 0x3a9624u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x3a9628: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3a9628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3a962c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x3a962cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x3a9630: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x3a9630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
    // 0x3a9634: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a9634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3a9638: 0x8c880034  lw          $t0, 0x34($a0)
    ctx->pc = 0x3a9638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3a963c: 0x24e72100  addiu       $a3, $a3, 0x2100
    ctx->pc = 0x3a963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8448));
    // 0x3a9640: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a9640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9644: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9644u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9648: 0x85030020  lh          $v1, 0x20($t0)
    ctx->pc = 0x3a9648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3a964c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a964cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a9650: 0x90840116  lbu         $a0, 0x116($a0)
    ctx->pc = 0x3a9650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x3a9654: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x3a9654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3a9658: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9658u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a965c: 0x0  nop
    ctx->pc = 0x3a965cu;
    // NOP
    // 0x3a9660: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a9660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a9664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9668: 0x0  nop
    ctx->pc = 0x3a9668u;
    // NOP
    // 0x3a966c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a966cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a9670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9674: 0x0  nop
    ctx->pc = 0x3a9674u;
    // NOP
    // 0x3a9678: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3a9678u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a967c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3a967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9680: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a9680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a9684: 0x0  nop
    ctx->pc = 0x3a9684u;
    // NOP
    // 0x3a9688: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3a9688u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a968c: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x3a968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a9690: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x3a9690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a9694: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9694u;
    {
        const bool branch_taken_0x3a9694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9694u;
            // 0x3a9698: 0x460428dc  madd.s      $f3, $f5, $f4 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9694) {
            ctx->pc = 0x3A96A0u;
            goto label_3a96a0;
        }
    }
    ctx->pc = 0x3A969Cu;
    // 0x3a969c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3a969cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a96a0:
    // 0x3a96a0: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x3a96a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3a96a4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a96a8: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x3a96a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a96ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a96acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a96b0: 0x84e80002  lh          $t0, 0x2($a3)
    ctx->pc = 0x3a96b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3a96b4: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a96b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a96b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a96b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3a96bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a96c0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a96c0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a96c4: 0x24a59b30  addiu       $a1, $a1, -0x64D0
    ctx->pc = 0x3a96c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941488));
    // 0x3a96c8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a96c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a96cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a96ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a96d0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a96d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a96d4: 0x0  nop
    ctx->pc = 0x3a96d4u;
    // NOP
    // 0x3a96d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a96d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a96dc: 0x46061b01  sub.s       $f12, $f3, $f6
    ctx->pc = 0x3a96dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x3a96e0: 0x46061b80  add.s       $f14, $f3, $f6
    ctx->pc = 0x3a96e0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3a96e4: 0x46060b41  sub.s       $f13, $f1, $f6
    ctx->pc = 0x3a96e4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x3a96e8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a96e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a96ec: 0x0  nop
    ctx->pc = 0x3a96ecu;
    // NOP
    // 0x3a96f0: 0x80bc284  j           func_2F0A10
    ctx->pc = 0x3A96F0u;
    ctx->pc = 0x3A96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A96F0u;
            // 0x3a96f4: 0x46060bc0  add.s       $f15, $f1, $f6 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3A96F8u;
    // 0x3a96f8: 0x0  nop
    ctx->pc = 0x3a96f8u;
    // NOP
    // 0x3a96fc: 0x0  nop
    ctx->pc = 0x3a96fcu;
    // NOP
}
