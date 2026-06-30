#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E380
// Address: 0x26e380 - 0x26e4d0
void sub_0026E380_0x26e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E380_0x26e380");
#endif

    switch (ctx->pc) {
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e428u: goto label_26e428;
        case 0x26e470u: goto label_26e470;
        case 0x26e4b8u: goto label_26e4b8;
        default: break;
    }

    ctx->pc = 0x26e380u;

    // 0x26e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e394: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x26e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e398: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26e398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e39c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26e3a0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e3a4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e3a8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e3ac: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e3b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e3b4: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e3b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e3c0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e3c4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e3c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e3cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e3d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E3D0u;
    {
        const bool branch_taken_0x26e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e3d0) {
            ctx->pc = 0x26E3E0u;
            goto label_26e3e0;
        }
    }
    ctx->pc = 0x26E3D8u;
    // 0x26e3d8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E3D8u;
    SET_GPR_U32(ctx, 31, 0x26E3E0u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E3E0u; }
        if (ctx->pc != 0x26E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E3E0u; }
        if (ctx->pc != 0x26E3E0u) { return; }
    }
    ctx->pc = 0x26E3E0u;
label_26e3e0:
    // 0x26e3e0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26e3e4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e3e8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e3ec: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e3f0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e3f4: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e3f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e3fc: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e400: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e408: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e40c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e410: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e414: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e418: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E418u;
    {
        const bool branch_taken_0x26e418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e418) {
            ctx->pc = 0x26E428u;
            goto label_26e428;
        }
    }
    ctx->pc = 0x26E420u;
    // 0x26e420: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E420u;
    SET_GPR_U32(ctx, 31, 0x26E428u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E428u; }
        if (ctx->pc != 0x26E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E428u; }
        if (ctx->pc != 0x26E428u) { return; }
    }
    ctx->pc = 0x26E428u;
label_26e428:
    // 0x26e428: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26e42c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x26e42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e430: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e434: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e438: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e43c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e440: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e444: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e448: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e44c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e450: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e454: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e458: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e45c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e45cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e460: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E460u;
    {
        const bool branch_taken_0x26e460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e460) {
            ctx->pc = 0x26E470u;
            goto label_26e470;
        }
    }
    ctx->pc = 0x26E468u;
    // 0x26e468: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E468u;
    SET_GPR_U32(ctx, 31, 0x26E470u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E470u; }
        if (ctx->pc != 0x26E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E470u; }
        if (ctx->pc != 0x26E470u) { return; }
    }
    ctx->pc = 0x26E470u;
label_26e470:
    // 0x26e470: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x26e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26e474: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x26e474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26e478: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e47c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e480: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e484: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e484u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e488: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x26e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e48c: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e48cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e490: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e494: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e498: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e49c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e4a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e4a4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e4a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E4A8u;
    {
        const bool branch_taken_0x26e4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4a8) {
            ctx->pc = 0x26E4B8u;
            goto label_26e4b8;
        }
    }
    ctx->pc = 0x26E4B0u;
    // 0x26e4b0: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E4B0u;
    SET_GPR_U32(ctx, 31, 0x26E4B8u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4B8u; }
        if (ctx->pc != 0x26E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4B8u; }
        if (ctx->pc != 0x26E4B8u) { return; }
    }
    ctx->pc = 0x26E4B8u;
label_26e4b8:
    // 0x26e4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x26E4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4C4u;
            // 0x26e4c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E4CCu;
    // 0x26e4cc: 0x0  nop
    ctx->pc = 0x26e4ccu;
    // NOP
}
