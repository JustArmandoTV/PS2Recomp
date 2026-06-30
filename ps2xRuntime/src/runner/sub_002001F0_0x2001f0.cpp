#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002001F0
// Address: 0x2001f0 - 0x200490
void sub_002001F0_0x2001f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002001F0_0x2001f0");
#endif

    switch (ctx->pc) {
        case 0x200258u: goto label_200258;
        case 0x200298u: goto label_200298;
        case 0x2002d0u: goto label_2002d0;
        case 0x200364u: goto label_200364;
        case 0x200390u: goto label_200390;
        case 0x2003ccu: goto label_2003cc;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003e4u: goto label_2003e4;
        case 0x2003f0u: goto label_2003f0;
        case 0x200414u: goto label_200414;
        default: break;
    }

    ctx->pc = 0x2001f0u;

label_2001f0:
    // 0x2001f0: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x2001f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x2001f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2001f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2001f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2001f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2001fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2001fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x200200: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x200200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x200204: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x200204u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200208: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x200208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x20020c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x20020cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200210: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x200210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x200214: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x200214u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200218: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x200218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20021c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20021cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200220: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x200220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x200224: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x200224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x200228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20022c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200230: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200234: 0xa0831c30  sb          $v1, 0x1C30($a0)
    ctx->pc = 0x200234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7216), (uint8_t)GPR_U32(ctx, 3));
    // 0x200238: 0x8c831c38  lw          $v1, 0x1C38($a0)
    ctx->pc = 0x200238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7224)));
    // 0x20023c: 0x8fb40500  lw          $s4, 0x500($sp)
    ctx->pc = 0x20023cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x200240: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x200240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x200244: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x200244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
    // 0x200248: 0xafaa00f4  sw          $t2, 0xF4($sp)
    ctx->pc = 0x200248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 10));
    // 0x20024c: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x20024Cu;
    {
        const bool branch_taken_0x20024c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x200250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20024Cu;
            // 0x200250: 0xafab00f0  sw          $t3, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20024c) {
            ctx->pc = 0x2002E8u;
            goto label_2002e8;
        }
    }
    ctx->pc = 0x200254u;
    // 0x200254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x200254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200258:
    // 0x200258: 0x8fc31c34  lw          $v1, 0x1C34($fp)
    ctx->pc = 0x200258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7220)));
    // 0x20025c: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x20025cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x200260: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200264: 0x1475000c  bne         $v1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x200264u;
    {
        const bool branch_taken_0x200264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x200264) {
            ctx->pc = 0x200298u;
            goto label_200298;
        }
    }
    ctx->pc = 0x20026Cu;
    // 0x20026c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x20026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x200270: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x200270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x200274: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x200274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x200278: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20027c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200280: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x200280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200284: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x200284u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x200288: 0x8faa00f4  lw          $t2, 0xF4($sp)
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x20028c: 0x8fab00f0  lw          $t3, 0xF0($sp)
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x200290: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x200290u;
    SET_GPR_U32(ctx, 31, 0x200298u);
    ctx->pc = 0x200294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200290u;
            // 0x200294: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    goto label_2001f0;
    ctx->pc = 0x200298u;
label_200298:
    // 0x200298: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20029c: 0x1477000c  bne         $v1, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x20029Cu;
    {
        const bool branch_taken_0x20029c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x20029c) {
            ctx->pc = 0x2002D0u;
            goto label_2002d0;
        }
    }
    ctx->pc = 0x2002A4u;
    // 0x2002a4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2002a8: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x2002a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2002ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2002acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2002b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2002b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002b4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2002b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2002b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2002b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002bc: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2002c0: 0x8faa00f4  lw          $t2, 0xF4($sp)
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2002c4: 0x8fab00f0  lw          $t3, 0xF0($sp)
    ctx->pc = 0x2002c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2002c8: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x2002C8u;
    SET_GPR_U32(ctx, 31, 0x2002D0u);
    ctx->pc = 0x2002CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2002C8u;
            // 0x2002cc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    goto label_2001f0;
    ctx->pc = 0x2002D0u;
label_2002d0:
    // 0x2002d0: 0x8fc31c38  lw          $v1, 0x1C38($fp)
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7224)));
    // 0x2002d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2002d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2002d8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2002d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2002dc: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2002DCu;
    {
        const bool branch_taken_0x2002dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2002E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2002DCu;
            // 0x2002e0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002dc) {
            ctx->pc = 0x200258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200258;
        }
    }
    ctx->pc = 0x2002E4u;
    // 0x2002e4: 0x0  nop
    ctx->pc = 0x2002e4u;
    // NOP
label_2002e8:
    // 0x2002e8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2002e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2002ec: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2002ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2002f0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2002f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002f4: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2002f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2002f8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2002f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2002fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2002fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200300: 0x16a30005  bne         $s5, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200300u;
    {
        const bool branch_taken_0x200300 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x200304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200300u;
            // 0x200304: 0xafb700e0  sw          $s7, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200300) {
            ctx->pc = 0x200318u;
            goto label_200318;
        }
    }
    ctx->pc = 0x200308u;
    // 0x200308: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x200308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20030c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20030cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200310: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x200310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x200314: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_200318:
    // 0x200318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20031c: 0x56e30007  bnel        $s7, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20031Cu;
    {
        const bool branch_taken_0x20031c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x20031c) {
            ctx->pc = 0x200320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20031Cu;
            // 0x200320: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20033Cu;
            goto label_20033c;
        }
    }
    ctx->pc = 0x200324u;
    // 0x200324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200328: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x20032c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x20032cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x200330: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x200330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x200334: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x200334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x200338: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_20033c:
    // 0x20033c: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x20033cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200340: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x200340u;
    {
        const bool branch_taken_0x200340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x200340) {
            ctx->pc = 0x200460u;
            goto label_200460;
        }
    }
    ctx->pc = 0x200348u;
    // 0x200348: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x20034c: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x200350: 0x2c48821  addu        $s1, $s6, $a0
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x200354: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x200354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x200358: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20035c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x200360: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200364:
    // 0x200364: 0x8fb200e0  lw          $s2, 0xE0($sp)
    ctx->pc = 0x200364u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x200368: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20036c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200370: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x200370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200374: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x200374u;
    {
        const bool branch_taken_0x200374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x200374) {
            ctx->pc = 0x200448u;
            goto label_200448;
        }
    }
    ctx->pc = 0x20037Cu;
    // 0x20037c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x20037cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200380: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x200384: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x200388: 0x2c38021  addu        $s0, $s6, $v1
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x20038c: 0x0  nop
    ctx->pc = 0x20038cu;
    // NOP
label_200390:
    // 0x200390: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x200390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x200394: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x200394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x200398: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x200398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20039c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2003a0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2003A0u;
    {
        const bool branch_taken_0x2003a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003a0) {
            ctx->pc = 0x200430u;
            goto label_200430;
        }
    }
    ctx->pc = 0x2003A8u;
    // 0x2003a8: 0x83c31c32  lb          $v1, 0x1C32($fp)
    ctx->pc = 0x2003a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 7218)));
    // 0x2003ac: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2003ACu;
    {
        const bool branch_taken_0x2003ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003ac) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003B4u;
    // 0x2003b4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x2003b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2003b8: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x2003b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2003bc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2003BCu;
    {
        const bool branch_taken_0x2003bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003bc) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003C4u;
    // 0x2003c4: 0xc081be4  jal         func_206F90
    ctx->pc = 0x2003C4u;
    SET_GPR_U32(ctx, 31, 0x2003CCu);
    ctx->pc = 0x2003C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003C4u;
            // 0x2003c8: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (runtime->hasFunction(0x206F90u)) {
        auto targetFn = runtime->lookupFunction(0x206F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003CCu; }
        if (ctx->pc != 0x2003CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F90_0x206f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003CCu; }
        if (ctx->pc != 0x2003CCu) { return; }
    }
    ctx->pc = 0x2003CCu;
label_2003cc:
    // 0x2003cc: 0x82040001  lb          $a0, 0x1($s0)
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2003d0: 0xc081be4  jal         func_206F90
    ctx->pc = 0x2003D0u;
    SET_GPR_U32(ctx, 31, 0x2003D8u);
    ctx->pc = 0x2003D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003D0u;
            // 0x2003d4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (runtime->hasFunction(0x206F90u)) {
        auto targetFn = runtime->lookupFunction(0x206F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D8u; }
        if (ctx->pc != 0x2003D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F90_0x206f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D8u; }
        if (ctx->pc != 0x2003D8u) { return; }
    }
    ctx->pc = 0x2003D8u;
label_2003d8:
    // 0x2003d8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2003d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2003dc: 0xc081be4  jal         func_206F90
    ctx->pc = 0x2003DCu;
    SET_GPR_U32(ctx, 31, 0x2003E4u);
    ctx->pc = 0x2003E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003DCu;
            // 0x2003e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (runtime->hasFunction(0x206F90u)) {
        auto targetFn = runtime->lookupFunction(0x206F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003E4u; }
        if (ctx->pc != 0x2003E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F90_0x206f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003E4u; }
        if (ctx->pc != 0x2003E4u) { return; }
    }
    ctx->pc = 0x2003E4u;
label_2003e4:
    // 0x2003e4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2003e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2003e8: 0xc081be4  jal         func_206F90
    ctx->pc = 0x2003E8u;
    SET_GPR_U32(ctx, 31, 0x2003F0u);
    ctx->pc = 0x2003ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003E8u;
            // 0x2003ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (runtime->hasFunction(0x206F90u)) {
        auto targetFn = runtime->lookupFunction(0x206F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003F0u; }
        if (ctx->pc != 0x2003F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F90_0x206f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003F0u; }
        if (ctx->pc != 0x2003F0u) { return; }
    }
    ctx->pc = 0x2003F0u;
label_2003f0:
    // 0x2003f0: 0x8fa700b4  lw          $a3, 0xB4($sp)
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2003f4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2003f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2003f8: 0x8fa900bc  lw          $t1, 0xBC($sp)
    ctx->pc = 0x2003f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2003fc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2003fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x200400: 0x8faa00b8  lw          $t2, 0xB8($sp)
    ctx->pc = 0x200400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x200404: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x200408: 0x24c6b380  addiu       $a2, $a2, -0x4C80
    ctx->pc = 0x200408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947712));
    // 0x20040c: 0xc0a8410  jal         func_2A1040
    ctx->pc = 0x20040Cu;
    SET_GPR_U32(ctx, 31, 0x200414u);
    ctx->pc = 0x200410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20040Cu;
            // 0x200410: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1040u;
    if (runtime->hasFunction(0x2A1040u)) {
        auto targetFn = runtime->lookupFunction(0x2A1040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200414u; }
        if (ctx->pc != 0x200414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1040_0x2a1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200414u; }
        if (ctx->pc != 0x200414u) { return; }
    }
    ctx->pc = 0x200414u;
label_200414:
    // 0x200414: 0x0  nop
    ctx->pc = 0x200414u;
    // NOP
label_200418:
    // 0x200418: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x200418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x20041c: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x20041cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x200420: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x200420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x200424: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x200428: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x200428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20042c: 0x0  nop
    ctx->pc = 0x20042cu;
    // NOP
label_200430:
    // 0x200430: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x200430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x200434: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x200434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x200438: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x200438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20043c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x20043Cu;
    {
        const bool branch_taken_0x20043c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20043Cu;
            // 0x200440: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20043c) {
            ctx->pc = 0x200390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200390;
        }
    }
    ctx->pc = 0x200444u;
    // 0x200444: 0x0  nop
    ctx->pc = 0x200444u;
    // NOP
label_200448:
    // 0x200448: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x200448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20044c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20044cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x200450: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x200450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x200454: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x200454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200458: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x200458u;
    {
        const bool branch_taken_0x200458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200458u;
            // 0x20045c: 0x26d60060  addiu       $s6, $s6, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200458) {
            ctx->pc = 0x200364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200364;
        }
    }
    ctx->pc = 0x200460u;
label_200460:
    // 0x200460: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x200460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x200464: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x200464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200468: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x200468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20046c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20046cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200470: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x200470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200474: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x200474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200478: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x200478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20047c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20047cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200480: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200488: 0x3e00008  jr          $ra
    ctx->pc = 0x200488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200488u;
            // 0x20048c: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200490u;
}
