#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A03F0
// Address: 0x4a03f0 - 0x4a0500
void sub_004A03F0_0x4a03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A03F0_0x4a03f0");
#endif

    switch (ctx->pc) {
        case 0x4a043cu: goto label_4a043c;
        case 0x4a04acu: goto label_4a04ac;
        case 0x4a04c8u: goto label_4a04c8;
        default: break;
    }

    ctx->pc = 0x4a03f0u;

    // 0x4a03f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a03f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a03f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a03f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a03f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a03f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a03fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a03fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a0400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a0404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a0404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a0408: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4a040c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x4A040Cu;
    {
        const bool branch_taken_0x4a040c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A040Cu;
            // 0x4a0410: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a040c) {
            ctx->pc = 0x4A04E4u;
            goto label_4a04e4;
        }
    }
    ctx->pc = 0x4A0414u;
    // 0x4a0414: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4a0418: 0x8c637c28  lw          $v1, 0x7C28($v1)
    ctx->pc = 0x4a0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31784)));
    // 0x4a041c: 0x8c680070  lw          $t0, 0x70($v1)
    ctx->pc = 0x4a041cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x4a0420: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A0420u;
    {
        const bool branch_taken_0x4a0420 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0420) {
            ctx->pc = 0x4A0490u;
            goto label_4a0490;
        }
    }
    ctx->pc = 0x4A0428u;
    // 0x4a0428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4a0428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a042c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a042cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0430: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4a0430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a0434: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4a0434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a0438: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a043c:
    // 0x4a043c: 0x8c647c28  lw          $a0, 0x7C28($v1)
    ctx->pc = 0x4a043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31784)));
    // 0x4a0440: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x4a0440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4a0444: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4a0444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4a0448: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x4a0448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a044c: 0x8ce40058  lw          $a0, 0x58($a3)
    ctx->pc = 0x4a044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x4a0450: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A0450u;
    {
        const bool branch_taken_0x4a0450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0450u;
            // 0x4a0454: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0450) {
            ctx->pc = 0x4A0480u;
            goto label_4a0480;
        }
    }
    ctx->pc = 0x4A0458u;
    // 0x4a0458: 0xc4e00080  lwc1        $f0, 0x80($a3)
    ctx->pc = 0x4a0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a045c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4a045cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a0460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x4A0460u;
    {
        const bool branch_taken_0x4a0460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a0460) {
            ctx->pc = 0x4A0480u;
            goto label_4a0480;
        }
    }
    ctx->pc = 0x4A0468u;
    // 0x4a0468: 0x8ce40054  lw          $a0, 0x54($a3)
    ctx->pc = 0x4a0468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x4a046c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A046Cu;
    {
        const bool branch_taken_0x4a046c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x4a046c) {
            ctx->pc = 0x4A0480u;
            goto label_4a0480;
        }
    }
    ctx->pc = 0x4A0474u;
    // 0x4a0474: 0xace0008c  sw          $zero, 0x8C($a3)
    ctx->pc = 0x4a0474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 0));
    // 0x4a0478: 0xace50054  sw          $a1, 0x54($a3)
    ctx->pc = 0x4a0478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 5));
    // 0x4a047c: 0x0  nop
    ctx->pc = 0x4a047cu;
    // NOP
label_4a0480:
    // 0x4a0480: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4a0480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4a0484: 0x148202b  sltu        $a0, $t2, $t0
    ctx->pc = 0x4a0484u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a0488: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4A0488u;
    {
        const bool branch_taken_0x4a0488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0488u;
            // 0x4a048c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0488) {
            ctx->pc = 0x4A043Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a043c;
        }
    }
    ctx->pc = 0x4A0490u;
label_4a0490:
    // 0x4a0490: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a0490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4a0494: 0x8c637c20  lw          $v1, 0x7C20($v1)
    ctx->pc = 0x4a0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31776)));
    // 0x4a0498: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x4a0498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x4a049c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A049Cu;
    {
        const bool branch_taken_0x4a049c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a049c) {
            ctx->pc = 0x4A04D8u;
            goto label_4a04d8;
        }
    }
    ctx->pc = 0x4A04A4u;
    // 0x4a04a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a04a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a04a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a04a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a04ac:
    // 0x4a04ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a04acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a04b0: 0x8c427c20  lw          $v0, 0x7C20($v0)
    ctx->pc = 0x4a04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31776)));
    // 0x4a04b4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4a04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x4a04b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4a04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4a04bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a04c0: 0xc128600  jal         func_4A1800
    ctx->pc = 0x4A04C0u;
    SET_GPR_U32(ctx, 31, 0x4A04C8u);
    ctx->pc = 0x4A04C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A04C0u;
            // 0x4a04c4: 0xc66c0080  lwc1        $f12, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A1800u;
    if (runtime->hasFunction(0x4A1800u)) {
        auto targetFn = runtime->lookupFunction(0x4A1800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A04C8u; }
        if (ctx->pc != 0x4A04C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A1800_0x4a1800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A04C8u; }
        if (ctx->pc != 0x4A04C8u) { return; }
    }
    ctx->pc = 0x4A04C8u;
label_4a04c8:
    // 0x4a04c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a04c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a04cc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4a04ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4a04d0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A04D0u;
    {
        const bool branch_taken_0x4a04d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A04D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A04D0u;
            // 0x4a04d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a04d0) {
            ctx->pc = 0x4A04ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a04ac;
        }
    }
    ctx->pc = 0x4A04D8u;
label_4a04d8:
    // 0x4a04d8: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4a04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4a04dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a04dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a04e0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4a04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4a04e4:
    // 0x4a04e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a04e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a04e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a04e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a04ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a04ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a04f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a04f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a04f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a04f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a04f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A04F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A04FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A04F8u;
            // 0x4a04fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A0500u;
}
