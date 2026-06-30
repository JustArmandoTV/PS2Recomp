#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF130
// Address: 0x1bf130 - 0x1bf2d8
void sub_001BF130_0x1bf130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF130_0x1bf130");
#endif

    switch (ctx->pc) {
        case 0x1bf170u: goto label_1bf170;
        case 0x1bf198u: goto label_1bf198;
        case 0x1bf1c0u: goto label_1bf1c0;
        case 0x1bf1f8u: goto label_1bf1f8;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf260u: goto label_1bf260;
        case 0x1bf288u: goto label_1bf288;
        case 0x1bf2acu: goto label_1bf2ac;
        case 0x1bf2c0u: goto label_1bf2c0;
        default: break;
    }

    ctx->pc = 0x1bf130u;

    // 0x1bf130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bf134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf13c: 0x806fc52  j           func_1BF148
    ctx->pc = 0x1BF13Cu;
    ctx->pc = 0x1BF140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF13Cu;
            // 0x1bf140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF148u;
    goto label_1bf148;
    ctx->pc = 0x1BF144u;
    // 0x1bf144: 0x0  nop
    ctx->pc = 0x1bf144u;
    // NOP
label_1bf148:
    // 0x1bf148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf14c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1bf150: 0xa22026  xor         $a0, $a1, $v0
    ctx->pc = 0x1bf150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1bf154: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x1bf154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x1bf158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf15c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1bf15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf160: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x1bf160u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1bf164: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1bf168: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x1bf168u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1bf16c: 0x0  nop
    ctx->pc = 0x1bf16cu;
    // NOP
label_1bf170:
    // 0x1bf170: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1bf170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bf174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bf174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bf178: 0x0  nop
    ctx->pc = 0x1bf178u;
    // NOP
    // 0x1bf17c: 0x0  nop
    ctx->pc = 0x1bf17cu;
    // NOP
    // 0x1bf180: 0x0  nop
    ctx->pc = 0x1bf180u;
    // NOP
    // 0x1bf184: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF184u;
    {
        const bool branch_taken_0x1bf184 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1BF188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF184u;
            // 0x1bf188: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf184) {
            ctx->pc = 0x1BF170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf170;
        }
    }
    ctx->pc = 0x1BF18Cu;
    // 0x1bf18c: 0x24e20024  addiu       $v0, $a3, 0x24
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1bf190: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf194: 0x0  nop
    ctx->pc = 0x1bf194u;
    // NOP
label_1bf198:
    // 0x1bf198: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1bf198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bf19c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1bf19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1bf1a0: 0x0  nop
    ctx->pc = 0x1bf1a0u;
    // NOP
    // 0x1bf1a4: 0x0  nop
    ctx->pc = 0x1bf1a4u;
    // NOP
    // 0x1bf1a8: 0x0  nop
    ctx->pc = 0x1bf1a8u;
    // NOP
    // 0x1bf1ac: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF1ACu;
    {
        const bool branch_taken_0x1bf1ac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1BF1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1ACu;
            // 0x1bf1b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1ac) {
            ctx->pc = 0x1BF198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf198;
        }
    }
    ctx->pc = 0x1BF1B4u;
    // 0x1bf1b4: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF1B4u;
    {
        const bool branch_taken_0x1bf1b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BF1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1B4u;
            // 0x1bf1b8: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b4) {
            ctx->pc = 0x1BF1E8u;
            goto label_1bf1e8;
        }
    }
    ctx->pc = 0x1BF1BCu;
    // 0x1bf1bc: 0x24e30044  addiu       $v1, $a3, 0x44
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_1bf1c0:
    // 0x1bf1c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1bf1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1bf1c4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1bf1c8: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x1bf1cc: 0x0  nop
    ctx->pc = 0x1bf1ccu;
    // NOP
    // 0x1bf1d0: 0x0  nop
    ctx->pc = 0x1bf1d0u;
    // NOP
    // 0x1bf1d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF1D4u;
    {
        const bool branch_taken_0x1bf1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1D4u;
            // 0x1bf1d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1d4) {
            ctx->pc = 0x1BF1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf1c0;
        }
    }
    ctx->pc = 0x1BF1DCu;
    // 0x1bf1dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BF1DCu;
    {
        const bool branch_taken_0x1bf1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1DCu;
            // 0x1bf1e0: 0x24e20380  addiu       $v0, $a3, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1dc) {
            ctx->pc = 0x1BF22Cu;
            goto label_1bf22c;
        }
    }
    ctx->pc = 0x1BF1E4u;
    // 0x1bf1e4: 0x0  nop
    ctx->pc = 0x1bf1e4u;
    // NOP
label_1bf1e8:
    // 0x1bf1e8: 0xc55023  subu        $t2, $a2, $a1
    ctx->pc = 0x1bf1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bf1ec: 0x240b00cf  addiu       $t3, $zero, 0xCF
    ctx->pc = 0x1bf1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1bf1f0: 0x24e90044  addiu       $t1, $a3, 0x44
    ctx->pc = 0x1bf1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
    // 0x1bf1f4: 0x0  nop
    ctx->pc = 0x1bf1f4u;
    // NOP
label_1bf1f8:
    // 0x1bf1f8: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x1bf1f8u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1bf1fc: 0x2503ffef  addiu       $v1, $t0, -0x11
    ctx->pc = 0x1bf1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x1bf200: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1bf200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1bf204: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF204u;
            // 0x1bf208: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF20Cu;
            goto label_1bf20c;
        }
    }
    ctx->pc = 0x1BF20Cu;
label_1bf20c:
    // 0x1bf20c: 0x290400e0  slti        $a0, $t0, 0xE0
    ctx->pc = 0x1bf20cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x1bf210: 0x1012  mflo        $v0
    ctx->pc = 0x1bf210u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1bf214: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x1bf214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1bf218: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x1bf218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf21c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1bf21cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1bf220: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BF220u;
    {
        const bool branch_taken_0x1bf220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF220u;
            // 0x1bf224: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf220) {
            ctx->pc = 0x1BF1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf1f8;
        }
    }
    ctx->pc = 0x1BF228u;
    // 0x1bf228: 0x24e20380  addiu       $v0, $a3, 0x380
    ctx->pc = 0x1bf228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
label_1bf22c:
    // 0x1bf22c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1bf22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bf230:
    // 0x1bf230: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bf234: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bf234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bf238: 0x0  nop
    ctx->pc = 0x1bf238u;
    // NOP
    // 0x1bf23c: 0x0  nop
    ctx->pc = 0x1bf23cu;
    // NOP
    // 0x1bf240: 0x0  nop
    ctx->pc = 0x1bf240u;
    // NOP
    // 0x1bf244: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF244u;
    {
        const bool branch_taken_0x1bf244 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1BF248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF244u;
            // 0x1bf248: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf244) {
            ctx->pc = 0x1BF230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf230;
        }
    }
    ctx->pc = 0x1BF24Cu;
    // 0x1bf24c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1bf24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1bf250: 0x24e703c0  addiu       $a3, $a3, 0x3C0
    ctx->pc = 0x1bf250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x1bf254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bf254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bf258: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x1bf258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bf25c: 0x0  nop
    ctx->pc = 0x1bf25cu;
    // NOP
label_1bf260:
    // 0x1bf260: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bf264: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1bf264u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1bf268: 0x0  nop
    ctx->pc = 0x1bf268u;
    // NOP
    // 0x1bf26c: 0x0  nop
    ctx->pc = 0x1bf26cu;
    // NOP
    // 0x1bf270: 0x0  nop
    ctx->pc = 0x1bf270u;
    // NOP
    // 0x1bf274: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF274u;
    {
        const bool branch_taken_0x1bf274 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1BF278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF274u;
            // 0x1bf278: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf274) {
            ctx->pc = 0x1BF260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf260;
        }
    }
    ctx->pc = 0x1BF27Cu;
    // 0x1bf27c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF284u;
    // 0x1bf284: 0x0  nop
    ctx->pc = 0x1bf284u;
    // NOP
label_1bf288:
    // 0x1bf288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf28c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bf28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1bf290: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bf290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf294: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1bf298: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bf298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf29c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bf29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bf2a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bf2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bf2a4: 0xc06fbe6  jal         func_1BEF98
    ctx->pc = 0x1BF2A4u;
    SET_GPR_U32(ctx, 31, 0x1BF2ACu);
    ctx->pc = 0x1BF2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2A4u;
            // 0x1bf2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEF98u;
    if (runtime->hasFunction(0x1BEF98u)) {
        auto targetFn = runtime->lookupFunction(0x1BEF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ACu; }
        if (ctx->pc != 0x1BF2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEF98_0x1bef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2ACu; }
        if (ctx->pc != 0x1BF2ACu) { return; }
    }
    ctx->pc = 0x1BF2ACu;
label_1bf2ac:
    // 0x1bf2ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2b4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bf2b8: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BF2B8u;
    SET_GPR_U32(ctx, 31, 0x1BF2C0u);
    ctx->pc = 0x1BF2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2B8u;
            // 0x1bf2bc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (runtime->hasFunction(0x1BF2D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BF2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C0u; }
        if (ctx->pc != 0x1BF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF2D8_0x1bf2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF2C0u; }
        if (ctx->pc != 0x1BF2C0u) { return; }
    }
    ctx->pc = 0x1BF2C0u;
label_1bf2c0:
    // 0x1bf2c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bf2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf2c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bf2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF2CCu;
            // 0x1bf2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF2D4u;
    // 0x1bf2d4: 0x0  nop
    ctx->pc = 0x1bf2d4u;
    // NOP
}
