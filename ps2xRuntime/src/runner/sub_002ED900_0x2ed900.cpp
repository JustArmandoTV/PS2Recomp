#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED900
// Address: 0x2ed900 - 0x2ed9e0
void sub_002ED900_0x2ed900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED900_0x2ed900");
#endif

    switch (ctx->pc) {
        case 0x2ed924u: goto label_2ed924;
        case 0x2ed938u: goto label_2ed938;
        case 0x2ed948u: goto label_2ed948;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed978u: goto label_2ed978;
        default: break;
    }

    ctx->pc = 0x2ed900u;

    // 0x2ed900: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x2ed900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
    // 0x2ed904: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2ed904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x2ed908: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2ed908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2ed90c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2ed910: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2ed910u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed914: 0x250814e0  addiu       $t0, $t0, 0x14E0
    ctx->pc = 0x2ed914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5344));
    // 0x2ed918: 0x24e714e8  addiu       $a3, $a3, 0x14E8
    ctx->pc = 0x2ed918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5352));
    // 0x2ed91c: 0x24c614f0  addiu       $a2, $a2, 0x14F0
    ctx->pc = 0x2ed91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5360));
    // 0x2ed920: 0x24a51630  addiu       $a1, $a1, 0x1630
    ctx->pc = 0x2ed920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
label_2ed924:
    // 0x2ed924: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2ed924u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed928: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2ed928u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed92c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ed92cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed930: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ed930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed934: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ed934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed938:
    // 0x2ed938: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x2ed938u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ed93c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2ed93cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed940: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2ed940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed944: 0x0  nop
    ctx->pc = 0x2ed944u;
    // NOP
label_2ed948:
    // 0x2ed948: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2ed948u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2ed94c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2ed94cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ed950: 0x2d830028  sltiu       $v1, $t4, 0x28
    ctx->pc = 0x2ed950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2ed954: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2ed954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2ed958: 0x0  nop
    ctx->pc = 0x2ed958u;
    // NOP
    // 0x2ed95c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED95Cu;
    {
        const bool branch_taken_0x2ed95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed95c) {
            ctx->pc = 0x2ED948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed948;
        }
    }
    ctx->pc = 0x2ED964u;
    // 0x2ed964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed968: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x2ed968u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed96c: 0x0  nop
    ctx->pc = 0x2ed96cu;
    // NOP
label_2ed970:
    // 0x2ed970: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2ed970u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed974: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x2ed974u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2ed978:
    // 0x2ed978: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2ed978u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2ed97c: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x2ed97cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ed980: 0x2dc30005  sltiu       $v1, $t6, 0x5
    ctx->pc = 0x2ed980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ed984: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x2ed984u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x2ed988: 0x0  nop
    ctx->pc = 0x2ed988u;
    // NOP
    // 0x2ed98c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED98Cu;
    {
        const bool branch_taken_0x2ed98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed98c) {
            ctx->pc = 0x2ED978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed978;
        }
    }
    ctx->pc = 0x2ED994u;
    // 0x2ed994: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ed994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ed998: 0x2c83002b  sltiu       $v1, $a0, 0x2B
    ctx->pc = 0x2ed998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)43) ? 1 : 0);
    // 0x2ed99c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ED99Cu;
    {
        const bool branch_taken_0x2ed99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED99Cu;
            // 0x2ed9a0: 0x258c000a  addiu       $t4, $t4, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed99c) {
            ctx->pc = 0x2ED970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed970;
        }
    }
    ctx->pc = 0x2ED9A4u;
    // 0x2ed9a4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ed9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ed9a8: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x2ed9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2ed9ac: 0x2de30002  sltiu       $v1, $t7, 0x2
    ctx->pc = 0x2ed9acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed9b0: 0x254a0050  addiu       $t2, $t2, 0x50
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x2ed9b4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2ED9B4u;
    {
        const bool branch_taken_0x2ed9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9B4u;
            // 0x2ed9b8: 0x252901ae  addiu       $t1, $t1, 0x1AE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 430));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9b4) {
            ctx->pc = 0x2ED938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed938;
        }
    }
    ctx->pc = 0x2ED9BCu;
    // 0x2ed9bc: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2ed9bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2ed9c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ed9c4: 0x2f030002  sltiu       $v1, $t8, 0x2
    ctx->pc = 0x2ed9c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed9c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ed9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ed9cc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2ed9d0: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2ED9D0u;
    {
        const bool branch_taken_0x2ed9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED9D0u;
            // 0x2ed9d4: 0x24a5035c  addiu       $a1, $a1, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9d0) {
            ctx->pc = 0x2ED924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed924;
        }
    }
    ctx->pc = 0x2ED9D8u;
    // 0x2ed9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED9E0u;
}
