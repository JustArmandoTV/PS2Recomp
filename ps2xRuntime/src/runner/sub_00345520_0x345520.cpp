#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00345520
// Address: 0x345520 - 0x3455c0
void sub_00345520_0x345520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345520_0x345520");
#endif

    ctx->pc = 0x345520u;

    // 0x345520: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x345520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x345524: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x345528: 0x8c6789f0  lw          $a3, -0x7610($v1)
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x34552c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x34552cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x345530: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x345530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x345534: 0x34630201  ori         $v1, $v1, 0x201
    ctx->pc = 0x345534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)513);
    // 0x345538: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x345538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
    // 0x34553c: 0x90e30029  lbu         $v1, 0x29($a3)
    ctx->pc = 0x34553cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 41)));
    // 0x345540: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x345540u;
    {
        const bool branch_taken_0x345540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345540) {
            ctx->pc = 0x345544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345540u;
            // 0x345544: 0x3c03001e  lui         $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345558u;
            goto label_345558;
        }
    }
    ctx->pc = 0x345548u;
    // 0x345548: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x345548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x34554c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x34554cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x345550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x345550u;
    {
        const bool branch_taken_0x345550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345550u;
            // 0x345554: 0xacc30034  sw          $v1, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345550) {
            ctx->pc = 0x34555Cu;
            goto label_34555c;
        }
    }
    ctx->pc = 0x345558u;
label_345558:
    // 0x345558: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x345558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
label_34555c:
    // 0x34555c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x34555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x345560: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x345560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345564: 0xa4c4000c  sh          $a0, 0xC($a2)
    ctx->pc = 0x345564u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x345568: 0xa4c3000e  sh          $v1, 0xE($a2)
    ctx->pc = 0x345568u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x34556c: 0x90e30029  lbu         $v1, 0x29($a3)
    ctx->pc = 0x34556cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 41)));
    // 0x345570: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x345570u;
    {
        const bool branch_taken_0x345570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345570u;
            // 0x345574: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345570) {
            ctx->pc = 0x345594u;
            goto label_345594;
        }
    }
    ctx->pc = 0x345578u;
    // 0x345578: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x345578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34557c: 0x3c032421  lui         $v1, 0x2421
    ctx->pc = 0x34557cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9249 << 16));
    // 0x345580: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x345580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x345584: 0x34635a40  ori         $v1, $v1, 0x5A40
    ctx->pc = 0x345584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23104);
    // 0x345588: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x345588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34558c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34558Cu;
    {
        const bool branch_taken_0x34558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34558Cu;
            // 0x345590: 0xfca30008  sd          $v1, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34558c) {
            ctx->pc = 0x3455ACu;
            goto label_3455ac;
        }
    }
    ctx->pc = 0x345594u;
label_345594:
    // 0x345594: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x345594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x345598: 0x3c032421  lui         $v1, 0x2421
    ctx->pc = 0x345598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9249 << 16));
    // 0x34559c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x34559cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3455a0: 0x34635e00  ori         $v1, $v1, 0x5E00
    ctx->pc = 0x3455a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24064);
    // 0x3455a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3455a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3455a8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3455a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_3455ac:
    // 0x3455ac: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3455acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3455b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3455B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3455B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3455B0u;
            // 0x3455b4: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3455B8u;
    // 0x3455b8: 0x0  nop
    ctx->pc = 0x3455b8u;
    // NOP
    // 0x3455bc: 0x0  nop
    ctx->pc = 0x3455bcu;
    // NOP
}
