#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398450
// Address: 0x398450 - 0x3985f0
void sub_00398450_0x398450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398450_0x398450");
#endif

    switch (ctx->pc) {
        case 0x3984b0u: goto label_3984b0;
        case 0x3984b8u: goto label_3984b8;
        case 0x39859cu: goto label_39859c;
        case 0x3985d4u: goto label_3985d4;
        default: break;
    }

    ctx->pc = 0x398450u;

    // 0x398450: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x398450u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x398458u;
    // 0x398458: 0x0  nop
    ctx->pc = 0x398458u;
    // NOP
    // 0x39845c: 0x0  nop
    ctx->pc = 0x39845cu;
    // NOP
    // 0x398460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398464: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x398464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x398468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39846c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39846cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x398470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398474: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x398474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x398478: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x398478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x39847c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39847cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x398480: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x398480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x398484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x398488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x39848c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398490: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x398490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x398494: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x398494u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x398498: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x398498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x39849c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x39849cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3984a0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3984a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3984a4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3984a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x3984a8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3984A8u;
    SET_GPR_U32(ctx, 31, 0x3984B0u);
    ctx->pc = 0x3984ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3984A8u;
            // 0x3984ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3984B0u; }
        if (ctx->pc != 0x3984B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3984B0u; }
        if (ctx->pc != 0x3984B0u) { return; }
    }
    ctx->pc = 0x3984B0u;
label_3984b0:
    // 0x3984b0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3984B0u;
    SET_GPR_U32(ctx, 31, 0x3984B8u);
    ctx->pc = 0x3984B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3984B0u;
            // 0x3984b4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3984B8u; }
        if (ctx->pc != 0x3984B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3984B8u; }
        if (ctx->pc != 0x3984B8u) { return; }
    }
    ctx->pc = 0x3984B8u;
label_3984b8:
    // 0x3984b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3984b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3984bc: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x3984bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x3984c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3984c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3984c4: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x3984c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x3984c8: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x3984c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x3984cc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x3984ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x3984d0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x3984d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x3984d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3984d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3984d8: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x3984d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x3984dc: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x3984dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
    // 0x3984e0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3984e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3984e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3984e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3984e8: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x3984e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
    // 0x3984ec: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x3984ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
    // 0x3984f0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3984f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3984f4: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x3984f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
    // 0x3984f8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x3984f8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3984fc: 0x24c681d0  addiu       $a2, $a2, -0x7E30
    ctx->pc = 0x3984fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934992));
    // 0x398500: 0x24a58210  addiu       $a1, $a1, -0x7DF0
    ctx->pc = 0x398500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935056));
    // 0x398504: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x398504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
    // 0x398508: 0x24638158  addiu       $v1, $v1, -0x7EA8
    ctx->pc = 0x398508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934872));
    // 0x39850c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39850cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398510: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x398510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
    // 0x398514: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x398514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x398518: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x398518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x39851c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x39851cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x398520: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x398520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x398524: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x398524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x398528: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x398528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x39852c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x39852cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x398530: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x398530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x398534: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x398534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x398538: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x398538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x39853c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x39853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x398540: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x398540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x398544: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x398544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x398548: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x398548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x39854c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x39854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x398550: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x398550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x398554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39855c: 0x3e00008  jr          $ra
    ctx->pc = 0x39855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39855Cu;
            // 0x398560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398564u;
    // 0x398564: 0x0  nop
    ctx->pc = 0x398564u;
    // NOP
    // 0x398568: 0x0  nop
    ctx->pc = 0x398568u;
    // NOP
    // 0x39856c: 0x0  nop
    ctx->pc = 0x39856cu;
    // NOP
    // 0x398570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39857c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x398580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398584: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x398584u;
    {
        const bool branch_taken_0x398584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x398588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398584u;
            // 0x398588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398584) {
            ctx->pc = 0x3985D4u;
            goto label_3985d4;
        }
    }
    ctx->pc = 0x39858Cu;
    // 0x39858c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x398590: 0x24428158  addiu       $v0, $v0, -0x7EA8
    ctx->pc = 0x398590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
    // 0x398594: 0xc0e65a4  jal         func_399690
    ctx->pc = 0x398594u;
    SET_GPR_U32(ctx, 31, 0x39859Cu);
    ctx->pc = 0x398598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398594u;
            // 0x398598: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399690u;
    if (runtime->hasFunction(0x399690u)) {
        auto targetFn = runtime->lookupFunction(0x399690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39859Cu; }
        if (ctx->pc != 0x39859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399690_0x399690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39859Cu; }
        if (ctx->pc != 0x39859Cu) { return; }
    }
    ctx->pc = 0x39859Cu;
label_39859c:
    // 0x39859c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x39859Cu;
    {
        const bool branch_taken_0x39859c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39859c) {
            ctx->pc = 0x3985A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39859Cu;
            // 0x3985a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3985C0u;
            goto label_3985c0;
        }
    }
    ctx->pc = 0x3985A4u;
    // 0x3985a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3985a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3985a8: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x3985a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
    // 0x3985ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3985acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3985b0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3985b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3985b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3985b8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3985b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3985bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3985bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3985c0:
    // 0x3985c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3985c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3985c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3985C4u;
    {
        const bool branch_taken_0x3985c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3985c4) {
            ctx->pc = 0x3985C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3985C4u;
            // 0x3985c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3985D8u;
            goto label_3985d8;
        }
    }
    ctx->pc = 0x3985CCu;
    // 0x3985cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3985CCu;
    SET_GPR_U32(ctx, 31, 0x3985D4u);
    ctx->pc = 0x3985D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3985CCu;
            // 0x3985d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3985D4u; }
        if (ctx->pc != 0x3985D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3985D4u; }
        if (ctx->pc != 0x3985D4u) { return; }
    }
    ctx->pc = 0x3985D4u;
label_3985d4:
    // 0x3985d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3985d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3985d8:
    // 0x3985d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3985d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3985dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3985dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3985e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3985e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3985e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3985E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3985E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3985E4u;
            // 0x3985e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3985ECu;
    // 0x3985ec: 0x0  nop
    ctx->pc = 0x3985ecu;
    // NOP
}
