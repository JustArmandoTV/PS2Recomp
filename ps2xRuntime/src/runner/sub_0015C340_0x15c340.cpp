#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C340
// Address: 0x15c340 - 0x15c690
void sub_0015C340_0x15c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C340_0x15c340");
#endif

    switch (ctx->pc) {
        case 0x15c508u: goto label_15c508;
        case 0x15c530u: goto label_15c530;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c61cu: goto label_15c61c;
        default: break;
    }

    ctx->pc = 0x15c340u;

    // 0x15c340: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15c344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15c34c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15c350: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15c354: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15c358: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c35c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x15c35cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c364: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15c364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c36c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x15c36cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c374: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x15c374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c37c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x15c37cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c384: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c388: 0x14910009  bne         $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C388u;
    {
        const bool branch_taken_0x15c388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x15C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C388u;
            // 0x15c38c: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c388) {
            ctx->pc = 0x15C3B0u;
            goto label_15c3b0;
        }
    }
    ctx->pc = 0x15C390u;
    // 0x15c390: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x15c394: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x15c398: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15c398u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15c39c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x15c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x15c3a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x15c3a4: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x15c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x15c3a8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15c3a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15c3ac: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x15c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_15c3b0:
    // 0x15c3b0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15c3b4: 0x52a30027  beql        $s5, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x15C3B4u;
    {
        const bool branch_taken_0x15c3b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3b4) {
            ctx->pc = 0x15C3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3B4u;
            // 0x15c3b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C3BCu;
    // 0x15c3bc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x15c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x15c3c0: 0x12a30023  beq         $s5, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15C3C0u;
    {
        const bool branch_taken_0x15c3c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3c0) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C3C8u;
    // 0x15c3c8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x15c3cc: 0x12a30020  beq         $s5, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x15C3CCu;
    {
        const bool branch_taken_0x15c3cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3cc) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C3D4u;
    // 0x15c3d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x15c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x15c3d8: 0x12a3001d  beq         $s5, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15C3D8u;
    {
        const bool branch_taken_0x15c3d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3d8) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C3E0u;
    // 0x15c3e0: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x15C3E0u;
    {
        const bool branch_taken_0x15c3e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3e0) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C3E8u;
    // 0x15c3e8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x15c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15c3ec: 0x12a30018  beq         $s5, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15C3ECu;
    {
        const bool branch_taken_0x15c3ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3ec) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C3F4u;
    // 0x15c3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c3f8: 0x12a30015  beq         $s5, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15C3F8u;
    {
        const bool branch_taken_0x15c3f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c3f8) {
            ctx->pc = 0x15C450u;
            goto label_15c450;
        }
    }
    ctx->pc = 0x15C400u;
    // 0x15c400: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x15c404: 0x52a30013  beql        $s5, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C404u;
    {
        const bool branch_taken_0x15c404 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c404) {
            ctx->pc = 0x15C408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C404u;
            // 0x15c408: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C40Cu;
    // 0x15c40c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x15c410: 0x12a3000c  beq         $s5, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15C410u;
    {
        const bool branch_taken_0x15c410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c410) {
            ctx->pc = 0x15C444u;
            goto label_15c444;
        }
    }
    ctx->pc = 0x15C418u;
    // 0x15c418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c41c: 0x12a30009  beq         $s5, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C41Cu;
    {
        const bool branch_taken_0x15c41c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c41c) {
            ctx->pc = 0x15C444u;
            goto label_15c444;
        }
    }
    ctx->pc = 0x15C424u;
    // 0x15c424: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15c428: 0x52a3000a  beql        $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15C428u;
    {
        const bool branch_taken_0x15c428 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c428) {
            ctx->pc = 0x15C42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C428u;
            // 0x15c42c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C430u;
    // 0x15c430: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15c434: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C434u;
    {
        const bool branch_taken_0x15c434 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c434) {
            ctx->pc = 0x15C438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C434u;
            // 0x15c438: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C43Cu;
    // 0x15c43c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15C43Cu;
    {
        const bool branch_taken_0x15c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c43c) {
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C444u;
label_15c444:
    // 0x15c444: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15c448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C448u;
    {
        const bool branch_taken_0x15c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c448) {
            ctx->pc = 0x15C454u;
            goto label_15c454;
        }
    }
    ctx->pc = 0x15C450u;
label_15c450:
    // 0x15c450: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15c454:
    // 0x15c454: 0x2d42018  mult        $a0, $s6, $s4
    ctx->pc = 0x15c454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15c458: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x15c458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x15c45c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15c460: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15c460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x15c464: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x15c464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15c468: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x15c468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x15c46c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x15c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x15c470: 0x83f024  and         $fp, $a0, $v1
    ctx->pc = 0x15c470u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15c474: 0x3c1082b  sltu        $at, $fp, $at
    ctx->pc = 0x15c474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x15c478: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C478u;
    {
        const bool branch_taken_0x15c478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C478u;
            // 0x15c47c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c478) {
            ctx->pc = 0x15C4C8u;
            goto label_15c4c8;
        }
    }
    ctx->pc = 0x15C480u;
    // 0x15c480: 0x152040  sll         $a0, $s5, 1
    ctx->pc = 0x15c480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x15c484: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x15c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x15c488: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x15c48c: 0x24634e90  addiu       $v1, $v1, 0x4E90
    ctx->pc = 0x15c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20112));
    // 0x15c490: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x15c490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c498: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x15c498u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15c49c: 0x284001b  divu        $zero, $s4, $a0
    ctx->pc = 0x15c49cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
    // 0x15c4a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15c4a4: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x15c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x15c4a8: 0xb812  mflo        $s7
    ctx->pc = 0x15c4a8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x15c4ac: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4ACu;
    {
        const bool branch_taken_0x15c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c4ac) {
            ctx->pc = 0x15C4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4ACu;
            // 0x15c4b0: 0x2c41818  mult        $v1, $s6, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C4BCu;
            goto label_15c4bc;
        }
    }
    ctx->pc = 0x15C4B4u;
    // 0x15c4b4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15c4b8: 0x2c41818  mult        $v1, $s6, $a0
    ctx->pc = 0x15c4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c4bc:
    // 0x15c4bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4c0: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x15c4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c4c4: 0x3f0c2  srl         $fp, $v1, 3
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_15c4c8:
    // 0x15c4c8: 0x2d42018  mult        $a0, $s6, $s4
    ctx->pc = 0x15c4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15c4cc: 0x26c3003f  addiu       $v1, $s6, 0x3F
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 63));
    // 0x15c4d0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x15c4d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4d8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x15c4dc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15c4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c4e0: 0x12e00031  beqz        $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x15C4E0u;
    {
        const bool branch_taken_0x15c4e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4E0u;
            // 0x15c4e4: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4e0) {
            ctx->pc = 0x15C5A8u;
            goto label_15c5a8;
        }
    }
    ctx->pc = 0x15C4E8u;
    // 0x15c4e8: 0x244300ff  addiu       $v1, $v0, 0xFF
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x15c4ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x15c4f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c4f4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x15c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x15c4f8: 0x27c3000f  addiu       $v1, $fp, 0xF
    ctx->pc = 0x15c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
    // 0x15c4fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15c500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c504: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_15c508:
    // 0x15c508: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15c50c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x15c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15c510: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15c514: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c518: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15c518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c51c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x15c51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c520: 0x505821  addu        $t3, $v0, $s0
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15c524: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x15c524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c528: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15C528u;
    SET_GPR_U32(ctx, 31, 0x15C530u);
    ctx->pc = 0x15C52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C528u;
            // 0x15c52c: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    if (runtime->hasFunction(0x15BF80u)) {
        auto targetFn = runtime->lookupFunction(0x15BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C530u; }
        if (ctx->pc != 0x15C530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BF80_0x15bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C530u; }
        if (ctx->pc != 0x15C530u) { return; }
    }
    ctx->pc = 0x15C530u;
label_15c530:
    // 0x15c530: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x15c530u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15c534: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15c534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c538: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x15c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15c53c: 0x3c075100  lui         $a3, 0x5100
    ctx->pc = 0x15c53cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20736 << 16));
    // 0x15c540: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x15c544: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15c548: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x15c548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x15c54c: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x15c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x15c550: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x15c554: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c558: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x15c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15c55c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x15c560: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x15c560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x15c564: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15c564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15c568: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x15c568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15c56c: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x15c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x15c570: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15c574: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x15c574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15c578: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x15c578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x15c57c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x15c57cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c580: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15c584: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x15c584u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x15c588: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15c58c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x15c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x15c590: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x15c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x15c594: 0xacb20014  sw          $s2, 0x14($a1)
    ctx->pc = 0x15c594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 18));
    // 0x15c598: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x15c598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x15c59c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x15c59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c5a0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x15C5A0u;
    {
        const bool branch_taken_0x15c5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5A0u;
            // 0x15c5a4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a0) {
            ctx->pc = 0x15C508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c508;
        }
    }
    ctx->pc = 0x15C5A8u;
label_15c5a8:
    // 0x15c5a8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x15c5ac: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15c5acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15c5b0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x15c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x15c5b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15c5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c5b8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15c5bc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x15c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x15c5c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15c5c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15c5c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15c5c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c5c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c5cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c5ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c5d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c5d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c5d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c5d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c5d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c5dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5E8u;
            // 0x15c5ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C5F0u;
label_15c5f0:
    // 0x15c5f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c5f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c5f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c5fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15c608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c60c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c614: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x15C614u;
    SET_GPR_U32(ctx, 31, 0x15C61Cu);
    ctx->pc = 0x15C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C614u;
            // 0x15c618: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C61Cu; }
        if (ctx->pc != 0x15C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C61Cu; }
        if (ctx->pc != 0x15C61Cu) { return; }
    }
    ctx->pc = 0x15C61Cu;
label_15c61c:
    // 0x15c61c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15c620: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x15c624: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x15c624u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c628: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x15c628u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c62c: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x15c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x15c630: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x15c630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c634: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15c638: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x15c638u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c63c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15c640: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x15c640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x15c644: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x15c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x15c648: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x15c648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x15c64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c650: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x15c650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x15c654: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15c654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c658: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x15c658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x15c65c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x15c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x15c660: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15c664: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x15c664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x15c668: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x15c668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x15c66c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x15c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x15c670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c680: 0x3e00008  jr          $ra
    ctx->pc = 0x15C680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C680u;
            // 0x15c684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C688u;
    // 0x15c688: 0x0  nop
    ctx->pc = 0x15c688u;
    // NOP
    // 0x15c68c: 0x0  nop
    ctx->pc = 0x15c68cu;
    // NOP
}
