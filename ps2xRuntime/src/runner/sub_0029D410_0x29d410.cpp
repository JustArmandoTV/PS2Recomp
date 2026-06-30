#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D410
// Address: 0x29d410 - 0x29d610
void sub_0029D410_0x29d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D410_0x29d410");
#endif

    switch (ctx->pc) {
        case 0x29d46cu: goto label_29d46c;
        case 0x29d4e0u: goto label_29d4e0;
        default: break;
    }

    ctx->pc = 0x29d410u;

    // 0x29d410: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x29d410u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29d414: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x29d414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d418: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x29d418u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x29d41c: 0xc183c  dsll32      $v1, $t4, 0
    ctx->pc = 0x29d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x29d420: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29d420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29d424: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x29d424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29d428: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x29d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d42c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29d430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d434: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29d438: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x29d438u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x29d43c: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x29d43cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d440: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29d440u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d444: 0x16c182d  daddu       $v1, $t3, $t4
    ctx->pc = 0x29d444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 12));
    // 0x29d448: 0x1632824  and         $a1, $t3, $v1
    ctx->pc = 0x29d448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x29d44c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29d450: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29d450u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29d454: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29d454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29d458: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29d45c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29d45cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d460: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29D460u;
    {
        const bool branch_taken_0x29d460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d460) {
            ctx->pc = 0x29D490u;
            goto label_29d490;
        }
    }
    ctx->pc = 0x29D468u;
    // 0x29d468: 0x165182d  daddu       $v1, $t3, $a1
    ctx->pc = 0x29d468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 5));
label_29d46c:
    // 0x29d46c: 0x1632824  and         $a1, $t3, $v1
    ctx->pc = 0x29d46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x29d470: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x29d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29d474: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29d474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29d478: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x29d478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29d47c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29d480: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29d480u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d484: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D484u;
    {
        const bool branch_taken_0x29d484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d484) {
            ctx->pc = 0x29D488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D484u;
            // 0x29d488: 0x165182d  daddu       $v1, $t3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d46c;
        }
    }
    ctx->pc = 0x29D48Cu;
    // 0x29d48c: 0x0  nop
    ctx->pc = 0x29d48cu;
    // NOP
label_29d490:
    // 0x29d490: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x29d490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x29d494: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x29d494u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x29d498: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x29d498u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x29d49c: 0x65830001  daddiu      $v1, $t4, 0x1
    ctx->pc = 0x29d49cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x29d4a0: 0xa73024  and         $a2, $a1, $a3
    ctx->pc = 0x29d4a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x29d4a4: 0x673824  and         $a3, $v1, $a3
    ctx->pc = 0x29d4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x29d4a8: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x29d4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29d4ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29d4acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29d4b0: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x29d4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29d4b4: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29d4b8: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x29d4b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d4bc: 0x11400050  beqz        $t2, . + 4 + (0x50 << 2)
    ctx->pc = 0x29D4BCu;
    {
        const bool branch_taken_0x29d4bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4bc) {
            ctx->pc = 0x29D600u;
            goto label_29d600;
        }
    }
    ctx->pc = 0x29D4C4u;
    // 0x29d4c4: 0x34039e37  ori         $v1, $zero, 0x9E37
    ctx->pc = 0x29d4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40503);
    // 0x29d4c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29d4cc: 0x346379b1  ori         $v1, $v1, 0x79B1
    ctx->pc = 0x29d4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31153);
    // 0x29d4d0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x29d4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29d4d4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x29d4d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29d4d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29d4d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29d4dc: 0xa713a  dsrl        $t6, $t2, 4
    ctx->pc = 0x29d4dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 4);
label_29d4e0:
    // 0x29d4e0: 0xe6682b  sltu        $t5, $a3, $a2
    ctx->pc = 0x29d4e0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29d4e4: 0xe783c  dsll32      $t7, $t6, 0
    ctx->pc = 0x29d4e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << (32 + 0));
    // 0x29d4e8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x29d4e8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x29d4ec: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x29d4ecu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x29d4f0: 0x1e5c819  .word       0x01E5C819                   # multu       $t7, $a1 # 0000C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x29d4f4: 0xc010  mfhi        $t8
    ctx->pc = 0x29d4f4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x29d4f8: 0x706f7818  mult1       $t7, $v1, $t7
    ctx->pc = 0x29d4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x29d4fc: 0xae7018  mult        $t6, $a1, $t6
    ctx->pc = 0x29d4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x29d500: 0x7319c488  pextlw      $t8, $t8, $t9
    ctx->pc = 0x29d500u;
    SET_GPR_VEC(ctx, 24, PS2_PEXTLW(GPR_VEC(ctx, 24), GPR_VEC(ctx, 25)));
    // 0x29d504: 0x1ee702d  daddu       $t6, $t7, $t6
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x29d508: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x29d508u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x29d50c: 0x1d8702d  daddu       $t6, $t6, $t8
    ctx->pc = 0x29d50cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 24));
    // 0x29d510: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D510u;
    {
        const bool branch_taken_0x29d510 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D510u;
            // 0x29d514: 0x16e5824  and         $t3, $t3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d510) {
            ctx->pc = 0x29D528u;
            goto label_29d528;
        }
    }
    ctx->pc = 0x29D518u;
    // 0x29d518: 0x18b082b  sltu        $at, $t4, $t3
    ctx->pc = 0x29d518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x29d51c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x29D51Cu;
    {
        const bool branch_taken_0x29d51c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d51c) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D524u;
    // 0x29d524: 0x0  nop
    ctx->pc = 0x29d524u;
    // NOP
label_29d528:
    // 0x29d528: 0xec082b  sltu        $at, $a3, $t4
    ctx->pc = 0x29d528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x29d52c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D52Cu;
    {
        const bool branch_taken_0x29d52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d52c) {
            ctx->pc = 0x29D550u;
            goto label_29d550;
        }
    }
    ctx->pc = 0x29D534u;
    // 0x29d534: 0x18b082b  sltu        $at, $t4, $t3
    ctx->pc = 0x29d534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x29d538: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x29D538u;
    {
        const bool branch_taken_0x29d538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d538) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D540u;
    // 0x29d540: 0xeb082b  sltu        $at, $a3, $t3
    ctx->pc = 0x29d540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x29d544: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x29D544u;
    {
        const bool branch_taken_0x29d544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d544) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D54Cu;
    // 0x29d54c: 0x0  nop
    ctx->pc = 0x29d54cu;
    // NOP
label_29d550:
    // 0x29d550: 0x18b082b  sltu        $at, $t4, $t3
    ctx->pc = 0x29d550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x29d554: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D554u;
    {
        const bool branch_taken_0x29d554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d554) {
            ctx->pc = 0x29D568u;
            goto label_29d568;
        }
    }
    ctx->pc = 0x29D55Cu;
    // 0x29d55c: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x29d55cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29d560: 0x1560001b  bnez        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x29D560u;
    {
        const bool branch_taken_0x29d560 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d560) {
            ctx->pc = 0x29D5D0u;
            goto label_29d5d0;
        }
    }
    ctx->pc = 0x29D568u;
label_29d568:
    // 0x29d568: 0xc583c  dsll32      $t3, $t4, 0
    ctx->pc = 0x29d568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << (32 + 0));
    // 0x29d56c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x29d56cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x29d570: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x29d570u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x29d574: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x29d574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x29d578: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x29d578u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x29d57c: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x29d57cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d580: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x29d580u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d584: 0xe9502d  daddu       $t2, $a3, $t1
    ctx->pc = 0x29d584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 9));
    // 0x29d588: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x29d588u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x29d58c: 0x189482d  daddu       $t1, $t4, $t1
    ctx->pc = 0x29d58cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 9));
    // 0x29d590: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x29d590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29d594: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x29d594u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x29d598: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x29d598u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29d59c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29d59cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x29d5a0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x29d5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x29d5a4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x29d5a4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x29d5a8: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x29d5a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x29d5ac: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x29d5b0: 0xdd4a0000  ld          $t2, 0x0($t2)
    ctx->pc = 0x29d5b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29d5b4: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x29d5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x29d5b8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x29d5b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5bc: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x29d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x29d5c0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d5c4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29d5c8: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x29d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x29d5cc: 0x0  nop
    ctx->pc = 0x29d5ccu;
    // NOP
label_29d5d0:
    // 0x29d5d0: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x29d5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d5d4: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x29d5d4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x29d5d8: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29d5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d5dc: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x29d5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x29d5e0: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x29d5e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29d5e4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x29d5e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29d5e8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x29d5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x29d5ec: 0x1285021  addu        $t2, $t1, $t0
    ctx->pc = 0x29d5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29d5f0: 0xdd4a0000  ld          $t2, 0x0($t2)
    ctx->pc = 0x29d5f0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29d5f4: 0x5540ffba  bnel        $t2, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29D5F4u;
    {
        const bool branch_taken_0x29d5f4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d5f4) {
            ctx->pc = 0x29D5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D5F4u;
            // 0x29d5f8: 0xa713a  dsrl        $t6, $t2, 4 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D4E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d4e0;
        }
    }
    ctx->pc = 0x29D5FCu;
    // 0x29d5fc: 0x0  nop
    ctx->pc = 0x29d5fcu;
    // NOP
label_29d600:
    // 0x29d600: 0x3e00008  jr          $ra
    ctx->pc = 0x29D600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D608u;
    // 0x29d608: 0x0  nop
    ctx->pc = 0x29d608u;
    // NOP
    // 0x29d60c: 0x0  nop
    ctx->pc = 0x29d60cu;
    // NOP
}
