#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502140
// Address: 0x502140 - 0x502220
void sub_00502140_0x502140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502140_0x502140");
#endif

    ctx->pc = 0x502140u;

    // 0x502140: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x502140u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x502144: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x502144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x502148: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x502148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50214c: 0x818b01c0  lb          $t3, 0x1C0($t4)
    ctx->pc = 0x50214cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 448)));
    // 0x502150: 0x806a01c0  lb          $t2, 0x1C0($v1)
    ctx->pc = 0x502150u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x502154: 0x810701c0  lb          $a3, 0x1C0($t0)
    ctx->pc = 0x502154u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 448)));
    // 0x502158: 0x14b182a  slt         $v1, $t2, $t3
    ctx->pc = 0x502158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x50215c: 0x38690001  xori        $t1, $v1, 0x1
    ctx->pc = 0x50215cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x502160: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x502160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x502164: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x502164u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x502168: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x502168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x50216c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x50216Cu;
    {
        const bool branch_taken_0x50216c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x502170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50216Cu;
            // 0x502170: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50216c) {
            ctx->pc = 0x50217Cu;
            goto label_50217c;
        }
    }
    ctx->pc = 0x502174u;
    // 0x502174: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x502174u;
    {
        const bool branch_taken_0x502174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x502174) {
            ctx->pc = 0x502214u;
            goto label_502214;
        }
    }
    ctx->pc = 0x50217Cu;
label_50217c:
    // 0x50217c: 0x5520000b  bnel        $t1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x50217Cu;
    {
        const bool branch_taken_0x50217c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x50217c) {
            ctx->pc = 0x502180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50217Cu;
            // 0x502180: 0xeb082a  slt         $at, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5021ACu;
            goto label_5021ac;
        }
    }
    ctx->pc = 0x502184u;
    // 0x502184: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x502184u;
    {
        const bool branch_taken_0x502184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x502184) {
            ctx->pc = 0x5021A8u;
            goto label_5021a8;
        }
    }
    ctx->pc = 0x50218Cu;
    // 0x50218c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x50218cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x502190: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x502190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x502194: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x502194u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x502198: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x502198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x50219c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x50219cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x5021a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x5021A0u;
    {
        const bool branch_taken_0x5021a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5021A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5021A0u;
            // 0x5021a4: 0xac6c0000  sw          $t4, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5021a0) {
            ctx->pc = 0x502214u;
            goto label_502214;
        }
    }
    ctx->pc = 0x5021A8u;
label_5021a8:
    // 0x5021a8: 0xeb082a  slt         $at, $a3, $t3
    ctx->pc = 0x5021a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_5021ac:
    // 0x5021ac: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x5021ACu;
    {
        const bool branch_taken_0x5021ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5021ac) {
            ctx->pc = 0x5021CCu;
            goto label_5021cc;
        }
    }
    ctx->pc = 0x5021B4u;
    // 0x5021b4: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x5021b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x5021b8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x5021b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x5021bc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x5021bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x5021c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5021c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x5021c4: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x5021c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x5021c8: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x5021c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
label_5021cc:
    // 0x5021cc: 0x5120000a  beql        $t1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x5021CCu;
    {
        const bool branch_taken_0x5021cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x5021cc) {
            ctx->pc = 0x5021D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5021CCu;
            // 0x5021d0: 0x4383c  dsll32      $a3, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5021F8u;
            goto label_5021f8;
        }
    }
    ctx->pc = 0x5021D4u;
    // 0x5021d4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x5021d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x5021d8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x5021d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x5021dc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x5021dcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x5021e0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5021e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5021e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x5021e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5021e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5021e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5021ec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x5021ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x5021f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5021F0u;
    {
        const bool branch_taken_0x5021f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5021F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5021F0u;
            // 0x5021f4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5021f0) {
            ctx->pc = 0x502214u;
            goto label_502214;
        }
    }
    ctx->pc = 0x5021F8u;
label_5021f8:
    // 0x5021f8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x5021f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x5021fc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x5021fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x502200: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x502200u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x502204: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x502204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x502208: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x502208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50220c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50220cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x502210: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x502210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_502214:
    // 0x502214: 0x3e00008  jr          $ra
    ctx->pc = 0x502214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50221Cu;
    // 0x50221c: 0x0  nop
    ctx->pc = 0x50221cu;
    // NOP
}
