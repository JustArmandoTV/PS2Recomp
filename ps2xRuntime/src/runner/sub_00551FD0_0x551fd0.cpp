#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00551FD0
// Address: 0x551fd0 - 0x552180
void sub_00551FD0_0x551fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00551FD0_0x551fd0");
#endif

    switch (ctx->pc) {
        case 0x55202cu: goto label_55202c;
        case 0x552098u: goto label_552098;
        case 0x5520b4u: goto label_5520b4;
        case 0x5520f4u: goto label_5520f4;
        case 0x552110u: goto label_552110;
        case 0x55212cu: goto label_55212c;
        case 0x552148u: goto label_552148;
        case 0x552164u: goto label_552164;
        default: break;
    }

    ctx->pc = 0x551fd0u;

    // 0x551fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x551fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x551fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x551fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x551fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x551fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x551fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x551fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x551fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x551fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x551fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x551fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x551fe8: 0x90830081  lbu         $v1, 0x81($a0)
    ctx->pc = 0x551fe8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 129)));
    // 0x551fec: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x551FECu;
    {
        const bool branch_taken_0x551fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x551FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x551FECu;
            // 0x551ff0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x551fec) {
            ctx->pc = 0x552164u;
            goto label_552164;
        }
    }
    ctx->pc = 0x551FF4u;
    // 0x551ff4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x551ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x551ff8: 0x8e720078  lw          $s2, 0x78($s3)
    ctx->pc = 0x551ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x551ffc: 0x8c430ec8  lw          $v1, 0xEC8($v0)
    ctx->pc = 0x551ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x552000: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x552000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x552004: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x552004u;
    {
        const bool branch_taken_0x552004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x552008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552004u;
            // 0x552008: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552004) {
            ctx->pc = 0x552010u;
            goto label_552010;
        }
    }
    ctx->pc = 0x55200Cu;
    // 0x55200c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x55200cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_552010:
    // 0x552010: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x552010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x552014: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x552014u;
    {
        const bool branch_taken_0x552014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x552014) {
            ctx->pc = 0x552018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552014u;
            // 0x552018: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552024u;
            goto label_552024;
        }
    }
    ctx->pc = 0x55201Cu;
    // 0x55201c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x55201cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x552020: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x552020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_552024:
    // 0x552024: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x552024u;
    SET_GPR_U32(ctx, 31, 0x55202Cu);
    ctx->pc = 0x552028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552024u;
            // 0x552028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55202Cu; }
        if (ctx->pc != 0x55202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55202Cu; }
        if (ctx->pc != 0x55202Cu) { return; }
    }
    ctx->pc = 0x55202Cu;
label_55202c:
    // 0x55202c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x55202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x552030: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x552030u;
    {
        const bool branch_taken_0x552030 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x552034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552030u;
            // 0x552034: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x552030) {
            ctx->pc = 0x552054u;
            goto label_552054;
        }
    }
    ctx->pc = 0x552038u;
    // 0x552038: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x552038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x55203c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x55203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x552040: 0x8063008e  lb          $v1, 0x8E($v1)
    ctx->pc = 0x552040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
    // 0x552044: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x552044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x552048: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x552048u;
    {
        const bool branch_taken_0x552048 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x552048) {
            ctx->pc = 0x552054u;
            goto label_552054;
        }
    }
    ctx->pc = 0x552050u;
    // 0x552050: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x552050u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_552054:
    // 0x552054: 0x50800044  beql        $a0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x552054u;
    {
        const bool branch_taken_0x552054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x552054) {
            ctx->pc = 0x552058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552054u;
            // 0x552058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552168u;
            goto label_552168;
        }
    }
    ctx->pc = 0x55205Cu;
    // 0x55205c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x552060: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x552060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x552064: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x552064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x552068: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x552068u;
    {
        const bool branch_taken_0x552068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x55206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552068u;
            // 0x55206c: 0x2411003c  addiu       $s1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552068) {
            ctx->pc = 0x552074u;
            goto label_552074;
        }
    }
    ctx->pc = 0x552070u;
    // 0x552070: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x552070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_552074:
    // 0x552074: 0x92630082  lbu         $v1, 0x82($s3)
    ctx->pc = 0x552074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 130)));
    // 0x552078: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x552078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x55207c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x552080: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x552080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x552084: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x552084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x552088: 0x2407016d  addiu       $a3, $zero, 0x16D
    ctx->pc = 0x552088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x55208c: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x55208cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x552090: 0xc155094  jal         func_554250
    ctx->pc = 0x552090u;
    SET_GPR_U32(ctx, 31, 0x552098u);
    ctx->pc = 0x552094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552090u;
            // 0x552094: 0x24080122  addiu       $t0, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x554250u;
    if (runtime->hasFunction(0x554250u)) {
        auto targetFn = runtime->lookupFunction(0x554250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552098u; }
        if (ctx->pc != 0x552098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00554250_0x554250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552098u; }
        if (ctx->pc != 0x552098u) { return; }
    }
    ctx->pc = 0x552098u;
label_552098:
    // 0x552098: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552098u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55209c: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x55209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x5520a0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5520a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x5520a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5520a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5520a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5520a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5520ac: 0xc154fac  jal         func_553EB0
    ctx->pc = 0x5520ACu;
    SET_GPR_U32(ctx, 31, 0x5520B4u);
    ctx->pc = 0x5520B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5520ACu;
            // 0x5520b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x553EB0u;
    if (runtime->hasFunction(0x553EB0u)) {
        auto targetFn = runtime->lookupFunction(0x553EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5520B4u; }
        if (ctx->pc != 0x5520B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00553EB0_0x553eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5520B4u; }
        if (ctx->pc != 0x5520B4u) { return; }
    }
    ctx->pc = 0x5520B4u;
label_5520b4:
    // 0x5520b4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x5520b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x5520b8: 0x12430006  beq         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5520B8u;
    {
        const bool branch_taken_0x5520b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x5520BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5520B8u;
            // 0x5520bc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5520b8) {
            ctx->pc = 0x5520D4u;
            goto label_5520d4;
        }
    }
    ctx->pc = 0x5520C0u;
    // 0x5520c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x5520c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x5520c4: 0x52420004  beql        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5520C4u;
    {
        const bool branch_taken_0x5520c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x5520c4) {
            ctx->pc = 0x5520C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5520C4u;
            // 0x5520c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5520D8u;
            goto label_5520d8;
        }
    }
    ctx->pc = 0x5520CCu;
    // 0x5520cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5520CCu;
    {
        const bool branch_taken_0x5520cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5520cc) {
            ctx->pc = 0x5520D8u;
            goto label_5520d8;
        }
    }
    ctx->pc = 0x5520D4u;
label_5520d4:
    // 0x5520d4: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x5520d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_5520d8:
    // 0x5520d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5520d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5520dc: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x5520dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x5520e0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5520e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x5520e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5520e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5520e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5520e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5520ec: 0xc154e40  jal         func_553900
    ctx->pc = 0x5520ECu;
    SET_GPR_U32(ctx, 31, 0x5520F4u);
    ctx->pc = 0x5520F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5520ECu;
            // 0x5520f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x553900u;
    if (runtime->hasFunction(0x553900u)) {
        auto targetFn = runtime->lookupFunction(0x553900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5520F4u; }
        if (ctx->pc != 0x5520F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00553900_0x553900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5520F4u; }
        if (ctx->pc != 0x5520F4u) { return; }
    }
    ctx->pc = 0x5520F4u;
label_5520f4:
    // 0x5520f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5520f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5520f8: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x5520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x5520fc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5520fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x552100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x552100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x552104: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x552104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x552108: 0xc154d44  jal         func_553510
    ctx->pc = 0x552108u;
    SET_GPR_U32(ctx, 31, 0x552110u);
    ctx->pc = 0x55210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552108u;
            // 0x55210c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x553510u;
    if (runtime->hasFunction(0x553510u)) {
        auto targetFn = runtime->lookupFunction(0x553510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552110u; }
        if (ctx->pc != 0x552110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00553510_0x553510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552110u; }
        if (ctx->pc != 0x552110u) { return; }
    }
    ctx->pc = 0x552110u;
label_552110:
    // 0x552110: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552110u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x552114: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x552114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x552118: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x552118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x55211c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x552120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x552120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x552124: 0xc154ba4  jal         func_552E90
    ctx->pc = 0x552124u;
    SET_GPR_U32(ctx, 31, 0x55212Cu);
    ctx->pc = 0x552128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552124u;
            // 0x552128: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x552E90u;
    if (runtime->hasFunction(0x552E90u)) {
        auto targetFn = runtime->lookupFunction(0x552E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55212Cu; }
        if (ctx->pc != 0x55212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00552E90_0x552e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55212Cu; }
        if (ctx->pc != 0x55212Cu) { return; }
    }
    ctx->pc = 0x55212Cu;
label_55212c:
    // 0x55212c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55212cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x552130: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x552130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x552134: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x552134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x552138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x552138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55213c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x552140: 0xc1549d8  jal         func_552760
    ctx->pc = 0x552140u;
    SET_GPR_U32(ctx, 31, 0x552148u);
    ctx->pc = 0x552144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552140u;
            // 0x552144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x552760u;
    if (runtime->hasFunction(0x552760u)) {
        auto targetFn = runtime->lookupFunction(0x552760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552148u; }
        if (ctx->pc != 0x552148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00552760_0x552760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552148u; }
        if (ctx->pc != 0x552148u) { return; }
    }
    ctx->pc = 0x552148u;
label_552148:
    // 0x552148: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x552148u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55214c: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x55214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x552150: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x552150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x552154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x552154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x552158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x552158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55215c: 0xc154860  jal         func_552180
    ctx->pc = 0x55215Cu;
    SET_GPR_U32(ctx, 31, 0x552164u);
    ctx->pc = 0x552160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55215Cu;
            // 0x552160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x552180u;
    if (runtime->hasFunction(0x552180u)) {
        auto targetFn = runtime->lookupFunction(0x552180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552164u; }
        if (ctx->pc != 0x552164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00552180_0x552180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552164u; }
        if (ctx->pc != 0x552164u) { return; }
    }
    ctx->pc = 0x552164u;
label_552164:
    // 0x552164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x552164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_552168:
    // 0x552168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x552168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55216c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55216cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x552170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x552170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x552174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x552174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x552178: 0x3e00008  jr          $ra
    ctx->pc = 0x552178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552178u;
            // 0x55217c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x552180u;
}
