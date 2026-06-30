#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168520
// Address: 0x168520 - 0x1685d0
void sub_00168520_0x168520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168520_0x168520");
#endif

    ctx->pc = 0x168520u;

    // 0x168520: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x168520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x168524: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x168524u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168528: 0x244c7bd8  addiu       $t4, $v0, 0x7BD8
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 31704));
    // 0x16852c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x16852cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168530: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x168534: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x168538: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
    // 0x16853c: 0x256b7bb8  addiu       $t3, $t3, 0x7BB8
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 31672));
    // 0x168540: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x168540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x168544: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x168544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x168548: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x168548u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16854c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16854cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168550: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x168550u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x168554: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x168554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x168558: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16855c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168560: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x168560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x168564: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x168568: 0x24a57ab8  addiu       $a1, $a1, 0x7AB8
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31416));
    // 0x16856c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x168570: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x168570u;
    {
        const bool branch_taken_0x168570 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x168574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168570u;
            // 0x168574: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168570) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168578u;
    // 0x168578: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x168578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x16857c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168584u;
    {
        const bool branch_taken_0x168584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168584u;
            // 0x168588: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168584) {
            ctx->pc = 0x168598u;
            goto label_168598;
        }
    }
    ctx->pc = 0x16858Cu;
    // 0x16858c: 0x0  nop
    ctx->pc = 0x16858cu;
    // NOP
label_168590:
    // 0x168590: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x168594: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_168598:
    // 0x168598: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x168598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x16859c: 0x24847bb8  addiu       $a0, $a0, 0x7BB8
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31672));
    // 0x1685a0: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x1685a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1685a4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1685a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1685a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1685ac: 0xa0ad0001  sb          $t5, 0x1($a1)
    ctx->pc = 0x1685acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
    // 0x1685b0: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x1685b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x1685b4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1685b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1685b8: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x1685b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x1685bc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1685bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1685c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1685c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1685c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1685C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1685C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685C4u;
            // 0x1685c8: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1685CCu;
    // 0x1685cc: 0x0  nop
    ctx->pc = 0x1685ccu;
    // NOP
}
