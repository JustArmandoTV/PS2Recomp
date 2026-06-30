#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F82D0
// Address: 0x2f82d0 - 0x2f8430
void sub_002F82D0_0x2f82d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F82D0_0x2f82d0");
#endif

    switch (ctx->pc) {
        case 0x2f8374u: goto label_2f8374;
        case 0x2f83e8u: goto label_2f83e8;
        default: break;
    }

    ctx->pc = 0x2f82d0u;

    // 0x2f82d0: 0x8c8600c8  lw          $a2, 0xC8($a0)
    ctx->pc = 0x2f82d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2f82d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f82d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f82d8: 0x8c8800cc  lw          $t0, 0xCC($a0)
    ctx->pc = 0x2f82d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x2f82dc: 0x8c890050  lw          $t1, 0x50($a0)
    ctx->pc = 0x2f82dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2f82e0: 0x8cc30e00  lw          $v1, 0xE00($a2)
    ctx->pc = 0x2f82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3584)));
    // 0x2f82e4: 0x15050007  bne         $t0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F82E4u;
    {
        const bool branch_taken_0x2f82e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F82E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82E4u;
            // 0x2f82e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82e4) {
            ctx->pc = 0x2F8304u;
            goto label_2f8304;
        }
    }
    ctx->pc = 0x2F82ECu;
    // 0x2f82ec: 0x908700d8  lbu         $a3, 0xD8($a0)
    ctx->pc = 0x2f82ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2f82f0: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x2f82f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f82f4: 0x5420004a  bnel        $at, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F82F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82F4u;
            // 0x2f82f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F82FCu;
    // 0x2f82fc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F82FCu;
    {
        const bool branch_taken_0x2f82fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f82fc) {
            ctx->pc = 0x2F8300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82FCu;
            // 0x2f8300: 0x8cc50a68  lw          $a1, 0xA68($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8310u;
            goto label_2f8310;
        }
    }
    ctx->pc = 0x2F8304u;
label_2f8304:
    // 0x2f8304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f8304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8308: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F8308u;
    {
        const bool branch_taken_0x2f8308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8308) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F8310u;
label_2f8310:
    // 0x2f8310: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8310u;
    {
        const bool branch_taken_0x2f8310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8310u;
            // 0x2f8314: 0x8c860054  lw          $a2, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8310) {
            ctx->pc = 0x2F8320u;
            goto label_2f8320;
        }
    }
    ctx->pc = 0x2F8318u;
    // 0x2f8318: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8318u;
    {
        const bool branch_taken_0x2f8318 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8318) {
            ctx->pc = 0x2F831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8318u;
            // 0x2f831c: 0x8d260020  lw          $a2, 0x20($t1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F833Cu;
            goto label_2f833c;
        }
    }
    ctx->pc = 0x2F8320u;
label_2f8320:
    // 0x2f8320: 0x24c5ffcf  addiu       $a1, $a2, -0x31
    ctx->pc = 0x2f8320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967247));
    // 0x2f8324: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x2f8324u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f8328: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8328u;
    {
        const bool branch_taken_0x2f8328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8328) {
            ctx->pc = 0x2F8338u;
            goto label_2f8338;
        }
    }
    ctx->pc = 0x2F8330u;
    // 0x2f8330: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F8330u;
    {
        const bool branch_taken_0x2f8330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8330u;
            // 0x2f8334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8330) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F8338u;
label_2f8338:
    // 0x2f8338: 0x8d260020  lw          $a2, 0x20($t1)
    ctx->pc = 0x2f8338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_2f833c:
    // 0x2f833c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8340: 0x50c50022  beql        $a2, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F8340u;
    {
        const bool branch_taken_0x2f8340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f8340) {
            ctx->pc = 0x2F8344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8340u;
            // 0x2f8344: 0x8c860050  lw          $a2, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F83CCu;
            goto label_2f83cc;
        }
    }
    ctx->pc = 0x2F8348u;
    // 0x2f8348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f8348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f834c: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F834Cu;
    {
        const bool branch_taken_0x2f834c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f834c) {
            ctx->pc = 0x2F8364u;
            goto label_2f8364;
        }
    }
    ctx->pc = 0x2F8354u;
    // 0x2f8354: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8354u;
    {
        const bool branch_taken_0x2f8354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8354) {
            ctx->pc = 0x2F8364u;
            goto label_2f8364;
        }
    }
    ctx->pc = 0x2F835Cu;
    // 0x2f835c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F835Cu;
    {
        const bool branch_taken_0x2f835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f835c) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F8364u;
label_2f8364:
    // 0x2f8364: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x2f8364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x2f8368: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x2f8368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f836c: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x2f836cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x2f8370: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x2f8370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f8374:
    // 0x2f8374: 0x90e50018  lbu         $a1, 0x18($a3)
    ctx->pc = 0x2f8374u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2f8378: 0x54a00010  bnel        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8378u;
    {
        const bool branch_taken_0x2f8378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8378) {
            ctx->pc = 0x2F837Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8378u;
            // 0x2f837c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F83BCu;
            goto label_2f83bc;
        }
    }
    ctx->pc = 0x2F8380u;
    // 0x2f8380: 0x90e5001c  lbu         $a1, 0x1C($a3)
    ctx->pc = 0x2f8380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2f8384: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8384u;
    {
        const bool branch_taken_0x2f8384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8384) {
            ctx->pc = 0x2F83B8u;
            goto label_2f83b8;
        }
    }
    ctx->pc = 0x2F838Cu;
    // 0x2f838c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2f838cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2f8390: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2f8390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2f8394: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2f8394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f8398: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2f8398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f839c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2f839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f83a0: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f83a4: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x2f83a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f83a8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F83A8u;
    {
        const bool branch_taken_0x2f83a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f83a8) {
            ctx->pc = 0x2F83B8u;
            goto label_2f83b8;
        }
    }
    ctx->pc = 0x2F83B0u;
    // 0x2f83b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F83B0u;
    {
        const bool branch_taken_0x2f83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F83B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F83B0u;
            // 0x2f83b4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83b0) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F83B8u;
label_2f83b8:
    // 0x2f83b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2f83b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2f83bc:
    // 0x2f83bc: 0x5500ffed  bnel        $t0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F83BCu;
    {
        const bool branch_taken_0x2f83bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f83bc) {
            ctx->pc = 0x2F83C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F83BCu;
            // 0x2f83c0: 0x883821  addu        $a3, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8374;
        }
    }
    ctx->pc = 0x2F83C4u;
    // 0x2f83c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F83C4u;
    {
        const bool branch_taken_0x2f83c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f83c4) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F83CCu;
label_2f83cc:
    // 0x2f83cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x2f83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x2f83d0: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x2f83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
    // 0x2f83d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f83d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f83d8: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x2f83d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2f83dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2f83dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f83e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2f83e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f83e4: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x2f83e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2f83e8:
    // 0x2f83e8: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x2f83e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f83ec: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x2f83ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f83f0: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F83F0u;
    {
        const bool branch_taken_0x2f83f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f83f0) {
            ctx->pc = 0x2F83F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F83F0u;
            // 0x2f83f4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8414u;
            goto label_2f8414;
        }
    }
    ctx->pc = 0x2F83F8u;
    // 0x2f83f8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2f83f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f83fc: 0x90a50018  lbu         $a1, 0x18($a1)
    ctx->pc = 0x2f83fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2f8400: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8400u;
    {
        const bool branch_taken_0x2f8400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8400) {
            ctx->pc = 0x2F8410u;
            goto label_2f8410;
        }
    }
    ctx->pc = 0x2F8408u;
    // 0x2f8408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8408u;
    {
        const bool branch_taken_0x2f8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8408u;
            // 0x2f840c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8408) {
            ctx->pc = 0x2F8420u;
            goto label_2f8420;
        }
    }
    ctx->pc = 0x2F8410u;
label_2f8410:
    // 0x2f8410: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f8410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2f8414:
    // 0x2f8414: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F8414u;
    {
        const bool branch_taken_0x2f8414 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8414u;
            // 0x2f8418: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8414) {
            ctx->pc = 0x2F83E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f83e8;
        }
    }
    ctx->pc = 0x2F841Cu;
    // 0x2f841c: 0x0  nop
    ctx->pc = 0x2f841cu;
    // NOP
label_2f8420:
    // 0x2f8420: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8428u;
    // 0x2f8428: 0x0  nop
    ctx->pc = 0x2f8428u;
    // NOP
    // 0x2f842c: 0x0  nop
    ctx->pc = 0x2f842cu;
    // NOP
}
