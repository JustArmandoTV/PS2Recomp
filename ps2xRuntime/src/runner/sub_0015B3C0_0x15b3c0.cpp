#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B3C0
// Address: 0x15b3c0 - 0x15b500
void sub_0015B3C0_0x15b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B3C0_0x15b3c0");
#endif

    switch (ctx->pc) {
        case 0x15b400u: goto label_15b400;
        case 0x15b450u: goto label_15b450;
        default: break;
    }

    ctx->pc = 0x15b3c0u;

    // 0x15b3c0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x15b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b3c4: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x15b3c8: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x15b3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b3cc: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x15b3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b3d0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x15b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x15b3d4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x15b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15b3d8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x15b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x15b3dc: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x15b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x15b3e0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x15b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x15b3e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x15b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b3e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15b3ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15b3f0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15b3f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3F8u;
            // 0x15b3fc: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B400u;
label_15b400:
    // 0x15b400: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x15b400u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b404: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x15b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x15b408: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x15b40c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15b410: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x15b414: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x15b414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b418: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x15b418u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b41c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x15b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x15b420: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x15b424: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x15b424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x15b428: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x15b428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x15b42c: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x15b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x15b430: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x15b434: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15b438: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x15b438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x15b43c: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x15b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x15b440: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b444: 0x3e00008  jr          $ra
    ctx->pc = 0x15B444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B444u;
            // 0x15b448: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B44Cu;
    // 0x15b44c: 0x0  nop
    ctx->pc = 0x15b44cu;
    // NOP
label_15b450:
    // 0x15b450: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x15b450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x15b454: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x15b454u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b458: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x15b45c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x15b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15b460: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15B460u;
    {
        const bool branch_taken_0x15b460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B460u;
            // 0x15b464: 0x24890020  addiu       $t1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b460) {
            ctx->pc = 0x15B4ACu;
            goto label_15b4ac;
        }
    }
    ctx->pc = 0x15B468u;
    // 0x15b468: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15b46c: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b470: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x15b474: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x15b474u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b478: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x15b478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15b47c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x15b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x15b480: 0x8d240028  lw          $a0, 0x28($t1)
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x15b484: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x15b484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x15b488: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x15b488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x15b48c: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15b490: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15b494: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x15b494u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x15b498: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x15b49c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b4a0: 0xad24001c  sw          $a0, 0x1C($t1)
    ctx->pc = 0x15b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
    // 0x15b4a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15B4A4u;
    {
        const bool branch_taken_0x15b4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4A4u;
            // 0x15b4a8: 0xad230028  sw          $v1, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4a4) {
            ctx->pc = 0x15B4F8u;
            goto label_15b4f8;
        }
    }
    ctx->pc = 0x15B4ACu;
label_15b4ac:
    // 0x15b4ac: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15b4b0: 0x24073000  addiu       $a3, $zero, 0x3000
    ctx->pc = 0x15b4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b4b4: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x15b4b8: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x15b4bc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x15b4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x15b4c0: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x15b4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x15b4c4: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x15b4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15b4c8: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x15b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x15b4cc: 0x8d250028  lw          $a1, 0x28($t1)
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x15b4d0: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x15b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x15b4d4: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x15b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x15b4d8: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x15b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
    // 0x15b4dc: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x15b4e0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15b4e4: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x15b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x15b4e8: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x15b4ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b4f0: 0xad24001c  sw          $a0, 0x1C($t1)
    ctx->pc = 0x15b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
    // 0x15b4f4: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x15b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
label_15b4f8:
    // 0x15b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B500u;
}
