#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00563380
// Address: 0x563380 - 0x563e20
void sub_00563380_0x563380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00563380_0x563380");
#endif

    switch (ctx->pc) {
        case 0x563434u: goto label_563434;
        case 0x56344cu: goto label_56344c;
        case 0x5634d0u: goto label_5634d0;
        case 0x5635c0u: goto label_5635c0;
        case 0x5635d8u: goto label_5635d8;
        case 0x5635f0u: goto label_5635f0;
        case 0x563608u: goto label_563608;
        case 0x563628u: goto label_563628;
        case 0x563640u: goto label_563640;
        case 0x5636c4u: goto label_5636c4;
        case 0x5637b4u: goto label_5637b4;
        case 0x5637ccu: goto label_5637cc;
        case 0x5637e4u: goto label_5637e4;
        case 0x5637fcu: goto label_5637fc;
        case 0x563814u: goto label_563814;
        case 0x563834u: goto label_563834;
        case 0x563854u: goto label_563854;
        case 0x56386cu: goto label_56386c;
        case 0x5638f0u: goto label_5638f0;
        case 0x5639e0u: goto label_5639e0;
        case 0x5639f8u: goto label_5639f8;
        case 0x563a10u: goto label_563a10;
        case 0x563a28u: goto label_563a28;
        case 0x563a48u: goto label_563a48;
        case 0x563a60u: goto label_563a60;
        case 0x563ae4u: goto label_563ae4;
        case 0x563bd4u: goto label_563bd4;
        case 0x563becu: goto label_563bec;
        case 0x563c04u: goto label_563c04;
        case 0x563c1cu: goto label_563c1c;
        case 0x563c30u: goto label_563c30;
        case 0x563c48u: goto label_563c48;
        case 0x563cccu: goto label_563ccc;
        case 0x563dbcu: goto label_563dbc;
        case 0x563dd4u: goto label_563dd4;
        case 0x563decu: goto label_563dec;
        case 0x563e04u: goto label_563e04;
        default: break;
    }

    ctx->pc = 0x563380u;

    // 0x563380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x563380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x563384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x563384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x563388: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x563388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x56338c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x563390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x563390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x563394: 0xc48201a4  lwc1        $f2, 0x1A4($a0)
    ctx->pc = 0x563394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x563398: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x563398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56339c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x56339Cu;
    {
        const bool branch_taken_0x56339c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5633A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56339Cu;
            // 0x5633a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56339c) {
            ctx->pc = 0x5633C4u;
            goto label_5633c4;
        }
    }
    ctx->pc = 0x5633A4u;
    // 0x5633a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5633a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x5633a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5633a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x5633ac: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x5633acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5633b0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x5633b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x5633b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5633b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5633b8: 0x45000292  bc1f        . + 4 + (0x292 << 2)
    ctx->pc = 0x5633B8u;
    {
        const bool branch_taken_0x5633b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5633BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5633B8u;
            // 0x5633bc: 0xe60001a4  swc1        $f0, 0x1A4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5633b8) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5633C0u;
    // 0x5633c0: 0xe60101a4  swc1        $f1, 0x1A4($s0)
    ctx->pc = 0x5633c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_5633c4:
    // 0x5633c4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x5633c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x5633c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5633c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5633cc: 0x8c450cc8  lw          $a1, 0xCC8($v0)
    ctx->pc = 0x5633ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
    // 0x5633d0: 0x8c870d98  lw          $a3, 0xD98($a0)
    ctx->pc = 0x5633d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
    // 0x5633d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5633d8: 0x8c430cc0  lw          $v1, 0xCC0($v0)
    ctx->pc = 0x5633d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
    // 0x5633dc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x5633dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x5633e0: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x5633e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x5633e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x5633e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x5633e8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x5633e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x5633ec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x5633ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x5633f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x5633f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x5633f4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x5633f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x5633f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5633f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5633fc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x5633fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x563400: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x563400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x563404: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x563404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x563408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x563408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x56340c: 0x24660090  addiu       $a2, $v1, 0x90
    ctx->pc = 0x56340cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x563410: 0x806300c1  lb          $v1, 0xC1($v1)
    ctx->pc = 0x563410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 193)));
    // 0x563414: 0x54620102  bnel        $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x563414u;
    {
        const bool branch_taken_0x563414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x563414) {
            ctx->pc = 0x563418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563414u;
            // 0x563418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563820u;
            goto label_563820;
        }
    }
    ctx->pc = 0x56341Cu;
    // 0x56341c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x56341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x563420: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x563420u;
    {
        const bool branch_taken_0x563420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x563420) {
            ctx->pc = 0x563424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563420u;
            // 0x563424: 0x8cc2004c  lw          $v0, 0x4C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563614u;
            goto label_563614;
        }
    }
    ctx->pc = 0x563428u;
    // 0x563428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x56342c: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x56342Cu;
    SET_GPR_U32(ctx, 31, 0x563434u);
    ctx->pc = 0x563430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56342Cu;
            // 0x563430: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563434u; }
        if (ctx->pc != 0x563434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563434u; }
        if (ctx->pc != 0x563434u) { return; }
    }
    ctx->pc = 0x563434u;
label_563434:
    // 0x563434: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x563434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x563438: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x563438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x56343c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x56343cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563444: 0x2484fa00  addiu       $a0, $a0, -0x600
    ctx->pc = 0x563444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965760));
    // 0x563448: 0x2810  mfhi        $a1
    ctx->pc = 0x563448u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_56344c:
    // 0x56344c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x56344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x563450: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x563450u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x563454: 0x5ca00004  bgtzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x563454u;
    {
        const bool branch_taken_0x563454 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x563454) {
            ctx->pc = 0x563458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563454u;
            // 0x563458: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563468u;
            goto label_563468;
        }
    }
    ctx->pc = 0x56345Cu;
    // 0x56345c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x56345Cu;
    {
        const bool branch_taken_0x56345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56345Cu;
            // 0x563460: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56345c) {
            ctx->pc = 0x56347Cu;
            goto label_56347c;
        }
    }
    ctx->pc = 0x563464u;
    // 0x563464: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x563464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_563468:
    // 0x563468: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x563468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x56346c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x56346Cu;
    {
        const bool branch_taken_0x56346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x563470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56346Cu;
            // 0x563470: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56346c) {
            ctx->pc = 0x56344Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56344c;
        }
    }
    ctx->pc = 0x563474u;
    // 0x563474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563478: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x563478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_56347c:
    // 0x56347c: 0x50c3005f  beql        $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x56347Cu;
    {
        const bool branch_taken_0x56347c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x56347c) {
            ctx->pc = 0x563480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56347Cu;
            // 0x563480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5635FCu;
            goto label_5635fc;
        }
    }
    ctx->pc = 0x563484u;
    // 0x563484: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x563484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x563488: 0x50c50056  beql        $a2, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x563488u;
    {
        const bool branch_taken_0x563488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x563488) {
            ctx->pc = 0x56348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563488u;
            // 0x56348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5635E4u;
            goto label_5635e4;
        }
    }
    ctx->pc = 0x563490u;
    // 0x563490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x563490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x563494: 0x50c3004d  beql        $a2, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x563494u;
    {
        const bool branch_taken_0x563494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563494) {
            ctx->pc = 0x563498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563494u;
            // 0x563498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5635CCu;
            goto label_5635cc;
        }
    }
    ctx->pc = 0x56349Cu;
    // 0x56349c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x56349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5634a0: 0x50c30044  beql        $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x5634A0u;
    {
        const bool branch_taken_0x5634a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5634a0) {
            ctx->pc = 0x5634A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5634A0u;
            // 0x5634a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5635B4u;
            goto label_5635b4;
        }
    }
    ctx->pc = 0x5634A8u;
    // 0x5634a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x5634A8u;
    {
        const bool branch_taken_0x5634a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5634a8) {
            ctx->pc = 0x5634B8u;
            goto label_5634b8;
        }
    }
    ctx->pc = 0x5634B0u;
    // 0x5634b0: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x5634B0u;
    {
        const bool branch_taken_0x5634b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5634B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5634B0u;
            // 0x5634b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5634b0) {
            ctx->pc = 0x563E08u;
            goto label_563e08;
        }
    }
    ctx->pc = 0x5634B8u;
label_5634b8:
    // 0x5634b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5634b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x5634bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5634bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5634c0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5634c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x5634c4: 0x8c710780  lw          $s1, 0x780($v1)
    ctx->pc = 0x5634c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x5634c8: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x5634C8u;
    SET_GPR_U32(ctx, 31, 0x5634D0u);
    ctx->pc = 0x5634CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5634C8u;
            // 0x5634cc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5634D0u; }
        if (ctx->pc != 0x5634D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5634D0u; }
        if (ctx->pc != 0x5634D0u) { return; }
    }
    ctx->pc = 0x5634D0u;
label_5634d0:
    // 0x5634d0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x5634d0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x5634d4: 0x3c033f4f  lui         $v1, 0x3F4F
    ctx->pc = 0x5634d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16207 << 16));
    // 0x5634d8: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x5634d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x5634dc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x5634dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x5634e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5634e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5634e4: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x5634e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x5634e8: 0x1810  mfhi        $v1
    ctx->pc = 0x5634e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x5634ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5634ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5634f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5634f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5634f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5634f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5634f8: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x5634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x5634fc: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x5634fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    // 0x563500: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x563500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x563504: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x563504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x563508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x563508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56350c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x56350Cu;
    {
        const bool branch_taken_0x56350c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x56350c) {
            ctx->pc = 0x563554u;
            goto label_563554;
        }
    }
    ctx->pc = 0x563514u;
    // 0x563514: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563518: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x563518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
    // 0x56351c: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x56351Cu;
    {
        const bool branch_taken_0x56351c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x56351c) {
            ctx->pc = 0x563520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56351Cu;
            // 0x563520: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563534u;
            goto label_563534;
        }
    }
    ctx->pc = 0x563524u;
    // 0x563524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563528u;
    {
        const bool branch_taken_0x563528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563528u;
            // 0x56352c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563528) {
            ctx->pc = 0x56354Cu;
            goto label_56354c;
        }
    }
    ctx->pc = 0x563530u;
    // 0x563530: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563530u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563534:
    // 0x563534: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563538: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x56353c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x56353cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563540: 0x0  nop
    ctx->pc = 0x563540u;
    // NOP
    // 0x563544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563548: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_56354c:
    // 0x56354c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x56354Cu;
    {
        const bool branch_taken_0x56354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56354Cu;
            // 0x563550: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56354c) {
            ctx->pc = 0x563590u;
            goto label_563590;
        }
    }
    ctx->pc = 0x563554u;
label_563554:
    // 0x563554: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563558: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x563558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
    // 0x56355c: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x56355Cu;
    {
        const bool branch_taken_0x56355c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x56355c) {
            ctx->pc = 0x563560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56355Cu;
            // 0x563560: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563574u;
            goto label_563574;
        }
    }
    ctx->pc = 0x563564u;
    // 0x563564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563568u;
    {
        const bool branch_taken_0x563568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563568u;
            // 0x56356c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563568) {
            ctx->pc = 0x56358Cu;
            goto label_56358c;
        }
    }
    ctx->pc = 0x563570u;
    // 0x563570: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563570u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563574:
    // 0x563574: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563578: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x56357c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x56357cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563580: 0x0  nop
    ctx->pc = 0x563580u;
    // NOP
    // 0x563584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563588: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_56358c:
    // 0x56358c: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x56358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_563590:
    // 0x563590: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x563590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x563594: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x563594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x563598: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x563598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x56359c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x56359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x5635a0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x5635a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x5635a4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x5635a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x5635a8: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x5635A8u;
    {
        const bool branch_taken_0x5635a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5635ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5635A8u;
            // 0x5635ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5635a8) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5635B0u;
    // 0x5635b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5635b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5635b4:
    // 0x5635b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5635b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5635b8: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5635B8u;
    SET_GPR_U32(ctx, 31, 0x5635C0u);
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635C0u; }
        if (ctx->pc != 0x5635C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635C0u; }
        if (ctx->pc != 0x5635C0u) { return; }
    }
    ctx->pc = 0x5635C0u;
label_5635c0:
    // 0x5635c0: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x5635C0u;
    {
        const bool branch_taken_0x5635c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5635c0) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5635C8u;
    // 0x5635c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5635c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5635cc:
    // 0x5635cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5635ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5635d0: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5635D0u;
    SET_GPR_U32(ctx, 31, 0x5635D8u);
    ctx->pc = 0x5635D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5635D0u;
            // 0x5635d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635D8u; }
        if (ctx->pc != 0x5635D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635D8u; }
        if (ctx->pc != 0x5635D8u) { return; }
    }
    ctx->pc = 0x5635D8u;
label_5635d8:
    // 0x5635d8: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x5635D8u;
    {
        const bool branch_taken_0x5635d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5635d8) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5635E0u;
    // 0x5635e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5635e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5635e4:
    // 0x5635e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5635e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5635e8: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5635E8u;
    SET_GPR_U32(ctx, 31, 0x5635F0u);
    ctx->pc = 0x5635ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5635E8u;
            // 0x5635ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635F0u; }
        if (ctx->pc != 0x5635F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5635F0u; }
        if (ctx->pc != 0x5635F0u) { return; }
    }
    ctx->pc = 0x5635F0u;
label_5635f0:
    // 0x5635f0: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x5635F0u;
    {
        const bool branch_taken_0x5635f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5635f0) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5635F8u;
    // 0x5635f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5635f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5635fc:
    // 0x5635fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5635fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563600: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563600u;
    SET_GPR_U32(ctx, 31, 0x563608u);
    ctx->pc = 0x563604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563600u;
            // 0x563604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563608u; }
        if (ctx->pc != 0x563608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563608u; }
        if (ctx->pc != 0x563608u) { return; }
    }
    ctx->pc = 0x563608u;
label_563608:
    // 0x563608: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x563608u;
    {
        const bool branch_taken_0x563608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563608) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563610u;
    // 0x563610: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x563610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_563614:
    // 0x563614: 0x5840007c  blezl       $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x563614u;
    {
        const bool branch_taken_0x563614 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x563614) {
            ctx->pc = 0x563618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563614u;
            // 0x563618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563808u;
            goto label_563808;
        }
    }
    ctx->pc = 0x56361Cu;
    // 0x56361c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x56361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x563620: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x563620u;
    SET_GPR_U32(ctx, 31, 0x563628u);
    ctx->pc = 0x563624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563620u;
            // 0x563624: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563628u; }
        if (ctx->pc != 0x563628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563628u; }
        if (ctx->pc != 0x563628u) { return; }
    }
    ctx->pc = 0x563628u;
label_563628:
    // 0x563628: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x563628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x56362c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x56362cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x563630: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x563630u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563638: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x563638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x56363c: 0x2810  mfhi        $a1
    ctx->pc = 0x56363cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_563640:
    // 0x563640: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x563640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x563644: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x563644u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x563648: 0x5ca00004  bgtzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x563648u;
    {
        const bool branch_taken_0x563648 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x563648) {
            ctx->pc = 0x56364Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563648u;
            // 0x56364c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56365Cu;
            goto label_56365c;
        }
    }
    ctx->pc = 0x563650u;
    // 0x563650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563650u;
    {
        const bool branch_taken_0x563650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563650u;
            // 0x563654: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563650) {
            ctx->pc = 0x563670u;
            goto label_563670;
        }
    }
    ctx->pc = 0x563658u;
    // 0x563658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x563658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_56365c:
    // 0x56365c: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x56365cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x563660: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x563660u;
    {
        const bool branch_taken_0x563660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x563664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563660u;
            // 0x563664: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563660) {
            ctx->pc = 0x563640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_563640;
        }
    }
    ctx->pc = 0x563668u;
    // 0x563668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56366c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x56366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_563670:
    // 0x563670: 0x50c3005f  beql        $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x563670u;
    {
        const bool branch_taken_0x563670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563670) {
            ctx->pc = 0x563674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563670u;
            // 0x563674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5637F0u;
            goto label_5637f0;
        }
    }
    ctx->pc = 0x563678u;
    // 0x563678: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x563678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x56367c: 0x50c50056  beql        $a2, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x56367Cu;
    {
        const bool branch_taken_0x56367c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x56367c) {
            ctx->pc = 0x563680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56367Cu;
            // 0x563680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5637D8u;
            goto label_5637d8;
        }
    }
    ctx->pc = 0x563684u;
    // 0x563684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x563684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x563688: 0x50c3004d  beql        $a2, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x563688u;
    {
        const bool branch_taken_0x563688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563688) {
            ctx->pc = 0x56368Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563688u;
            // 0x56368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5637C0u;
            goto label_5637c0;
        }
    }
    ctx->pc = 0x563690u;
    // 0x563690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x563690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563694: 0x50c30044  beql        $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x563694u;
    {
        const bool branch_taken_0x563694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563694) {
            ctx->pc = 0x563698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563694u;
            // 0x563698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5637A8u;
            goto label_5637a8;
        }
    }
    ctx->pc = 0x56369Cu;
    // 0x56369c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x56369Cu;
    {
        const bool branch_taken_0x56369c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x56369c) {
            ctx->pc = 0x5636ACu;
            goto label_5636ac;
        }
    }
    ctx->pc = 0x5636A4u;
    // 0x5636a4: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x5636A4u;
    {
        const bool branch_taken_0x5636a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5636a4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5636ACu;
label_5636ac:
    // 0x5636ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5636acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x5636b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5636b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5636b4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5636b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x5636b8: 0x8c710780  lw          $s1, 0x780($v1)
    ctx->pc = 0x5636b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x5636bc: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x5636BCu;
    SET_GPR_U32(ctx, 31, 0x5636C4u);
    ctx->pc = 0x5636C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5636BCu;
            // 0x5636c0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5636C4u; }
        if (ctx->pc != 0x5636C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5636C4u; }
        if (ctx->pc != 0x5636C4u) { return; }
    }
    ctx->pc = 0x5636C4u;
label_5636c4:
    // 0x5636c4: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x5636c4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x5636c8: 0x3c033f4f  lui         $v1, 0x3F4F
    ctx->pc = 0x5636c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16207 << 16));
    // 0x5636cc: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x5636ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x5636d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x5636d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x5636d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5636d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5636d8: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x5636d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x5636dc: 0x1810  mfhi        $v1
    ctx->pc = 0x5636dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x5636e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5636e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5636e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5636e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5636e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5636e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5636ec: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x5636ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x5636f0: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x5636f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    // 0x5636f4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x5636f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x5636f8: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x5636f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5636fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5636fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563700: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x563700u;
    {
        const bool branch_taken_0x563700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x563700) {
            ctx->pc = 0x563748u;
            goto label_563748;
        }
    }
    ctx->pc = 0x563708u;
    // 0x563708: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x56370c: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x56370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
    // 0x563710: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563710u;
    {
        const bool branch_taken_0x563710 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563710) {
            ctx->pc = 0x563714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563710u;
            // 0x563714: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563728u;
            goto label_563728;
        }
    }
    ctx->pc = 0x563718u;
    // 0x563718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56371c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x56371Cu;
    {
        const bool branch_taken_0x56371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56371Cu;
            // 0x563720: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56371c) {
            ctx->pc = 0x563740u;
            goto label_563740;
        }
    }
    ctx->pc = 0x563724u;
    // 0x563724: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563728:
    // 0x563728: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x56372c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x56372cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563730: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563730u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563734: 0x0  nop
    ctx->pc = 0x563734u;
    // NOP
    // 0x563738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56373c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x56373cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563740:
    // 0x563740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x563740u;
    {
        const bool branch_taken_0x563740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563740u;
            // 0x563744: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563740) {
            ctx->pc = 0x563784u;
            goto label_563784;
        }
    }
    ctx->pc = 0x563748u;
label_563748:
    // 0x563748: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x56374c: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x56374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
    // 0x563750: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563750u;
    {
        const bool branch_taken_0x563750 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563750) {
            ctx->pc = 0x563754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563750u;
            // 0x563754: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563768u;
            goto label_563768;
        }
    }
    ctx->pc = 0x563758u;
    // 0x563758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56375c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x56375Cu;
    {
        const bool branch_taken_0x56375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56375Cu;
            // 0x563760: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56375c) {
            ctx->pc = 0x563780u;
            goto label_563780;
        }
    }
    ctx->pc = 0x563764u;
    // 0x563764: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563764u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563768:
    // 0x563768: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x56376c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x56376cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563770: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563770u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563774: 0x0  nop
    ctx->pc = 0x563774u;
    // NOP
    // 0x563778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x56377c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x56377cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563780:
    // 0x563780: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x563780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_563784:
    // 0x563784: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x563784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x563788: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x563788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x56378c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x56378cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x563790: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x563790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x563794: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x563794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x563798: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x563798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x56379c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x56379Cu;
    {
        const bool branch_taken_0x56379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5637A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56379Cu;
            // 0x5637a0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56379c) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5637A4u;
    // 0x5637a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5637a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5637a8:
    // 0x5637a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5637a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5637ac: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5637ACu;
    SET_GPR_U32(ctx, 31, 0x5637B4u);
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637B4u; }
        if (ctx->pc != 0x5637B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637B4u; }
        if (ctx->pc != 0x5637B4u) { return; }
    }
    ctx->pc = 0x5637B4u;
label_5637b4:
    // 0x5637b4: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x5637B4u;
    {
        const bool branch_taken_0x5637b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5637b4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5637BCu;
    // 0x5637bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5637bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5637c0:
    // 0x5637c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5637c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5637c4: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5637C4u;
    SET_GPR_U32(ctx, 31, 0x5637CCu);
    ctx->pc = 0x5637C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5637C4u;
            // 0x5637c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637CCu; }
        if (ctx->pc != 0x5637CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637CCu; }
        if (ctx->pc != 0x5637CCu) { return; }
    }
    ctx->pc = 0x5637CCu;
label_5637cc:
    // 0x5637cc: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x5637CCu;
    {
        const bool branch_taken_0x5637cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5637cc) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5637D4u;
    // 0x5637d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5637d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5637d8:
    // 0x5637d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5637d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5637dc: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5637DCu;
    SET_GPR_U32(ctx, 31, 0x5637E4u);
    ctx->pc = 0x5637E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5637DCu;
            // 0x5637e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637E4u; }
        if (ctx->pc != 0x5637E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637E4u; }
        if (ctx->pc != 0x5637E4u) { return; }
    }
    ctx->pc = 0x5637E4u;
label_5637e4:
    // 0x5637e4: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x5637E4u;
    {
        const bool branch_taken_0x5637e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5637e4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5637ECu;
    // 0x5637ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5637ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5637f0:
    // 0x5637f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5637f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5637f4: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5637F4u;
    SET_GPR_U32(ctx, 31, 0x5637FCu);
    ctx->pc = 0x5637F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5637F4u;
            // 0x5637f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637FCu; }
        if (ctx->pc != 0x5637FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5637FCu; }
        if (ctx->pc != 0x5637FCu) { return; }
    }
    ctx->pc = 0x5637FCu;
label_5637fc:
    // 0x5637fc: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x5637FCu;
    {
        const bool branch_taken_0x5637fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5637fc) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563804u;
    // 0x563804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563808:
    // 0x563808: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x56380c: 0xc158f88  jal         func_563E20
    ctx->pc = 0x56380Cu;
    SET_GPR_U32(ctx, 31, 0x563814u);
    ctx->pc = 0x563810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56380Cu;
            // 0x563810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563814u; }
        if (ctx->pc != 0x563814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563814u; }
        if (ctx->pc != 0x563814u) { return; }
    }
    ctx->pc = 0x563814u;
label_563814:
    // 0x563814: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x563814u;
    {
        const bool branch_taken_0x563814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563814) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x56381Cu;
    // 0x56381c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x56381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_563820:
    // 0x563820: 0x54650007  bnel        $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x563820u;
    {
        const bool branch_taken_0x563820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x563820) {
            ctx->pc = 0x563824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563820u;
            // 0x563824: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563840u;
            goto label_563840;
        }
    }
    ctx->pc = 0x563828u;
    // 0x563828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x56382c: 0xc158f88  jal         func_563E20
    ctx->pc = 0x56382Cu;
    SET_GPR_U32(ctx, 31, 0x563834u);
    ctx->pc = 0x563830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56382Cu;
            // 0x563830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563834u; }
        if (ctx->pc != 0x563834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563834u; }
        if (ctx->pc != 0x563834u) { return; }
    }
    ctx->pc = 0x563834u;
label_563834:
    // 0x563834: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x563834u;
    {
        const bool branch_taken_0x563834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563834) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x56383Cu;
    // 0x56383c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x56383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_563840:
    // 0x563840: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x563840u;
    {
        const bool branch_taken_0x563840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x563840) {
            ctx->pc = 0x563844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563840u;
            // 0x563844: 0x8cc2004c  lw          $v0, 0x4C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563A34u;
            goto label_563a34;
        }
    }
    ctx->pc = 0x563848u;
    // 0x563848: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x56384c: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x56384Cu;
    SET_GPR_U32(ctx, 31, 0x563854u);
    ctx->pc = 0x563850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56384Cu;
            // 0x563850: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563854u; }
        if (ctx->pc != 0x563854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563854u; }
        if (ctx->pc != 0x563854u) { return; }
    }
    ctx->pc = 0x563854u;
label_563854:
    // 0x563854: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x563854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x563858: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x563858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x56385c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x56385cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563864: 0x2484fa00  addiu       $a0, $a0, -0x600
    ctx->pc = 0x563864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965760));
    // 0x563868: 0x2810  mfhi        $a1
    ctx->pc = 0x563868u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_56386c:
    // 0x56386c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x56386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x563870: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x563870u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x563874: 0x5ca00004  bgtzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x563874u;
    {
        const bool branch_taken_0x563874 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x563874) {
            ctx->pc = 0x563878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563874u;
            // 0x563878: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563888u;
            goto label_563888;
        }
    }
    ctx->pc = 0x56387Cu;
    // 0x56387c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x56387Cu;
    {
        const bool branch_taken_0x56387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56387Cu;
            // 0x563880: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56387c) {
            ctx->pc = 0x56389Cu;
            goto label_56389c;
        }
    }
    ctx->pc = 0x563884u;
    // 0x563884: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x563884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_563888:
    // 0x563888: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x563888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x56388c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x56388Cu;
    {
        const bool branch_taken_0x56388c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x563890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56388Cu;
            // 0x563890: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56388c) {
            ctx->pc = 0x56386Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56386c;
        }
    }
    ctx->pc = 0x563894u;
    // 0x563894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563898: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x563898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_56389c:
    // 0x56389c: 0x50c3005f  beql        $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x56389Cu;
    {
        const bool branch_taken_0x56389c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x56389c) {
            ctx->pc = 0x5638A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56389Cu;
            // 0x5638a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563A1Cu;
            goto label_563a1c;
        }
    }
    ctx->pc = 0x5638A4u;
    // 0x5638a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5638a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5638a8: 0x50c50056  beql        $a2, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x5638A8u;
    {
        const bool branch_taken_0x5638a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x5638a8) {
            ctx->pc = 0x5638ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5638A8u;
            // 0x5638ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563A04u;
            goto label_563a04;
        }
    }
    ctx->pc = 0x5638B0u;
    // 0x5638b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5638b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5638b4: 0x50c3004d  beql        $a2, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x5638B4u;
    {
        const bool branch_taken_0x5638b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5638b4) {
            ctx->pc = 0x5638B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5638B4u;
            // 0x5638b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5639ECu;
            goto label_5639ec;
        }
    }
    ctx->pc = 0x5638BCu;
    // 0x5638bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5638bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5638c0: 0x50c30044  beql        $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x5638C0u;
    {
        const bool branch_taken_0x5638c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5638c0) {
            ctx->pc = 0x5638C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5638C0u;
            // 0x5638c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5639D4u;
            goto label_5639d4;
        }
    }
    ctx->pc = 0x5638C8u;
    // 0x5638c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x5638C8u;
    {
        const bool branch_taken_0x5638c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x5638c8) {
            ctx->pc = 0x5638D8u;
            goto label_5638d8;
        }
    }
    ctx->pc = 0x5638D0u;
    // 0x5638d0: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x5638D0u;
    {
        const bool branch_taken_0x5638d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5638d0) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5638D8u;
label_5638d8:
    // 0x5638d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5638d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x5638dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5638dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5638e0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5638e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x5638e4: 0x8c710780  lw          $s1, 0x780($v1)
    ctx->pc = 0x5638e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x5638e8: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x5638E8u;
    SET_GPR_U32(ctx, 31, 0x5638F0u);
    ctx->pc = 0x5638ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5638E8u;
            // 0x5638ec: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5638F0u; }
        if (ctx->pc != 0x5638F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5638F0u; }
        if (ctx->pc != 0x5638F0u) { return; }
    }
    ctx->pc = 0x5638F0u;
label_5638f0:
    // 0x5638f0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x5638f0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x5638f4: 0x3c033f4f  lui         $v1, 0x3F4F
    ctx->pc = 0x5638f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16207 << 16));
    // 0x5638f8: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x5638f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x5638fc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x5638fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x563900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563904: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x563904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x563908: 0x1810  mfhi        $v1
    ctx->pc = 0x563908u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x56390c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x56390cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563910: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x563910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x563914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x563914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x563918: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x563918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x56391c: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x56391cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    // 0x563920: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x563920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x563924: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x563924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x563928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x563928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56392c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x56392Cu;
    {
        const bool branch_taken_0x56392c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x56392c) {
            ctx->pc = 0x563974u;
            goto label_563974;
        }
    }
    ctx->pc = 0x563934u;
    // 0x563934: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563938: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x563938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
    // 0x56393c: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x56393Cu;
    {
        const bool branch_taken_0x56393c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x56393c) {
            ctx->pc = 0x563940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56393Cu;
            // 0x563940: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563954u;
            goto label_563954;
        }
    }
    ctx->pc = 0x563944u;
    // 0x563944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563948u;
    {
        const bool branch_taken_0x563948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563948u;
            // 0x56394c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563948) {
            ctx->pc = 0x56396Cu;
            goto label_56396c;
        }
    }
    ctx->pc = 0x563950u;
    // 0x563950: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563950u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563954:
    // 0x563954: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563958: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x56395c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x56395cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563960: 0x0  nop
    ctx->pc = 0x563960u;
    // NOP
    // 0x563964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563968: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_56396c:
    // 0x56396c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x56396Cu;
    {
        const bool branch_taken_0x56396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56396Cu;
            // 0x563970: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56396c) {
            ctx->pc = 0x5639B0u;
            goto label_5639b0;
        }
    }
    ctx->pc = 0x563974u;
label_563974:
    // 0x563974: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563978: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x563978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
    // 0x56397c: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x56397Cu;
    {
        const bool branch_taken_0x56397c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x56397c) {
            ctx->pc = 0x563980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56397Cu;
            // 0x563980: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563994u;
            goto label_563994;
        }
    }
    ctx->pc = 0x563984u;
    // 0x563984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563988u;
    {
        const bool branch_taken_0x563988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563988u;
            // 0x56398c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563988) {
            ctx->pc = 0x5639ACu;
            goto label_5639ac;
        }
    }
    ctx->pc = 0x563990u;
    // 0x563990: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563990u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563994:
    // 0x563994: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563998: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x56399c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x56399cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5639a0: 0x0  nop
    ctx->pc = 0x5639a0u;
    // NOP
    // 0x5639a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5639a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5639a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x5639a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_5639ac:
    // 0x5639ac: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x5639acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_5639b0:
    // 0x5639b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5639b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5639b4: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x5639b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x5639b8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x5639b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5639bc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x5639bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x5639c0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x5639c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x5639c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x5639c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x5639c8: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x5639C8u;
    {
        const bool branch_taken_0x5639c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5639CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5639C8u;
            // 0x5639cc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5639c8) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5639D0u;
    // 0x5639d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5639d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5639d4:
    // 0x5639d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5639d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5639d8: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5639D8u;
    SET_GPR_U32(ctx, 31, 0x5639E0u);
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5639E0u; }
        if (ctx->pc != 0x5639E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5639E0u; }
        if (ctx->pc != 0x5639E0u) { return; }
    }
    ctx->pc = 0x5639E0u;
label_5639e0:
    // 0x5639e0: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x5639E0u;
    {
        const bool branch_taken_0x5639e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5639e0) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x5639E8u;
    // 0x5639e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5639e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5639ec:
    // 0x5639ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5639ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5639f0: 0xc158f88  jal         func_563E20
    ctx->pc = 0x5639F0u;
    SET_GPR_U32(ctx, 31, 0x5639F8u);
    ctx->pc = 0x5639F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5639F0u;
            // 0x5639f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5639F8u; }
        if (ctx->pc != 0x5639F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5639F8u; }
        if (ctx->pc != 0x5639F8u) { return; }
    }
    ctx->pc = 0x5639F8u;
label_5639f8:
    // 0x5639f8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x5639F8u;
    {
        const bool branch_taken_0x5639f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5639f8) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563A00u;
    // 0x563a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563a04:
    // 0x563a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563a08: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563A08u;
    SET_GPR_U32(ctx, 31, 0x563A10u);
    ctx->pc = 0x563A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563A08u;
            // 0x563a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A10u; }
        if (ctx->pc != 0x563A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A10u; }
        if (ctx->pc != 0x563A10u) { return; }
    }
    ctx->pc = 0x563A10u;
label_563a10:
    // 0x563a10: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x563A10u;
    {
        const bool branch_taken_0x563a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563a10) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563A18u;
    // 0x563a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563a1c:
    // 0x563a1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563a20: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563A20u;
    SET_GPR_U32(ctx, 31, 0x563A28u);
    ctx->pc = 0x563A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563A20u;
            // 0x563a24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A28u; }
        if (ctx->pc != 0x563A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A28u; }
        if (ctx->pc != 0x563A28u) { return; }
    }
    ctx->pc = 0x563A28u;
label_563a28:
    // 0x563a28: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x563A28u;
    {
        const bool branch_taken_0x563a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563a28) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563A30u;
    // 0x563a30: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x563a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_563a34:
    // 0x563a34: 0x1840007b  blez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x563A34u;
    {
        const bool branch_taken_0x563a34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x563a34) {
            ctx->pc = 0x563C24u;
            goto label_563c24;
        }
    }
    ctx->pc = 0x563A3Cu;
    // 0x563a3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x563a40: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x563A40u;
    SET_GPR_U32(ctx, 31, 0x563A48u);
    ctx->pc = 0x563A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563A40u;
            // 0x563a44: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A48u; }
        if (ctx->pc != 0x563A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563A48u; }
        if (ctx->pc != 0x563A48u) { return; }
    }
    ctx->pc = 0x563A48u;
label_563a48:
    // 0x563a48: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x563a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x563a4c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x563a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x563a50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x563a50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563a58: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x563a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x563a5c: 0x2810  mfhi        $a1
    ctx->pc = 0x563a5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_563a60:
    // 0x563a60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x563a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x563a64: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x563a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x563a68: 0x5ca00004  bgtzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x563A68u;
    {
        const bool branch_taken_0x563a68 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x563a68) {
            ctx->pc = 0x563A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563A68u;
            // 0x563a6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563A7Cu;
            goto label_563a7c;
        }
    }
    ctx->pc = 0x563A70u;
    // 0x563a70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563A70u;
    {
        const bool branch_taken_0x563a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563A70u;
            // 0x563a74: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563a70) {
            ctx->pc = 0x563A90u;
            goto label_563a90;
        }
    }
    ctx->pc = 0x563A78u;
    // 0x563a78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x563a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_563a7c:
    // 0x563a7c: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x563a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x563a80: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x563A80u;
    {
        const bool branch_taken_0x563a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x563A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563A80u;
            // 0x563a84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563a80) {
            ctx->pc = 0x563A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_563a60;
        }
    }
    ctx->pc = 0x563A88u;
    // 0x563a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563a8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x563a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_563a90:
    // 0x563a90: 0x50c3005f  beql        $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x563A90u;
    {
        const bool branch_taken_0x563a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563a90) {
            ctx->pc = 0x563A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563A90u;
            // 0x563a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563C10u;
            goto label_563c10;
        }
    }
    ctx->pc = 0x563A98u;
    // 0x563a98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x563a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x563a9c: 0x50c50056  beql        $a2, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x563A9Cu;
    {
        const bool branch_taken_0x563a9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x563a9c) {
            ctx->pc = 0x563AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563A9Cu;
            // 0x563aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563BF8u;
            goto label_563bf8;
        }
    }
    ctx->pc = 0x563AA4u;
    // 0x563aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x563aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x563aa8: 0x50c3004d  beql        $a2, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x563AA8u;
    {
        const bool branch_taken_0x563aa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563aa8) {
            ctx->pc = 0x563AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563AA8u;
            // 0x563aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563BE0u;
            goto label_563be0;
        }
    }
    ctx->pc = 0x563AB0u;
    // 0x563ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x563ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563ab4: 0x50c30044  beql        $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x563AB4u;
    {
        const bool branch_taken_0x563ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563ab4) {
            ctx->pc = 0x563AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563AB4u;
            // 0x563ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563BC8u;
            goto label_563bc8;
        }
    }
    ctx->pc = 0x563ABCu;
    // 0x563abc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x563ABCu;
    {
        const bool branch_taken_0x563abc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x563abc) {
            ctx->pc = 0x563ACCu;
            goto label_563acc;
        }
    }
    ctx->pc = 0x563AC4u;
    // 0x563ac4: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x563AC4u;
    {
        const bool branch_taken_0x563ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563ac4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563ACCu;
label_563acc:
    // 0x563acc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x563accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x563ad0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x563ad4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x563ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x563ad8: 0x8c710780  lw          $s1, 0x780($v1)
    ctx->pc = 0x563ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x563adc: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x563ADCu;
    SET_GPR_U32(ctx, 31, 0x563AE4u);
    ctx->pc = 0x563AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563ADCu;
            // 0x563ae0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563AE4u; }
        if (ctx->pc != 0x563AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563AE4u; }
        if (ctx->pc != 0x563AE4u) { return; }
    }
    ctx->pc = 0x563AE4u;
label_563ae4:
    // 0x563ae4: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x563ae4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563ae8: 0x3c033f4f  lui         $v1, 0x3F4F
    ctx->pc = 0x563ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16207 << 16));
    // 0x563aec: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x563aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x563af0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x563af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x563af4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563af8: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x563af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x563afc: 0x1810  mfhi        $v1
    ctx->pc = 0x563afcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x563b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x563b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563b04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x563b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x563b08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x563b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x563b0c: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x563b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x563b10: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x563b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    // 0x563b14: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x563b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x563b18: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x563b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x563b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x563b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563b20: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x563B20u;
    {
        const bool branch_taken_0x563b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x563b20) {
            ctx->pc = 0x563B68u;
            goto label_563b68;
        }
    }
    ctx->pc = 0x563B28u;
    // 0x563b28: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563b2c: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x563b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
    // 0x563b30: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563B30u;
    {
        const bool branch_taken_0x563b30 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563b30) {
            ctx->pc = 0x563B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563B30u;
            // 0x563b34: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563B48u;
            goto label_563b48;
        }
    }
    ctx->pc = 0x563B38u;
    // 0x563b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563B3Cu;
    {
        const bool branch_taken_0x563b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563B3Cu;
            // 0x563b40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563b3c) {
            ctx->pc = 0x563B60u;
            goto label_563b60;
        }
    }
    ctx->pc = 0x563B44u;
    // 0x563b44: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563b48:
    // 0x563b48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563b4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563b54: 0x0  nop
    ctx->pc = 0x563b54u;
    // NOP
    // 0x563b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563b5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563b60:
    // 0x563b60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x563B60u;
    {
        const bool branch_taken_0x563b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563B60u;
            // 0x563b64: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563b60) {
            ctx->pc = 0x563BA4u;
            goto label_563ba4;
        }
    }
    ctx->pc = 0x563B68u;
label_563b68:
    // 0x563b68: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563b6c: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x563b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
    // 0x563b70: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563B70u;
    {
        const bool branch_taken_0x563b70 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563b70) {
            ctx->pc = 0x563B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563B70u;
            // 0x563b74: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563B88u;
            goto label_563b88;
        }
    }
    ctx->pc = 0x563B78u;
    // 0x563b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563b7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563B7Cu;
    {
        const bool branch_taken_0x563b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563B7Cu;
            // 0x563b80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563b7c) {
            ctx->pc = 0x563BA0u;
            goto label_563ba0;
        }
    }
    ctx->pc = 0x563B84u;
    // 0x563b84: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563b88:
    // 0x563b88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563b8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563b90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563b94: 0x0  nop
    ctx->pc = 0x563b94u;
    // NOP
    // 0x563b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563b9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563ba0:
    // 0x563ba0: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x563ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_563ba4:
    // 0x563ba4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x563ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x563ba8: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x563ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x563bac: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x563bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x563bb0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x563bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x563bb4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x563bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x563bb8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x563bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563bbc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x563BBCu;
    {
        const bool branch_taken_0x563bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563BBCu;
            // 0x563bc0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563bbc) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563BC4u;
    // 0x563bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563bc8:
    // 0x563bc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563bcc: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563BCCu;
    SET_GPR_U32(ctx, 31, 0x563BD4u);
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563BD4u; }
        if (ctx->pc != 0x563BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563BD4u; }
        if (ctx->pc != 0x563BD4u) { return; }
    }
    ctx->pc = 0x563BD4u;
label_563bd4:
    // 0x563bd4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x563BD4u;
    {
        const bool branch_taken_0x563bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563bd4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563BDCu;
    // 0x563bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563be0:
    // 0x563be0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563be4: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563BE4u;
    SET_GPR_U32(ctx, 31, 0x563BECu);
    ctx->pc = 0x563BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563BE4u;
            // 0x563be8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563BECu; }
        if (ctx->pc != 0x563BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563BECu; }
        if (ctx->pc != 0x563BECu) { return; }
    }
    ctx->pc = 0x563BECu;
label_563bec:
    // 0x563bec: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x563BECu;
    {
        const bool branch_taken_0x563bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563bec) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563BF4u;
    // 0x563bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563bf8:
    // 0x563bf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563bfc: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563BFCu;
    SET_GPR_U32(ctx, 31, 0x563C04u);
    ctx->pc = 0x563C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563BFCu;
            // 0x563c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C04u; }
        if (ctx->pc != 0x563C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C04u; }
        if (ctx->pc != 0x563C04u) { return; }
    }
    ctx->pc = 0x563C04u;
label_563c04:
    // 0x563c04: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x563C04u;
    {
        const bool branch_taken_0x563c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563c04) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563C0Cu;
    // 0x563c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563c10:
    // 0x563c10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563c14: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563C14u;
    SET_GPR_U32(ctx, 31, 0x563C1Cu);
    ctx->pc = 0x563C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563C14u;
            // 0x563c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C1Cu; }
        if (ctx->pc != 0x563C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C1Cu; }
        if (ctx->pc != 0x563C1Cu) { return; }
    }
    ctx->pc = 0x563C1Cu;
label_563c1c:
    // 0x563c1c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x563C1Cu;
    {
        const bool branch_taken_0x563c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563c1c) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563C24u;
label_563c24:
    // 0x563c24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x563c28: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x563C28u;
    SET_GPR_U32(ctx, 31, 0x563C30u);
    ctx->pc = 0x563C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563C28u;
            // 0x563c2c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C30u; }
        if (ctx->pc != 0x563C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563C30u; }
        if (ctx->pc != 0x563C30u) { return; }
    }
    ctx->pc = 0x563C30u;
label_563c30:
    // 0x563c30: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x563c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x563c34: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x563c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x563c38: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x563c38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563c40: 0x2484fa60  addiu       $a0, $a0, -0x5A0
    ctx->pc = 0x563c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
    // 0x563c44: 0x2810  mfhi        $a1
    ctx->pc = 0x563c44u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_563c48:
    // 0x563c48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x563c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x563c4c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x563c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x563c50: 0x5ca00004  bgtzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x563C50u;
    {
        const bool branch_taken_0x563c50 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x563c50) {
            ctx->pc = 0x563C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563C50u;
            // 0x563c54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563C64u;
            goto label_563c64;
        }
    }
    ctx->pc = 0x563C58u;
    // 0x563c58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x563C58u;
    {
        const bool branch_taken_0x563c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563C58u;
            // 0x563c5c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563c58) {
            ctx->pc = 0x563C78u;
            goto label_563c78;
        }
    }
    ctx->pc = 0x563C60u;
    // 0x563c60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x563c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_563c64:
    // 0x563c64: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x563c64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x563c68: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x563C68u;
    {
        const bool branch_taken_0x563c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x563C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563C68u;
            // 0x563c6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563c68) {
            ctx->pc = 0x563C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_563c48;
        }
    }
    ctx->pc = 0x563C70u;
    // 0x563c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x563c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563c74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x563c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_563c78:
    // 0x563c78: 0x50c3005f  beql        $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x563C78u;
    {
        const bool branch_taken_0x563c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563c78) {
            ctx->pc = 0x563C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563C78u;
            // 0x563c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563DF8u;
            goto label_563df8;
        }
    }
    ctx->pc = 0x563C80u;
    // 0x563c80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x563c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x563c84: 0x50c50056  beql        $a2, $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x563C84u;
    {
        const bool branch_taken_0x563c84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x563c84) {
            ctx->pc = 0x563C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563C84u;
            // 0x563c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563DE0u;
            goto label_563de0;
        }
    }
    ctx->pc = 0x563C8Cu;
    // 0x563c8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x563c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x563c90: 0x50c3004d  beql        $a2, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x563C90u;
    {
        const bool branch_taken_0x563c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563c90) {
            ctx->pc = 0x563C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563C90u;
            // 0x563c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563DC8u;
            goto label_563dc8;
        }
    }
    ctx->pc = 0x563C98u;
    // 0x563c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x563c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563c9c: 0x50c30044  beql        $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x563C9Cu;
    {
        const bool branch_taken_0x563c9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x563c9c) {
            ctx->pc = 0x563CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563C9Cu;
            // 0x563ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563DB0u;
            goto label_563db0;
        }
    }
    ctx->pc = 0x563CA4u;
    // 0x563ca4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x563CA4u;
    {
        const bool branch_taken_0x563ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x563ca4) {
            ctx->pc = 0x563CB4u;
            goto label_563cb4;
        }
    }
    ctx->pc = 0x563CACu;
    // 0x563cac: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x563CACu;
    {
        const bool branch_taken_0x563cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563cac) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563CB4u;
label_563cb4:
    // 0x563cb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x563cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x563cb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x563cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x563cbc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x563cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x563cc0: 0x8c710780  lw          $s1, 0x780($v1)
    ctx->pc = 0x563cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x563cc4: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x563CC4u;
    SET_GPR_U32(ctx, 31, 0x563CCCu);
    ctx->pc = 0x563CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563CC4u;
            // 0x563cc8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563CCCu; }
        if (ctx->pc != 0x563CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563CCCu; }
        if (ctx->pc != 0x563CCCu) { return; }
    }
    ctx->pc = 0x563CCCu;
label_563ccc:
    // 0x563ccc: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x563cccu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x563cd0: 0x3c033f4f  lui         $v1, 0x3F4F
    ctx->pc = 0x563cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16207 << 16));
    // 0x563cd4: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x563cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x563cd8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x563cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x563cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563ce0: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x563ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
    // 0x563ce4: 0x1810  mfhi        $v1
    ctx->pc = 0x563ce4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x563ce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x563ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563cec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x563cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x563cf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x563cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x563cf4: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x563cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x563cf8: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x563cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
    // 0x563cfc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x563cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x563d00: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x563d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x563d04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x563d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563d08: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x563D08u;
    {
        const bool branch_taken_0x563d08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x563d08) {
            ctx->pc = 0x563D50u;
            goto label_563d50;
        }
    }
    ctx->pc = 0x563D10u;
    // 0x563d10: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563d14: 0x8c638b18  lw          $v1, -0x74E8($v1)
    ctx->pc = 0x563d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937368)));
    // 0x563d18: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563D18u;
    {
        const bool branch_taken_0x563d18 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563d18) {
            ctx->pc = 0x563D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563D18u;
            // 0x563d1c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563D30u;
            goto label_563d30;
        }
    }
    ctx->pc = 0x563D20u;
    // 0x563d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563D24u;
    {
        const bool branch_taken_0x563d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563D24u;
            // 0x563d28: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563d24) {
            ctx->pc = 0x563D48u;
            goto label_563d48;
        }
    }
    ctx->pc = 0x563D2Cu;
    // 0x563d2c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563d30:
    // 0x563d30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563d34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563d3c: 0x0  nop
    ctx->pc = 0x563d3cu;
    // NOP
    // 0x563d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563d44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563d48:
    // 0x563d48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x563D48u;
    {
        const bool branch_taken_0x563d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563D48u;
            // 0x563d4c: 0xe6000190  swc1        $f0, 0x190($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563d48) {
            ctx->pc = 0x563D8Cu;
            goto label_563d8c;
        }
    }
    ctx->pc = 0x563D50u;
label_563d50:
    // 0x563d50: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x563d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x563d54: 0x8c638b20  lw          $v1, -0x74E0($v1)
    ctx->pc = 0x563d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937376)));
    // 0x563d58: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x563D58u;
    {
        const bool branch_taken_0x563d58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x563d58) {
            ctx->pc = 0x563D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563D58u;
            // 0x563d5c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563D70u;
            goto label_563d70;
        }
    }
    ctx->pc = 0x563D60u;
    // 0x563d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x563d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563d64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563D64u;
    {
        const bool branch_taken_0x563d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563D64u;
            // 0x563d68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563d64) {
            ctx->pc = 0x563D88u;
            goto label_563d88;
        }
    }
    ctx->pc = 0x563D6Cu;
    // 0x563d6c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x563d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_563d70:
    // 0x563d70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x563d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x563d74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x563d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563d78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x563d78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563d7c: 0x0  nop
    ctx->pc = 0x563d7cu;
    // NOP
    // 0x563d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x563d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x563d84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x563d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_563d88:
    // 0x563d88: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x563d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_563d8c:
    // 0x563d8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x563d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x563d90: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x563d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x563d94: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x563d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x563d98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x563d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x563d9c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x563d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x563da0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x563da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x563da4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x563DA4u;
    {
        const bool branch_taken_0x563da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563DA4u;
            // 0x563da8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563da4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563DACu;
    // 0x563dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563db0:
    // 0x563db0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563db4: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563DB4u;
    SET_GPR_U32(ctx, 31, 0x563DBCu);
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DBCu; }
        if (ctx->pc != 0x563DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DBCu; }
        if (ctx->pc != 0x563DBCu) { return; }
    }
    ctx->pc = 0x563DBCu;
label_563dbc:
    // 0x563dbc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x563DBCu;
    {
        const bool branch_taken_0x563dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563dbc) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563DC4u;
    // 0x563dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563dc8:
    // 0x563dc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563dcc: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563DCCu;
    SET_GPR_U32(ctx, 31, 0x563DD4u);
    ctx->pc = 0x563DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563DCCu;
            // 0x563dd0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DD4u; }
        if (ctx->pc != 0x563DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DD4u; }
        if (ctx->pc != 0x563DD4u) { return; }
    }
    ctx->pc = 0x563DD4u;
label_563dd4:
    // 0x563dd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x563DD4u;
    {
        const bool branch_taken_0x563dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563dd4) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563DDCu;
    // 0x563ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563de0:
    // 0x563de0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563de4: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563DE4u;
    SET_GPR_U32(ctx, 31, 0x563DECu);
    ctx->pc = 0x563DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563DE4u;
            // 0x563de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DECu; }
        if (ctx->pc != 0x563DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563DECu; }
        if (ctx->pc != 0x563DECu) { return; }
    }
    ctx->pc = 0x563DECu;
label_563dec:
    // 0x563dec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x563DECu;
    {
        const bool branch_taken_0x563dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x563dec) {
            ctx->pc = 0x563E04u;
            goto label_563e04;
        }
    }
    ctx->pc = 0x563DF4u;
    // 0x563df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x563df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_563df8:
    // 0x563df8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x563df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x563dfc: 0xc158f88  jal         func_563E20
    ctx->pc = 0x563DFCu;
    SET_GPR_U32(ctx, 31, 0x563E04u);
    ctx->pc = 0x563E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563DFCu;
            // 0x563e00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563E20u;
    if (runtime->hasFunction(0x563E20u)) {
        auto targetFn = runtime->lookupFunction(0x563E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563E04u; }
        if (ctx->pc != 0x563E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563E20_0x563e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563E04u; }
        if (ctx->pc != 0x563E04u) { return; }
    }
    ctx->pc = 0x563E04u;
label_563e04:
    // 0x563e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x563e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_563e08:
    // 0x563e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x563e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x563e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x563e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x563e10: 0x3e00008  jr          $ra
    ctx->pc = 0x563E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x563E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E10u;
            // 0x563e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x563E18u;
    // 0x563e18: 0x0  nop
    ctx->pc = 0x563e18u;
    // NOP
    // 0x563e1c: 0x0  nop
    ctx->pc = 0x563e1cu;
    // NOP
}
